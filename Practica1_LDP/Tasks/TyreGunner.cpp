//
// Created by Sebas on 21/03/2024.
//

#include "TyreGunner.h"

//Constructor
TyreGunner::TyreGunner(bool beReady, bool wheelGunOn) {
    this->beReady = beReady;
    this->wheelGunOn = wheelGunOn;
}

//Setters
void TyreGunner::setBeReady(bool beReady){
    this->beReady = beReady;
}

void TyreGunner::setWheelGunOn(bool wheelGunOn) {
    this->wheelGunOn = wheelGunOn;
}
//Getters
bool TyreGunner::getBeReady() {
    return this->beReady;
}

bool TyreGunner::getWheelGunOn() {
    return this->wheelGunOn;
}
int TyreGunner::getMaximumNumOfMembers() {
    return MAXIMUM_NUM_OF_MEMBERS;
}

//Mis metodos
void TyreGunner::loosenNut() {
    if (this->wheelGunOn && this->beReady) {
        cout << "tolis, ya solté la tuerca" << endl;
    }else {
        mistake();
    }
}

void TyreGunner::tightenNut() {
    if (this->wheelGunOn && this->beReady){
        cout << "Ya esta apretada"<<endl;
    } else {
        mistake();
    }
}

void TyreGunner::mistake() {
    cout << "No pude :(" << endl;
}


