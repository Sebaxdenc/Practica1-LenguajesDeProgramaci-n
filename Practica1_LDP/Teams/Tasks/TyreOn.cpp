//
// Created by Sebas on 21/03/2024.
//

#include "TyreOn.h"

//Constructores con polimorfismo
TyreOn::TyreOn(bool beReady, bool wheelAvailable, bool finished) {
    this->beReady = beReady;
    this->wheelAvaliable = wheelAvailable;
    this->finished = finished;
}
TyreOn::TyreOn(){
    this->beReady = NULL;
    this->wheelAvaliable = NULL;
    this->finished = NULL;
}

//Setters
void TyreOn::setBeReady(bool beReady){
    this->beReady = beReady;
}

void TyreOn::setWheelAvaliable(bool wheelAvaliable) {
    this->wheelAvaliable = wheelAvaliable;
}

void TyreOn::setFinished(bool finished) {
    this->finished = finished;
}
//Getters
bool TyreOn::getBeReady() {
    return this->beReady;
}

bool TyreOn::getWheelAvaliable() {
    return this->wheelAvaliable;
}

bool TyreOn::getFinished() {
    return this->finished;
}

int TyreOn::getMaximumNumOfMembers() {
    return MAXIMUM_NUM_OF_MEMBERS;
}

//Mis metodos
void TyreOn::putTheTyre(){
    if (this->wheelAvaliable && this->beReady) {
        cout << "ya estoy poniendo la llanta pa" << endl;
        this->finished = true;
    }else {
        mistake();
    }
}

void TyreOn::sayAlready() {
    if (this->finished){
        cout << "ya la pueden apretar paa" <<endl;
    } else {
        mistake();
    }
}

void TyreOn::mistake() {
    cout << "No pude :(" << endl;
}