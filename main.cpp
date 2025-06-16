#include <iostream>
#include <cmath>
#include "Tablelab3.h"

using namespace std;

double y(double x, int n) {
    double result = 0;

    if (x < 0) {
        result = 1;
        for (int j = 2; j <= n - 2; ++j) {
            result *= (j + x);
        }
    } else {
        for (int i = 0; i <= n - 1; ++i) {
            double prod = 1;
            for (int j = 0; j <= n - 1; ++j) {
                prod *= (x + i + pow(j, 2));
            }
            result += prod;
        }
    }

    return result;
}

double y_wrapper(double x) {
    return y(x, 3);
}

double exampleFunction(double x) {
    return sqrt(x);
}

void readInput(double& start, double& end, double& step) {
    cout << "Введіть початок інтервалу: ";
    cin >> start;
    cout << "Введіть кінець інтервалу: ";
    cin >> end;
    cout << "Введіть крок: ";
    cin >> step;
}

int main() {
    double start, end, step;

    cout << "=== Таблиця значень для y(x, 3) ===\n";
    readInput(start, end, step);
    printTable(start, end, step, y_wrapper);

    cout << "\n=== Таблиця значень для sqrt(x) ===\n";
    readInput(start, end, step);
    printTable(start, end, step, exampleFunction);

    return 0;
}
