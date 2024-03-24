//
// Created by Sebas on 19/03/2024.
//

#ifndef PRACTICA1_LDP_TEAMDRIVERB_H
#define PRACTICA1_LDP_TEAMDRIVERB_H

#include "PitCrewTeam.h"
#include "Tasks/FrontJack.h"
#include "Tasks/FrontWingFlapAdjust.h"
#include "Tasks/RearJack.h"
#include "Tasks/SideJack.h"

//Abstraccion (crear una clase de una situacion de la vida real)
//Herencia (una clase que hereda de varias otras clases)
class TeamDriverB : public PitCrewTeam, public FrontJack, public FrontWingFlapAdjust, public RearJack, public SideJack {
private: //Encapsulamiento
    //Atributos
    string raceCarToFix;
    bool beReady;
    const static int MAXIMUM_NUM_OF_MEMBERS = 5;
    static int numOfMember;

    //Mi metodo privado
    static bool canRecruit();

public:
    //Constructores con polimorfismo
    TeamDriverB(string raceCarToFix, bool beReady, string name, int age, string position, int salary,
                bool spare, bool unable, float weight);//FrontJack
    TeamDriverB(string raceCarToFix, bool beReady, string name, int age, string position, int salary,
                bool conditionOfTheWing, int adjustmentsMade, bool drillOn);//FrontWingFlapAdjust
    TeamDriverB(string raceCarToFix, bool beReady, string name, int age, string position, int salary,
                bool workFinished, bool JackAvailable);//RearJack - SideJack

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


};
#include "Tasks/SideJack.h"

#endif //PRACTICA1_LDP_TEAMDRIVERB_H
