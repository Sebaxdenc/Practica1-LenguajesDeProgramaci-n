#include <iostream>
#include "Teams/TeamDriverA.h"
#include "Teams/TeamDriverB.h"
int main() {
    TeamDriverB juan ("carro1", true, "juan", 20, "lollipop", 200000);
    TeamDriverA pedro ("carro1", true, "juan", 20, "lolli", 200000);
    cout << pedro.getPosition() << endl;
}
