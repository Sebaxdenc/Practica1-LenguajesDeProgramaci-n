//
// Created by Sebas on 21/03/2024.
//

#include "FrontJack.h"

//Constructor
FrontJack::FrontJack(bool spare, bool unable, float weight) {
    this->spare = spare;
    this->unable = unable;
    this->weight = weight;
}
FrontJack::FrontJack(){
    this->spare = NULL;
    this->unable = NULL;
    this->weight = 0.0;
}

//Setters
void FrontJack::setSpare(bool spare){
    this->spare = spare;
};
void FrontJack::setUnable(bool unable) {
    this->unable = unable;
}
void FrontJack::setWeight(float weight) {
    this->weight = weight;
}

//Getters
bool FrontJack::getSpare() {
    return this->spare;
}
bool FrontJack::getUnable() {
    return this->unable;
}
float FrontJack::getWeight() {
    return this->weight;
}

//Mis metodos
void FrontJack::liftTheCar() {
    if(!this->spare && !this->unable){
        cout << "Ya dezlize el gato y " << applyWeight()<< endl;
    }else{
        cout << "yo no puedo hacerlo, que lo haga mi respuesto" << endl;
    }
}
string FrontJack::applyWeight() {
    return "Le aplique un peso de " + to_string(this->weight);
}
void FrontJack::releaseTheCar() {
    if(!this->spare && !this->unable){
        cout << "Ya solte el carro" << endl;
    }else{
        cout << "Yo no puedo hacerlo, que lo haga mi respuesto" << endl;
    }
}