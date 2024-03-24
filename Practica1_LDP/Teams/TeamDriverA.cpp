//
// Created by Sebas on 19/03/2024.
//

#include "TeamDriverA.h"

//Inicializo la variable estatica
int TeamDriverA::numOfMember = 0;

//Constructores con polimorfismo
TeamDriverA::TeamDriverA(string raceCarToFix, bool beReady, string name, int age, string position, int salary,
        bool spare, bool unable, float weight) : PitCrewTeam(name, age, position, salary), FrontWingFlapAdjust(),
        FrontJack(spare, unable, weight), RearJack(), SideJack(){
    numOfMember++;
    this->beReady = beReady;
    this->raceCarToFix = raceCarToFix;
    if(!canRecruit()){
        cout << name << " quedara en espera hasta que se abra un cupo" << endl;
    }
}
TeamDriverA::TeamDriverA(string raceCarToFix, bool beReady, string name, int age, string position, int salary,
        bool conditionOfTheWing, int adjustmentsMade, bool drillOn) : PitCrewTeam(name, age, position, salary),
        FrontWingFlapAdjust(conditionOfTheWing, adjustmentsMade, drillOn), FrontJack(), RearJack(), SideJack(){
    numOfMember++;
    this->beReady = beReady;
    this->raceCarToFix = raceCarToFix;
    if(!canRecruit()){
        cout << name << " quedara en espera hasta que se abra un cupo" << endl;
    }
}
TeamDriverA::TeamDriverA(string raceCarToFix, bool beReady, string name, int age, string position, int salary,
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
void TeamDriverA::setRaceCarToFix(string raceCarToFix) {
    this->raceCarToFix = raceCarToFix;
}
void TeamDriverA::setBeReady(bool beReady) {
    this->beReady = beReady;
}

//Getters
string TeamDriverA::getRaceCarToFix() {
    return this->raceCarToFix;
}
bool TeamDriverA::getBeReady() {
    return this->beReady;
}
int TeamDriverA::getNumOfMember() {
    return this->numOfMember;
}
int TeamDriverA::getMaximumNumOfMembers() {
    return MAXIMUM_NUM_OF_MEMBERS;
}

//Mis metodos
void TeamDriverA::work(string raceCar) {
    if(this->raceCarToFix == raceCar && this->beReady){
        cout << "arregladito" << endl;
    }else if(this->raceCarToFix == raceCar && !this->beReady){
        cout << "Aun no estamos listos, no lo podemos arreglar D:" << endl;
    }else{
        cout << "Eso lo arregla el otro equipo"<< endl;
    }
}
void TeamDriverA::getReady(string raceCar) {
    if(this->raceCarToFix == raceCar){
        this->beReady = true;
        cout << "Estamos listos" << endl;
    }else{
        this->beReady = false;
        cout << "Aun no viene nuestro carro, descansen" << endl;
    }
}
bool TeamDriverA::canRecruit() {
    if(numOfMember <= MAXIMUM_NUM_OF_MEMBERS){
        return true;
    }else{
        return false;
    }
}