//
// Created by Sebas on 19/03/2024.
//

#ifndef PRACTICA1_LDP_PITCREWTEAM_H
#define PRACTICA1_LDP_PITCREWTEAM_H

#include "Tasks/LollipopMan.h"
#include "Tasks/TyreGunner.h"
#include "Tasks/TyreOff.h"
#include "Tasks/TyreOn.h"

//Abstraccion (crear una clase de una situacion de la vida real)
//Herencia (una clase que hereda de varias otras clases)
class PitCrewTeam : public LollipopMan, public TyreGunner, public TyreOff, public TyreOn{
private: //Encapsulamiento
    //Atributos
    string name;
    int age;
    string position;
    int salary;

    //Mi metodo privado
    void aumentarSalario();

public:
    //Constructores con polimorfismo
    PitCrewTeam(string name, int age, string position, int salary);//Para los drivers team
    PitCrewTeam(string name, int age, string position, int salary, bool placeFound, bool placeDontHinder);//LollipopMan
    PitCrewTeam(int age, string position, string name, int salary, bool wheelGunOn, bool beReady);//TyreGunner
    PitCrewTeam(string name, int age, string position, int salary, bool beReady, bool wheelOnHand, bool finished);//TyreOff
    PitCrewTeam(int age, string position, string name, int salary, bool beReady, bool wheelAvailable, bool finished);//TyreOn

    //Setters
    void setName(string name);
    void setAge(int age);
    void setPosition(string position);
    void setSalary(int salary);

    //Getters
    string getName();
    int getAge();
    string getPosition();
    int getSalary();

    //Mis metodos
    void report(); // Presentación del man
    void happines(); // Si el man esta feliz con el sueldo
};

#endif //PRACTICA1_LDP_PITCREWTEAM_H
