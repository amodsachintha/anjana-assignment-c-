//
// Created by amod on 2/13/19.
//

#include "My1DArray.h"
#include <iostream>

using namespace std;

double My1DArray::getTotal(std::vector<double> arr) {
    double sum = 0;
    for (double element : arr) {
        sum += element;
    }
    return sum;
}

double My1DArray::getAverage(std::vector<double> arr) {
    return getTotal(arr) / arr.size();
}

double My1DArray::getHighestInRow(std::vector<double> arr) {
    double max = arr.front();
    for (double element : arr) {
        if (max < element) {
            max = element;
        }
    }
    return max;
}
