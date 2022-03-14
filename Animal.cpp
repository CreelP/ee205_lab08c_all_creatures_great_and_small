///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08c_all_creatures_great_and_small - EE 205 - Spr 2022
///
/// @file Animal.cpp
/// @version 1.0
///
/// @author Creel Patrocinio <creel@hawaii.edu>
/// @date   13_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#include "Animal.h"
#include <iostream>
using namespace std;

const string Animal::kingdom = "Animalia";

Animal::Animal(const std::string &newSpecies)  {
    setSpecies(newSpecies);
}

Animal::Animal(const std::string &newSpecies, Gender gender) : gender(gender) {
    setSpecies(newSpecies);
}


Animal::Animal(const std::string &newSpecies, Gender gender, float newWeight) :  gender(gender) {
    setWeight(newWeight);
    setSpecies(newSpecies);

}

Animal::Animal(const std::string &newSpecies, float newWeight) {
    setWeight(newWeight);
    setSpecies(newSpecies);

}

const std::string &Animal::getKingdom() {
    return kingdom;
}

const std::string &Animal::getSpecies() const {
    return species;
}

Gender Animal::getGender() const {
    return gender;
}

void Animal::setGender(Gender newGender) {
    if(gender != UNKNOWN_GENDER && newGender != UNKNOWN_GENDER) {
        throw logic_error("Previous gender must be UNKNOW_GENDER");

    }
        Animal::gender = newGender;

}

float Animal::getWeight() const {
    return weight;
}

void Animal::setWeight(float newWeight) {
    if (!validateWeight(newWeight)) {
        throw invalid_argument("Weight must be >0");

    }
    Animal::weight = newWeight;
}

void Animal::printInfo() {
    cout << "Animal Fields" << endl;
    cout << "Kingdom = ["<< getKingdom() << "]" << endl;
    cout << "Species = [" << getSpecies() << "]" << endl;
    cout << "Weight = [" << getWeight() << "]" << endl;
    cout << "Gender = [" << getGender() << "]" << endl;

}

bool Animal::isValid() {
    if (!validateWeight(weight))
        return false;


    return true;
}


bool Animal::validateWeight(const float newWeight) {
    if (newWeight == UNKNOWN_WEIGHT)
        return true;
    if (newWeight > 0)
        return true;

    return false;
}

bool Animal::validateSpecies(const std::string newSpecies) {
    if(newSpecies.empty() )
        return false;


    return true;
}

void Animal::setSpecies(const std::string newSpecies) {
    if(!validateSpecies(newSpecies))
        throw invalid_argument("A species can't be empty");

    species = newSpecies;

}


