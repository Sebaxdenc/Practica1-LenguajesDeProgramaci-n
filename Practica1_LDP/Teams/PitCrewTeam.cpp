//
// Created by Sebas on 19/03/2024.
//

#include "PitCrewTeam.h"

//Constructores con polimorfismo
PitCrewTeam::PitCrewTeam(string name, int age, string position, int salary) : LollipopMan(), TyreOff(), TyreGunner(), TyreOn(){
    this->name = name;
    this->age = age;
    this->position = position;
    this->salary = salary;
}
PitCrewTeam::PitCrewTeam(string name, int age, string position, int salary, bool placeFound,bool placeDontHinder)
        : LollipopMan(placeFound, placeDontHinder), TyreOff(), TyreGunner(), TyreOn(){
    this->name = name;
    this->age = age;
    this->position = position;
    this->salary = salary;
}
PitCrewTeam::PitCrewTeam(int age, string position, string name, int salary, bool beReady,bool wheelGunON)
        : TyreGunner(beReady, wheelGunON), LollipopMan(), TyreOff(), TyreOn(){
    this->name = name;
    this->age = age;
    this->position = position;
    this->salary = salary;
}
PitCrewTeam::PitCrewTeam(string name, int age, string position, int salary, bool beReady,bool wheelOnHand, bool finished)
        : TyreOff(beReady, wheelOnHand, finished), LollipopMan(), TyreGunner(), TyreOn(){
    this->name = name;
    this->age = age;
    this->position = position;
    this->salary = salary;
}
PitCrewTeam::PitCrewTeam(int age, string position, string name, int salary, bool beReady,bool wheelAvailable, bool finished)
        : TyreOn(beReady, wheelAvailable, finished), LollipopMan(), TyreGunner(), TyreOff(){
    this->name = name;
    this->age = age;
    this->position = position;
    this->salary = salary;
}

//Setters
void PitCrewTeam::setName(string name){
    this->name = name;
}
void PitCrewTeam::setAge(int age){
    this->age = age;
}
void PitCrewTeam::setPosition(string position){
    this->position = position;
}
void PitCrewTeam::setSalary(int salary){
    this->salary = salary;
}

//Getters

string PitCrewTeam::getName(){
    return this->name;
}
int PitCrewTeam::getAge(){
    return this->age;
}
string PitCrewTeam::getPosition(){
    return this->position;
}
int PitCrewTeam::getSalary(){
    return this->salary;
}

//Mis metodos
void PitCrewTeam::report(){
    cout << "Hola, me llamo " << this->getName() << ", tengo " << this->getAge() <<
        " años y soy " << this->getPosition() << endl;
}
void PitCrewTeam::happines(){
    if(this->salary < 2000){
        cout << "Me gustaria ganar mas :(" << endl;
        aumentarSalario();
        cout << "Me aumentaron 1000 el salario :D, ahora estoy mas feliz" << endl;
    }else{
        cout << "Me gusta mucho mi trabajo :D" << endl;
    }
}
void PitCrewTeam::aumentarSalario() {
    this->salary += 1000;
}