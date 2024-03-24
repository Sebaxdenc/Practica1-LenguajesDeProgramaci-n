//Realizado por Sebastian Medina y Sebastian Duran

#include <iostream>
#include "Teams/TeamDriverA.h"
#include "Teams/TeamDriverB.h"
#include "Teams/PitCrewTeam.h"
#include "Teams/F1team.h"
int main() {

    //Creacion del equipo F1
    F1team Eafun("Eafun", 1910, "MacDonalds", 9, 2, "RayoMacquin", "FranchescoVirgolini");

    //Creacion de las personas
    //TeamDriversB
    TeamDriverB BFrontJack1("asdf_noRayoMacquin", true, "John", 30, "FrontJack", 50000, false, false, 75.5);
    TeamDriverB BFrontJack2("RayoMacquin", false, "Pedro", 30, "FrontJack", 50000, true, true, 75.5);
    TeamDriverB BFWFlapADjust("RayoMacquin", true, "Mike", 28, "FrontWingFlapAdjust", 45000, false, 2, true);
    TeamDriverB BRearJack("RayoMacquin", true, "Sebas", 35, "RearJack - SideJack", 48000, false, true);
    TeamDriverB BSideJack("RayoMacquin", true, "Maria", 35, "RearJack - SideJack", 48000, false, true);

    //TeamDriversA
    TeamDriverA AFrontJack("FranchescoVirgolini", true, "Emily", 25, "FrontJack", 55000, false, false, 70.2);
    TeamDriverA AFWFlapAdjust1("FranchescoVirgolini", true, "Sophia", 27, "FrontWingFlapAdjust", 51000, false, 1, false);
    TeamDriverA AFWFlapAdjust2("FranchescoVirgolini", false, "Caldera", 27, "FrontWingFlapAdjust", 51000, false, 1, false);
    TeamDriverA ASideJack("FranchescoVirgolini", true, "Mihaly", 29, "RearJack - SideJack", 52000, false, true);
    TeamDriverA ARearJack("FranchescoVirgolini", true, "Emma", 29, "RearJack - SideJack", 52000, false, true);

    //PitCrewTeams
    PitCrewTeam LollipopMan("John", 30, "LollipopMan", 50000, true, true);
    PitCrewTeam TyreGunner1(28, "TyreGunner", "Mike", 45000, true, true);
    PitCrewTeam TyreGunner2(28, "TyreGunner", "Salazar", 45000, true, true);
    PitCrewTeam TyreGunner3(28, "TyreGunner", "Alex", 45000, true, true);
    PitCrewTeam TyreGunner4(28, "TyreGunner", "Santi", 45000, true, true);
    PitCrewTeam TyreOff1("David", 35, "TyreOff", 48000, true, true, false);
    PitCrewTeam TyreOff2("Patricio", 35, "TyreOff", 48000, true, true, false);
    PitCrewTeam TyreOff3("Mauricio", 35, "TyreOff", 48000, true, true, false);
    PitCrewTeam TyreOff4("Agustin", 35, "TyreOff", 48000, true, true, false);
    PitCrewTeam TyreOn1(25, "TyreOn", "Emilia", 55000, true, true, false);
    PitCrewTeam TyreOn2(25, "TyreOn", "Rem", 55000, true, true, false);
    PitCrewTeam TyreOn3(25, "TyreOn", "Ram", 55000, true, true, false);
    PitCrewTeam TyreOn4(25, "TyreOn", "Waos", 55000, true, true, false);

    //Demostracion de metodos
    cout << "\nMetodos de F1team:" << endl;
    Eafun.presentacionDelEquipo();
    Eafun.sentimientosDeLosHinchas();

    cout << "\nMetodos de TeamsDriverB:" << endl;
    BFrontJack1.work("RayoMacquin");
    BFrontJack2.work("RayoMacquin");
    BFWFlapADjust.receiveCommunication();
    BFWFlapADjust.makeAerodynamicChanges();
    BRearJack.carUp();
    BRearJack.carDown();
    BSideJack.stabilize();

    cout << "\nMetodos de TeamsDriverA:" << endl;
    AFrontJack.liftTheCar();
    AFrontJack.releaseTheCar();
    cout << "El nombre de los front wing flap adjust del team A son :" << AFWFlapAdjust1.getName() << " y "<<
        AFWFlapAdjust2.getName() << endl;
    cout << "El side jack y el rear jack del team A ganan cada uno respectivamente " << ASideJack.getSalary() <<
        " y " << ARearJack.getSalary() << endl;

    cout << "\nMetodos de PitCrewTeam:" << endl;
    LollipopMan.findPlace();
    LollipopMan.lookToDontHinder();
    TyreGunner1.loosenNut();
    TyreOff1.removeTheTyre();
    TyreOff1.letPass();
    TyreOn1.putTheTyre();
    TyreOn1.sayAlready();
    TyreGunner2.tightenNut();
    LollipopMan.releaseCar();


    return 1;
}
