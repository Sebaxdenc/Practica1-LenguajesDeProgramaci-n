//
// Created by Sebas on 19/03/2024.
//

#ifndef PRACTICA1_LDP_PITCREWTEAM_H
#define PRACTICA1_LDP_PITCREWTEAM_H

#include <iostream>
using namespace std;


class PitCrewTeam {
private:
    //Atributos
    string name;
    int age;
    string position;
    int salary;



public:
    //Constructor
    PitCrewTeam(string name, int age, string position, int salary);

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
