//
// Created by Sebas on 21/03/2024.
//

#ifndef PRACTICA1_LDP_FRONTWINGFLAPADJUST_H
#define PRACTICA1_LDP_FRONTWINGFLAPADJUST_H

#include <iostream>
using namespace std;


class FrontWingFlapAdjust {
private:
    //Atributos
    const static int MAXIMUM_NUM_OF_MEMBERS = 2;
    bool conditionOfTheWing; //Si es falso es porque esta mal ajustado
    int adjustmentsMade; //Cuantas veces se ha ajustado el aleron
    bool drillOn; //Si tienen el taladro prendido

    //Mi metodo privado
    void drilling();

public:
    //Constructor
    FrontWingFlapAdjust(bool conditionOfTheWing, int adjusmentsMade, bool drillOn);
    FrontWingFlapAdjust();

    //Setters
    void setConditionOfTheWing(bool conditionOfTheWing);
    void setAdjusmentsMade(int adjusmentsMade);
    void setDrillOn(bool drillOn);

    //Getters
    bool getConditionOfTheWing();
    int getAdjustmentsMade();
    bool getDrillOn();

    //Mis metodos
    void receiveCommunication();
    void makeAerodynamicChanges();

};


#endif //PRACTICA1_LDP_FRONTWINGFLAPADJUST_H
