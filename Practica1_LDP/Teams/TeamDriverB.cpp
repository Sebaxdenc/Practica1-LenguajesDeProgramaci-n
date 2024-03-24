//
// Created by Sebas on 19/03/2024.
//

#include "TeamDriverB.h"

//Inicializo la variable estatica
int TeamDriverB::numOfMember = 0;

//Constructores con polimorfismo
TeamDriverB::TeamDriverB(string raceCarToFix, bool beReady, string name, int age, string position, int salary,
        bool spare, bool unable, float weight) : PitCrewTeam(name, age, position, salary), FrontWingFlapAdjust(),
        FrontJack(spare, unable, weight), RearJack(), SideJack(){
    numOfMember++;
    this->beReady = beReady;
    this->raceCarToFix = raceCarToFix;
    if(!canRecruit()){
        cout << name << " quedara en espera hasta que se abra un cupo" << endl;
    }
}
TeamDriverB::TeamDriverB(string raceCarToFix, bool beReady, string name, int age, string position, int salary,
        bool conditionOfTheWing, int adjustmentsMade, bool drillOn) : PitCrewTeam(name, age, position, salary),
        FrontWingFlapAdjust(conditionOfTheWing, adjustmentsMade, drillOn), FrontJack(), RearJack(),
        SideJack(){
    numOfMember++;
    this->beReady = beReady;
    this->raceCarToFix = raceCarToFix;
    if(!canRecruit()){
        cout << name << " quedara en espera hasta que se abra un cupo" << endl;
    }
}
TeamDriverB::TeamDriverB(string raceCarToFix, bool beReady, string name, int age, string position, int salary,
        bool workFinished, bool JackAvailable) : PitCrewTeam(name, age, position, salary),
        FrontWingFlapAdjust(), FrontJack(), RearJack(beReady, JackAvailable, workFinished),
        SideJack(beReady, JackAvailable, workFinished){
    numOfMember++;
    this->beReady = beReady;
    this->raceCarToFix = raceCarToFix;
    if(!canRecruit()){
        cout << name << " quedara en espera hasta que se abra un cupo" << endl;
    }
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
        cout << "Eso no lo arreglo yo"<< endl;
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
    if(numOfMember <= MAXIMUM_NUM_OF_MEMBERS){
        return true;
    }else{
        return false;
    }
}


