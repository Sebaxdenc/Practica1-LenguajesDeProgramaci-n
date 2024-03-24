//
// Created by Sebas on 21/03/2024.
//

#ifndef PRACTICA1_LDP_TYREOFF_H
#define PRACTICA1_LDP_TYREOFF_H

#include <iostream>
using namespace std;

//Abstraccion (crear una clase de una situacion de la vida real)
class TyreOff {
private: //Encapsulamiento
    //Atributos
    const static int MAXIMUM_NUM_OF_MEMBERS = 4;
    bool beReady;
    bool wheelOnHand;
    bool finished;
    //Mi metodo privado
    void mistake();

public:
    //Constructores con polimorfismo
    TyreOff (bool beReady, bool wheelOnHand, bool finished);
    TyreOff ();

    //Setters
    void setBeReady(bool beReady);
    void setWheelOnHand(bool wheelOnHand);
    void setFinished(bool finished);

    //Getters
    bool getBeReady();
    bool getWheelOnHand();
    int getMaximumNumOfMembers();
    bool getFinished();

    //Mis metodos
    void removeTheTyre();
    void letPass();

};


#endif //PRACTICA1_LDP_TYREOFF_H
