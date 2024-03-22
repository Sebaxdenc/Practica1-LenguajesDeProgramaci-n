//
// Created by Sebas on 19/03/2024.
//

#ifndef PRACTICA1_LDP_LOLLIPOPMAN_H
#define PRACTICA1_LDP_LOLLIPOPMAN_H

//PitCrewTeam
#include <iostream>
using namespace std;

class LollipopMan {
private:
    //Atributos
    const static int MAXIMUM_NUM_OF_MEMBERS = 1;
    bool placeFound;
    bool placeDontHinder;

    //Metodo privado
    void giveSignal();

public:
    //Constructor
    LollipopMan(bool placeFound, bool placeDontHinder);

    //Setters
    void setPlaceFound(bool placeFound);
    void setPlaceDontHinder(bool placeDontHinder);

    //Getters
    bool getPlaceFound();
    bool getPlaceDontHinder();

    //Mis metodos
    void findPlace();
    void lookToDontHinder();
    void releaseCar();
};


#endif //PRACTICA1_LDP_LOLLIPOPMAN_H
