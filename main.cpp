///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file main.cpp
/// @version 1.0
///
/// @author Creel Patrocinio <creel@hawaii.edu>
/// @date   13_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "Animal.h"
#include <iostream>

int main() {
    Animal myFirstAnimal = Animal( "Felis catus" );
    myFirstAnimal.setGender( MALE );
    myFirstAnimal.setWeight( 19 ); // @todo Refactor to include Unit of Measure
    myFirstAnimal.printInfo();
    return 0;
}
