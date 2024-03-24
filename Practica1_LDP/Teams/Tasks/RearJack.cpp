//
// Created by Sebas on 21/03/2024.
//

#include "RearJack.h"

//Constructor
RearJack::RearJack(bool beReady, bool rearJackAvaliable, bool workFinished) {
    this->beReady = beReady;
    this->rearJackAvaliable = rearJackAvaliable;
    this->workFinished = workFinished;
}
RearJack::RearJack(){
    this->beReady = NULL;
    this->rearJackAvaliable = NULL;
    this->workFinished = NULL;
}
//Setters
void RearJack::setBeReady(bool beReady){
    this->beReady = beReady;
}

void RearJack::setRearJackAvaliable(bool rearJackAvaliable) {
    this->rearJackAvaliable = rearJackAvaliable;
}

void RearJack::setWorkFinished(bool workFinished) {
    this->workFinished = workFinished;
}
//Getters
bool RearJack::getBeReady() {
    return this->beReady;
}

bool RearJack::getRearJackAvaliable() {
    return this->rearJackAvaliable;
}

bool RearJack::getWorkFinished() {
    return this->workFinished;
}

int RearJack::getMaximumNumOfMembers() {
    return MAXIMUM_NUM_OF_MEMBERS;
}

//Mis metodos
void RearJack::carUp(){
    if (this->rearJackAvaliable && this->beReady) {
        cout << "ya levante el carro por atras" << endl;
        this->workFinished = true;
    }else {
        mistake();
    }
}

void RearJack::carDown() {
    if (this->workFinished){
        cout << "ya estoy bajando el carro por atras para que arranques" <<endl;
    } else {
        mistake();
    }
}

void RearJack::mistake() {
    cout << "No pude :(" << endl;
}