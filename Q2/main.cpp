#include <iostream>
#include <stdexcept>

using namespace std;

class Temperature {
private:
    const int ETHYL_FREEZE = -173;
    const int ETHTL_BOIL = 172;
    const int OXYGEN_FREEZE = -362;
    const int OXYGEN_BOIL = -306;
    const int WATER_FREEZE = 32;
    const int WATER_BOIL = 212;
    double temperature;
public:
    Temperature() {
        this->temperature = 0;
    }

    double getTemperature() {
        return this->temperature;
    }

    void setTemperature(double temperature) {
        this->temperature = temperature;
    }

    void isEthylFreezing() {
        if (this->temperature <= ETHYL_FREEZE) {
            cout << "Ethyl will freeze" << endl;
        }
    }

    void isEthylBoiling() {
        if (this->temperature >= ETHTL_BOIL) {
            cout << "Ethyl will boil" << endl;
        }
    }

    void isOxygenFreezing() {
        if (this->temperature <= OXYGEN_FREEZE) {
            cout << "Oxygen will freeze" << endl;
        }
    }

    void isOxygenBoiling() {
        if (this->temperature >= OXYGEN_BOIL) {
            cout << "Oxygen will boil" << endl;
        }
    }

    void isWaterFreezing() {
        if (this->temperature <= WATER_FREEZE) {
            cout << "Water will freeze" << endl;
        }
    }

    void isWaterBoiling() {
        if (this->temperature >= WATER_BOIL) {
            cout << "Water will boil" << endl;
        }
    }

};

int main() {
    Temperature temperature;
    string input;
    cout << "Enter any letter to exit." << endl;
    while (true) {
        cout << "Please enter the temperature(F): ";
        try {
            getline(cin, input);
            temperature.setTemperature(stod(input));

            temperature.isEthylFreezing();
            temperature.isEthylBoiling();

            temperature.isOxygenFreezing();
            temperature.isOxygenBoiling();

            temperature.isWaterFreezing();
            temperature.isWaterBoiling();
            cout << endl;
        } catch (invalid_argument &e) {
            cout << "Exiting..." << endl;
            break;
        }
    }
    return 0;
}