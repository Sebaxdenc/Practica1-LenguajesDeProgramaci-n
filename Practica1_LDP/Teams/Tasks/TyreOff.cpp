//
// Created by Sebas on 21/03/2024.
//

#include "TyreOff.h"

//Constructores con polimorfismo
TyreOff::TyreOff(bool beReady, bool wheelOnHand, bool finished) {
    this->beReady = beReady;
    this->wheelOnHand = wheelOnHand;
    this->finished = finished;
}
TyreOff::TyreOff() {
    this->beReady = NULL;
    this->wheelOnHand = NULL;
    this->finished = NULL;
}
//Setters
void TyreOff::setBeReady(bool beReady){
    this->beReady = beReady;
}

void TyreOff::setWheelOnHand(bool wheelOnHand) {
    this->wheelOnHand = wheelOnHand;
}

void TyreOff::setFinished(bool finished) {
    this->finished = finished;
}

//Getters
bool TyreOff::getBeReady() {
    return this->beReady;
}

bool TyreOff::getWheelOnHand() {
    return this->wheelOnHand;
}

bool TyreOff::getFinished() {
    return this->finished;
}

int TyreOff::getMaximumNumOfMembers() {
    return MAXIMUM_NUM_OF_MEMBERS;
}
//Mis metodos
void TyreOff::removeTheTyre(){
    if (this->wheelOnHand && this->beReady) {
        cout << "ya quite la llanta pa" << endl;
        this->finished = true;
    }else {
        mistake();
    }
}

void TyreOff::letPass() {
    if (this->finished){
        cout << "ya puede venir el otro parcero a colocar la llanta" <<endl;
    } else {
        mistake();
    }
}

void TyreOff::mistake() {
    cout << "No pude :(" << endl;
}