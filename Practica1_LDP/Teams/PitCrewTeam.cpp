//
// Created by Sebas on 19/03/2024.
//

#include "PitCrewTeam.h"

//Constructor
PitCrewTeam::PitCrewTeam(string name, int age, string position, int salary) {
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
    }else{
        cout << "Me gusta mucho mi trabajo :D" << endl;
    }
}
