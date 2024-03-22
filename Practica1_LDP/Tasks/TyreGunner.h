//
// Created by Sebas on 21/03/2024.
//

#ifndef PRACTICA1_LDP_TYREGUNNER_H
#define PRACTICA1_LDP_TYREGUNNER_H

//PitCrewTeam
#include <iostream>
using namespace std;

class TyreGunner {
private:
    //Atributos
    const static int MAXIMUM_NUM_OF_MEMBERS = 4;
    bool beReady;
    bool wheelGunOn;

    //Metodo privado
    void mistake();

public:
    //Constructor
    TyreGunner (bool beReady, bool wheelGunOn);

    //Setters
    void setBeReady(bool beReady);
    void setWheelGunOn(bool wheelGunOn);

    //Getters
    bool getBeReady();
    bool getWheelGunOn();
    int getMaximumNumOfMembers();

    //Mis metodos
    void loosenNut();
    void tightenNut();
};


#endif //PRACTICA1_LDP_TYREGUNNER_H
