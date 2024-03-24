//
// Created by Sebas on 21/03/2024.
//

#ifndef PRACTICA1_LDP_FRONTJACK_H
#define PRACTICA1_LDP_FRONTJACK_H

#include <iostream>
using namespace std;

class FrontJack {
private:
    //Atributos
    const static int MAXIMUM_NUM_OF_MEMBERS = 2;
    bool spare;
    bool unable;
    float weight;

    //Mi metodo privado
    string applyWeight();

public:
    //Constructor
    FrontJack(bool spare, bool unable, float weight);
    FrontJack();

    //Setters
    void setSpare(bool spare);
    void setUnable(bool unable);
    void setWeight(float weight);

    //Getters
    bool getSpare();
    bool getUnable();
    float getWeight();

    //Mis metodos
    void liftTheCar();
    void releaseTheCar();

};


#endif //PRACTICA1_LDP_FRONTJACK_H
