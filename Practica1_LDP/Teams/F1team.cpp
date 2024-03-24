//
// Created by Sebas on 19/03/2024.
//

#include "F1team.h"


//Constructor
F1team::F1team(string name, int yearOfFundation, string sponsor, int wins, int losts, string raceCar1, string raceCar2){
    this->name = name;
    this->yearOfFundation = yearOfFundation;
    this->sponsor = sponsor;
    this->wins = wins;
    this->losts = losts;
    this->raceCars[0] = raceCar1;
    this->raceCars[1] = raceCar2;
}

//Setters
 void F1team::setName(string name){
    this->name = name;
}
void F1team::setYearOfFundation(int yearOfFundation){
    this->yearOfFundation = yearOfFundation;
}
void F1team::setSponsor(string sponsor) {
    this->sponsor = sponsor;
}
void F1team::setWins(int wins){
    this->wins = wins;
}
void F1team::setLosts(int losts){
    this->losts = losts;
}
void F1team::setRaceCar(string raceCarName, int index){
    if(index<0 | index >2){
        cout << "El equipo solo puede tener 2 carros" << endl;
    }else{
        this->raceCars[index] = raceCarName;
    }
}

//Getters
string F1team::getName(){
    return this->name;
}
int F1team::getYearOfFundation() {
    return this->yearOfFundation;
}

string F1team::getSponsor(){
    return this->sponsor;
}
int F1team::getWins(){
    return this->wins;
}
int F1team::getLosts(){
    return this->losts;
}
string F1team::getRaceCars(int index) {
    if(index<0 | index >2){
        return "No se enconctro el auto";
    }else{
        return this->raceCars[index];
    }
}
int F1team::getMaximumNumOfMembers() {
    return MAXIMUM_NUM_OF_MEMBERS;
}

//Mis metodos
void F1team::presentacionDelEquipo() {
    cout << "El nombre del equipo es " << getName() << ", se fundo en el ano " << getYearOfFundation() <<
    "; al equipo lo patrocina " << getSponsor() << "y ha ganado " << getWins() << " veces :D \3" << endl;
}
void F1team::sentimientosDeLosHinchas(){
    if(this->wins > this->losts){
        cout << "Que felicidad" << endl;
    }else{
        cout << "Que tristeza" << endl;
    }
}