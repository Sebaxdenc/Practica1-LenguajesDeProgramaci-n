//
// Created by Sebas on 19/03/2024.
//

#ifndef PRACTICA1_LDP_F1TEAM_H
#define PRACTICA1_LDP_F1TEAM_H

#include <iostream>
using namespace std;

//Abstraccion (crear una clase de una situacion de la vida real)
class F1team {

private: //Encapsulamiento
    //Atributos
    const static int MAXIMUM_NUM_OF_MEMBERS = 20;
    string name;
    int yearOfFundation;
    string sponsor;
    int wins;
    int losts;
    string raceCars[2];
    /*Este arreglo tendra en su interior los 2 carros con los que
    cuenta el equipo*/

public:
    //Constructor
    F1team(string name, int yearOfFundation, string sponsor, int wins, int losts, string raceCar1, string raceCar2);

    //Setters
    void setName(string name);
    void setYearOfFundation(int yearOfFundation);
    void setSponsor(string sponsor);
    void setWins(int wins);
    void setLosts(int losts);
    void setRaceCar(string raceCarName, int index);
    /*No le pongo el set al numOfMembers porque se supone
    que estos se agregan cuando se ingresa un miembro, o se
    elimina cuando un miembro se sale*/

    //Getters
    string getName();
    int getYearOfFundation();
    string getSponsor();
    int getWins();
    int getLosts();
    string getRaceCars(int index);
    static int getMaximumNumOfMembers();

    //Mis metodos
    void presentacionDelEquipo();
    void sentimientosDeLosHinchas();
};

#endif //PRACTICA1_LDP_F1TEAM_H
