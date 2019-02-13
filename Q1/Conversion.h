//
// Created by amod on 2/13/19.
//

#ifndef ANJANA_CONVERSION_H
#define ANJANA_CONVERSION_H


class Conversion {
public:
    double GramToOunces(double weight);
    double OunceToGrams(double weight);
    double KgToStone(double weight);
    double StoneToKg(double weight);
    double PoundsToGram(double weight);
    double GramToPound(double weight);

private:
    const double GRAMS_IN_OUNCE = 28.3495;
    const double KGS_IN_STONE = 6.35029;
    const double GRAMS_IN_POUND = 453.592;
};


#endif //ANJANA_CONVERSION_H
