cmake_minimum_required(VERSION 3.27)
project(Practica1_LDP)

set(CMAKE_CXX_STANDARD 23)

add_executable(Practica1_LDP main.cpp
        Teams/F1team.cpp
        Teams/F1team.h
        Teams/Tasks/LollipopMan.cpp
        Teams/Tasks/LollipopMan.h
        Teams/PitCrewTeam.cpp
        Teams/PitCrewTeam.h
        Teams/TeamDriverA.cpp
        Teams/TeamDriverA.h
        Teams/TeamDriverB.cpp
        Teams/TeamDriverB.h
        Teams/Tasks/TyreGunner.cpp
        Teams/Tasks/TyreGunner.h
        Teams/Tasks/TyreOff.cpp
        Teams/Tasks/TyreOff.h
        Teams/Tasks/TyreOn.cpp
        Teams/Tasks/TyreOn.h
        Teams/Tasks/FrontJack.cpp
        Teams/Tasks/FrontJack.h
        Teams/Tasks/RearJack.cpp
        Teams/Tasks/RearJack.h
        Teams/Tasks/SideJack.cpp
        Teams/Tasks/SideJack.h
        Teams/Tasks/FrontWingFlapAdjust.cpp
        Teams/Tasks/FrontWingFlapAdjust.h)
