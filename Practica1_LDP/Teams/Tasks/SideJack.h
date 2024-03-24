//
// Created by Sebas on 21/03/2024.
//

#ifndef PRACTICA1_LDP_SIDEJACK_H
#define PRACTICA1_LDP_SIDEJACK_H

#include <iostream>
using namespace std;

//Abstraccion (crear una clase de una situacion de la vida real)
class SideJack {
private: //Encapsulamiento
    //Atributos
    const static int MAXIMUM_NUM_OF_MEMBERS = 2;
    bool beReady;
    bool sideJackAvaliable;
    bool workFinished;

    //Mi metodo privado
    void mistake();

public:
    //Constructores con polimorfismo
    SideJack (bool beReady, bool sideJackAvaliable, bool workFinished);
    SideJack ();
    //Setters
    void setBeReady(bool beReady);
    void setSideJackAvaliable(bool sideJackAvaliable);
    void setWorkFinished(bool workFinished);
    //Getters
    bool getBeReady();
    bool getSideJackAvaliable();
    int getMaximumNumOfMembers();
    bool getWorkFinished();
    //Mis metodos
    void cHigh();
    void cLow();
    void stabilize();

};


#endif //PRACTICA1_LDP_SIDEJACK_H
