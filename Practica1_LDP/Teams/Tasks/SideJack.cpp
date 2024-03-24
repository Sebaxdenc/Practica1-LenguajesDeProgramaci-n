//
// Created by Sebas on 21/03/2024.
//

#include "SideJack.h"

//Constructores con polimorfismo
SideJack::SideJack(bool beReady, bool sideJackAvaliable, bool workFinished) {
    this->beReady = beReady;
    this->sideJackAvaliable = sideJackAvaliable;
    this->workFinished = workFinished;
}
SideJack::SideJack() {
    this->beReady = NULL;
    this->sideJackAvaliable = NULL;
    this->workFinished = NULL;
}
//Setters
void SideJack::setBeReady(bool beReady){
    this->beReady = beReady;
}

void SideJack::setSideJackAvaliable(bool sideJackAvaliable) {
    this->sideJackAvaliable = sideJackAvaliable;
}

void SideJack::setWorkFinished(bool workFinished) {
    this->workFinished = workFinished;
}
//Getters
bool SideJack::getBeReady() {
    return this->beReady;
}

bool SideJack::getSideJackAvaliable() {
    return this->sideJackAvaliable;
}

bool SideJack::getWorkFinished() {
    return this->workFinished;
}

int SideJack::getMaximumNumOfMembers() {
    return MAXIMUM_NUM_OF_MEMBERS;
}

//Mis metodos
void SideJack::cHigh(){
    if (this->sideJackAvaliable && this->beReady) {
        cout << "ya levanté el carro por el lado" << endl;
        this->workFinished = true;
    }else {
        mistake();
    }
}

void SideJack::cLow() {
    if (this->workFinished){
        cout << "ya estoy bajando el carro lateralmente " <<endl;
    } else {
        mistake();
    }
}

void SideJack::mistake() {
    cout << "No pude :(" << endl;
}

void SideJack::stabilize(){
    cout << "El coche esta estabilizado" << endl;
}