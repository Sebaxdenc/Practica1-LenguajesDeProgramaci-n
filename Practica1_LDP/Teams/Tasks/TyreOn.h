//
// Created by Sebas on 21/03/2024.
//

#ifndef PRACTICA1_LDP_TYREON_H
#define PRACTICA1_LDP_TYREON_H

#include <iostream>
using namespace std;

//Abstraccion (crear una clase de una situacion de la vida real)
class TyreOn {
private: //Encapsulamiento
    //Atributos
    const static int MAXIMUM_NUM_OF_MEMBERS = 4;
    bool beReady;
    bool wheelAvaliable;
    bool finished;

    //Mi metodo privado
    void mistake();
public:
    //Constructor con polimorfismo
    TyreOn (bool beReady, bool wheelAvaliable, bool finished);
    TyreOn ();

    //Setters
    void setBeReady(bool beReady);
    void setWheelAvaliable(bool wheelAvaliable);
    void setFinished(bool finished);

    //Getters
    bool getBeReady();
    bool getWheelAvaliable();
    int getMaximumNumOfMembers();
    bool getFinished();

    //Mis metodos
    void putTheTyre();
    void sayAlready();
};


#endif //PRACTICA1_LDP_TYREON_H
