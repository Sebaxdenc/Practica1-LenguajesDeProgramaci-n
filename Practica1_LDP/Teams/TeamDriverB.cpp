//
// Created by Sebas on 19/03/2024.
//

#include "TeamDriverB.h"

//Inicializo la variable estatica
int TeamDriverB::numOfMember = 0;

//Constructor
TeamDriverB::TeamDriverB(string raceCarToFix, bool beReady, string name, int age, string position, int salary)
    : PitCrewTeam(name, age, position, salary){
    numOfMember++;
    this->beReady = beReady;
    this->raceCarToFix = raceCarToFix;
}

//Setters
void TeamDriverB::setRaceCarToFix(string raceCarToFix) {
    this->raceCarToFix = raceCarToFix;
}
void TeamDriverB::setBeReady(bool beReady) {
    this->beReady = beReady;
}

//Getters
string TeamDriverB::getRaceCarToFix() {
    return this->raceCarToFix;
}
bool TeamDriverB::getBeReady() {
    return this->beReady;
}
int TeamDriverB::getNumOfMember() {
    return this->numOfMember;
}
int TeamDriverB::getMaximumNumOfMembers() {
    return MAXIMUM_NUM_OF_MEMBERS;
}

//Mis metodos
void TeamDriverB::work(string raceCar) {
    if(this->raceCarToFix == raceCar && this->beReady){
        cout << "arregladito" << endl;
    }else if(this->raceCarToFix == raceCar && !this->beReady){
        cout << "Aun no estamos listos, no lo podemos arreglar D:" << endl;
    }else{
        cout << "Eso lo arregla el otro equipo"<< endl;
    }
}
void TeamDriverB::getReady(string raceCar) {
    if(this->raceCarToFix == raceCar){
        this->beReady = true;
        cout << "Estamos listos" << endl;
    }else{
        this->beReady = false;
        cout << "Aun no viene nuestro carro, descansen" << endl;
    }
}
bool TeamDriverB::canRecruit() {
    if(numOfMember < MAXIMUM_NUM_OF_MEMBERS){
        return true;
    }else{
        return false;
    }
}


