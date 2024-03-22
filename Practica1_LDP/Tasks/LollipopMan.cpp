//
// Created by Sebas on 19/03/2024.
//

#include "LollipopMan.h"

//Constructor
LollipopMan::LollipopMan(bool placeFound, bool placeDontHinder) {
    this->placeFound = placeFound;
    this->placeDontHinder = placeDontHinder;
}

//Setters
void LollipopMan::setPlaceFound(bool placeFound) {
    this->placeFound = placeFound;
}
void LollipopMan::setPlaceDontHinder(bool placeDontHinder) {
    this->placeDontHinder = placeDontHinder;
}

//Getters
bool LollipopMan::getPlaceFound() {
    return this->placeFound;
}
bool LollipopMan::getPlaceDontHinder() {
    return this->placeDontHinder;
}

//Mis metodos
void LollipopMan::findPlace() {
    cout << "Encontre un hueco seguro" << endl;
    this->placeFound = true;
}
void LollipopMan::lookToDontHinder(){
    cout << "Este lugar no estorba" << endl;
    this->placeDontHinder = true;
}
void LollipopMan::giveSignal(){
    cout << "Ya pueden soltar el coche" << endl;
}
void LollipopMan::releaseCar() {
    if(placeFound && placeDontHinder){
        giveSignal();
    }else{
      cout << "Este coche aun no puede salir" << endl;
    }
}
