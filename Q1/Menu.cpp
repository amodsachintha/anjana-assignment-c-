//
// Created by amod on 2/13/19.
//

#include "Menu.h"
#include <iostream>
#include <stdexcept>

using namespace std;

void Menu::displayMainMenu() {
    cout << "==** MAIN MENU **==" << endl;
    cout << "1: Show Conversion Menu" << endl;
    cout << "2: Show My1DArray Menu" << endl;
    cout << "0: Exit" << endl << "> ";

    processMainMenu();
}

void Menu::displayConversionSubMenu() {
    cout << "1: Grams to Ounces" << endl;
    cout << "2: Ounces to Grams" << endl;
    cout << "3: Kilograms to Stone" << endl;
    cout << "4: Stone to Kilograms" << endl;
    cout << "5: Pounds to Grams" << endl;
    cout << "6: Grams to Pounds" << endl;
    cout << "9: Back" << endl;
    cout << "0: Exit" << endl << "> ";

    processConversions();
}

void Menu::displayMy1DArraySubMenu() {
    cout << "1: Get Total" << endl;
    cout << "2: Get Average" << endl;
    cout << "3: Get Highest in Row" << endl;
    cout << "9: Back" << endl;
    cout << "0: Exit" << endl << "> ";

    processMy1DArray();
}

void Menu::processMainMenu() {
    int val = getNavigationInput();
    while (true) {
        switch (val) {
            case 1:
                cout << "== Conversion Sub Menu ==" << endl;
                displayConversionSubMenu();
                break;
            case 2:
                cout << "== My1DArray Sub Menu ==" << endl;
                displayMy1DArraySubMenu();
                break;
            case 0:
                cout << "Exiting.." << endl;
                exit(0);
            default:
                cout << "Invalid Input! Retry." << endl;
        }
        cout << "> ";
        val = getNavigationInput();
    }

}

void Menu::processConversions() {
    int val = getNavigationInput();
    while (true) {
        switch (val) {
            case 1:
                cout << "Grams to Ounces: ";
                cout << "Ounces: " << this->conversion.GramToOunces(getUserConversionValue()) << endl << endl;
                displayConversionSubMenu();
                break;
            case 2:
                cout << "Ounes to Grams: ";
                cout << "Grams: " << this->conversion.OunceToGrams(getUserConversionValue()) << endl << endl;
                displayConversionSubMenu();
                break;
            case 3:
                cout << "Kilograms to Stone: ";
                cout << "Stone: " << this->conversion.KgToStone(getUserConversionValue()) << endl << endl;
                displayConversionSubMenu();
                break;
            case 4:
                cout << "Stone to Kilograms: ";
                cout << "Kilograms: " << this->conversion.StoneToKg(getUserConversionValue()) << endl << endl;
                displayConversionSubMenu();
                break;
            case 5:
                cout << "Pounds to Grams: ";
                cout << "Grams: " << this->conversion.PoundsToGram(getUserConversionValue()) << endl << endl;
                displayConversionSubMenu();
                break;
            case 6:
                cout << "Grams to Pounds: ";
                cout << "Pounds: " << this->conversion.GramToPound(getUserConversionValue()) << endl << endl;
                displayConversionSubMenu();
                break;
            case 9:
                displayMainMenu();
            case 0:
                cout << "Exiting.." << endl;
                exit(0);
            default:
                cout << "Invalid Input! Retry." << endl;
        }
        val = getNavigationInput();
    }
}

void Menu::processMy1DArray() {
    int val = getNavigationInput();
    while (true) {
        switch (val) {
            case 1:
                cout << "Get Total: ";
                cout << "Total: " << this->my1DArray.getTotal(getInputs()) << endl;
                displayMy1DArraySubMenu();
                break;
            case 2:
                cout << "Get Average: ";
                cout << "Average: " << this->my1DArray.getAverage(getInputs()) << endl;
                displayMy1DArraySubMenu();
                break;
            case 3:
                cout << "Get Highest in Row: ";
                cout << "Highest Value: " << this->my1DArray.getHighestInRow(getInputs()) << endl;
                displayMy1DArraySubMenu();
                break;
            case 9:
                displayMainMenu();
            case 0:
                cout << "Exiting.." << endl;
                exit(0);
            default:
                cout << "Invalid Input" << endl;
        }
        cout << "> ";
        val = getNavigationInput();
    }
}

int Menu::getNavigationInput() {
    string input;
    try {
        getline(cin, input);
        return stoi(input);
    } catch (invalid_argument &e) {
        return 99;
    }
}

double Menu::getUserConversionValue() {
    string input;
    try {
        getline(cin, input);
        return stod(input);
    } catch (invalid_argument &e) {
        cout << "Invalid Input!" << endl;
        return 0;
    }

}

std::vector<double> Menu::getInputs() {
    string input;
    std::vector<double> temp;
    cout << "Enter any number or E/e to end." << endl;
    while (true) {
        cout << "> ";
        try {
            getline(cin, input);
            temp.push_back(stod(input));
        } catch (invalid_argument &e) {
            if (input.compare("e") == 0 || input.compare("E") == 0) {
                break;
            }
            cout << "Invalid Response!" << endl;
        }
    }
    return temp;
}