//
// Created by Sebas on 21/03/2024.
//

#ifndef PRACTICA1_LDP_REARJACK_H
#define PRACTICA1_LDP_REARJACK_H

#include <iostream>
using namespace std;

//Abstraccion (crear una clase de una situacion de la vida real)
class RearJack {
private: //Encapsulamiento
    //Atributos
    const static int MAXIMUM_NUM_OF_MEMBERS = 2;
    bool beReady;
    bool rearJackAvaliable;
    bool workFinished;

    //Mi metodo privado
    void mistake();

public:
    //Constructores con polimorfismo
    RearJack (bool beReady, bool rearJackAvaliable, bool workFinished);
    RearJack ();

    //Setters
    void setBeReady(bool beReady);
    void setRearJackAvaliable(bool rearJackAvaliable);
    void setWorkFinished(bool workFinished);

    //Getters
    bool getBeReady();
    bool getRearJackAvaliable();
    int getMaximumNumOfMembers();
    bool getWorkFinished();

    //Mis metodos
    void carUp();
    void carDown();
};


#endif //PRACTICA1_LDP_REARJACK_H
