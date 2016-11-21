#include "Decider.h"

Decider::Decider(Aircraft* this_Aircraft,
	concurrency::concurrent_unordered_map<std::string, Aircraft*>* intruding_aircraft) : thisAircraft_(this_Aircraft), intruderAircraft_(intruding_aircraft) {}

void Decider::Start() {
	Decider::Analyze(thisAircraft_, *intruderAircraft_);
}

void Decider::Analyze(Aircraft * thisAircraft, concurrency::concurrent_unordered_map<std::string, Aircraft*> intruding_aircraft) {
	Aircraft* intruder = Decider::QueryIntrudingAircraftMap(intruding_aircraft, "testAircraftID");
	Decider::DetermineActionRequired(intruder);
}

Aircraft* Decider::QueryIntrudingAircraftMap(concurrency::concurrent_unordered_map<std::string, Aircraft*> intr_aircraft, char* ID) {
	if (Aircraft* intruderFromMap = intr_aircraft[ID]) { return intruderFromMap; }
	else { return NULL; }
}

void Decider::DetermineActionRequired(Aircraft* intruder) {
	/* Need to have access to two measurements of range and the time between those measurements to calculate rate */
	LLA thisAircraftsPosition = thisAircraft_->position_;
	LLA const intrudersPosition = intruder->position_;
	double thisAircraftsAltitude = thisAircraftsPosition.altitude_.to_feet();
	double intrudersAltitude = intrudersPosition.altitude_.to_feet();

	double horizontalSeparation = thisAircraftsPosition.Range(&intrudersPosition).to_feet();
	double horizontalRate = Decider::CalculateRate(horizontalSeparation, 0.0, 0.0, 0.0); //need 2x measure
	double hoizontalTau = Decider::CalculateTau(horizontalSeparation, horizontalRate);

	double verticalSeparation = Decider::CalculateVerticalSeparation(thisAircraftsAltitude, intrudersAltitude);
	double verticalRate = Decider::CalculateRate(verticalSeparation, 0.0, 0.0, 0.0); //need 2x measure
	double verticalTau = Decider::CalculateTau(verticalSeparation, verticalRate);

	double slantRange = Decider::CalculateSlantRange(horizontalSeparation, verticalSeparation);
	double slantRangeRate = Decider::CalculateSlantRangeRate(horizontalRate, verticalRate, 0.0, 0.0); //need 2x measure
	double slantRangeTau = Decider::CalculateTau(slantRange, slantRangeRate);

	if (hoizontalTau <= raThreshold && verticalTau <= raThreshold) {
		Decider::SetState(intruder, TA);
	}
	else if (hoizontalTau <= taThreshold && verticalTau <= taThreshold) {
		Decider::SetState(intruder, RA);
	}
	else {
		Decider::SetState(intruder, NORMAL);
	}
}

double Decider::CalculateVerticalSeparation(double thisAircraftsAltitude, double intrudersAltitude) {
	return abs(thisAircraftsAltitude - intrudersAltitude);
}

double Decider::CalculateRate(double separation1, double separation2, time_t t1, time_t t2) {
	return ((separation2 - separation1) / (t2 - t1));
}

double Decider::CalculateTau(double separation, double rate) {
	return separation / rate;
}

double Decider::CalculateSlantRange(double horizontalSeparation, double verticalSeparation) {
	return sqrt(pow((horizontalSeparation, 2), pow(verticalSeparation, 2)));
}

double Decider::CalculateSlantRangeRate(double horizontalRate, double verticalRate, time_t t1, time_t t2) {
	return (sqrt((pow(horizontalRate, 2), pow(verticalRate, 2))) / (t2 - t1));
}

void Decider::SetState(Aircraft* intruder, State state) {
	Decider::stateMap[intruder->id_] = state;
}

Decider::State Decider::GetState(Aircraft* intruder) {
	return Decider::stateMap[intruder->id_];
}