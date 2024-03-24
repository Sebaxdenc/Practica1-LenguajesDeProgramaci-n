//
// Created by Sebas on 21/03/2024.
//

#include "FrontWingFlapAdjust.h"

//Constructor
FrontWingFlapAdjust::FrontWingFlapAdjust(bool conditionOfTheWing, int adjusmentsMade, bool drillOn) {
    this->conditionOfTheWing = conditionOfTheWing;
    this->adjustmentsMade = adjusmentsMade;
    this->drillOn = drillOn;
}
FrontWingFlapAdjust::FrontWingFlapAdjust(){
    this->conditionOfTheWing = NULL;
    this->adjustmentsMade = 0;
    this->drillOn = NULL;
}

//Setters
void FrontWingFlapAdjust::setAdjusmentsMade(int adjusmentsMade) {
    this->adjustmentsMade = adjusmentsMade;
}

void FrontWingFlapAdjust::setConditionOfTheWing(bool conditionOfTheWing) {
    this->conditionOfTheWing = conditionOfTheWing;
}

void FrontWingFlapAdjust::setDrillOn(bool drillOn) {
    this->drillOn = drillOn;
}

//Getters
bool FrontWingFlapAdjust::getConditionOfTheWing() {
    return this->conditionOfTheWing;
}

int FrontWingFlapAdjust::getAdjustmentsMade() {
    return this->adjustmentsMade;
}

bool FrontWingFlapAdjust::getDrillOn() {
    return this->drillOn;
}

//Mis metodos
void FrontWingFlapAdjust::receiveCommunication() {
    this->conditionOfTheWing = false;
    cout << "Ya recibi las indicaciones del piloto" << endl;
}

void FrontWingFlapAdjust::makeAerodynamicChanges() {
    drilling();
    cout << "El aleron ya quedo bien ajustado" << endl;
    this->conditionOfTheWing = true;
}

void FrontWingFlapAdjust::drilling() {
    cout << "Ya gire el tornillo del aleron" << endl;
}