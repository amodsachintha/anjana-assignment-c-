//
// Created by amod on 2/13/19.
//

#ifndef ANJANA_MENU_H
#define ANJANA_MENU_H


#include "My1DArray.h"
#include "Conversion.h"

class Menu {
public:
    void displayMainMenu();

private:
    My1DArray my1DArray;
    Conversion conversion;
    void displayConversionSubMenu();
    void displayMy1DArraySubMenu();
    void processMainMenu();
    void processConversions();
    void processMy1DArray();
    int getNavigationInput();
    double getUserConversionValue();
    std::vector<double > getInputs();
};


#endif //ANJANA_MENU_H
