cmake_minimum_required(VERSION 3.27)
project(Practica1_LDP)

set(CMAKE_CXX_STANDARD 23)

add_executable(Practica1_LDP main.cpp
        Teams/F1team.cpp
        Teams/F1team.h
        Tasks/LollipopMan.cpp
        Tasks/LollipopMan.h
        Teams/PitCrewTeam.cpp
        Teams/PitCrewTeam.h
        Teams/TeamDriverA.cpp
        Teams/TeamDriverA.h
        Teams/TeamDriverB.cpp
        Teams/TeamDriverB.h
        Tasks/TyreGunner.cpp
        Tasks/TyreGunner.h
        Tasks/TyreOff.cpp
        Tasks/TyreOff.h
        Tasks/TyreOn.cpp
        Tasks/TyreOn.h
        Tasks/FrontJack.cpp
        Tasks/FrontJack.h
        Tasks/RearJack.cpp
        Tasks/RearJack.h
        Tasks/SideJack.cpp
        Tasks/SideJack.h
        Tasks/FrontWingFlapAdjust.cpp
        Tasks/FrontWingFlapAdjust.h)
