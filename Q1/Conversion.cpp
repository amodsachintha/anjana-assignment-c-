//
// Created by amod on 2/13/19.
//

#include "Conversion.h"
#include <iostream>

using namespace std;

double Conversion::GramToOunces(double weight) {
    return weight / this->GRAMS_IN_OUNCE;
}

double Conversion::OunceToGrams(double weight) {
    return weight * this->GRAMS_IN_OUNCE;
}

double Conversion::KgToStone(double weight) {
    return weight / this->KGS_IN_STONE;
}

double Conversion::StoneToKg(double weight) {
    return weight * this->KGS_IN_STONE;
}

double Conversion::PoundsToGram(double weight) {
    return weight * this->GRAMS_IN_POUND;
}

double Conversion::GramToPound(double weight) {
    return weight / this->GRAMS_IN_POUND;
}