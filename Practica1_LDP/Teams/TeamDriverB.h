//
// Created by Sebas on 19/03/2024.
//

#ifndef PRACTICA1_LDP_TEAMDRIVERB_H
#define PRACTICA1_LDP_TEAMDRIVERB_H

#include <iostream>
#include "PitCrewTeam.h"
using namespace std;

class TeamDriverB : public PitCrewTeam {
private:
    //Atributos
    string raceCarToFix;
    bool beReady;
    const static int MAXIMUM_NUM_OF_MEMBERS = 5;
    static int numOfMember;

public:
    //Constructor
    TeamDriverB(string raceCarToFix, bool beReady, string name, int age, string position, int salary);

    //Setters
    void setRaceCarToFix(string raceCarToFix);
    void setBeReady(bool beReady);
    /*No le pongo el set al numOfMembers porque se supone
    que estos se agregan cuando se ingresa un miembro, o se
    elimina cuando un miembro se sale*/

    //Getters
    string getRaceCarToFix();
    bool getBeReady();
    int getNumOfMember();
    static int getMaximumNumOfMembers();

    //Mis metodos
    void work(string raceCar);
    void getReady(string raceCar);
    static bool canRecruit();

};

#endif //PRACTICA1_LDP_TEAMDRIVERB_H
