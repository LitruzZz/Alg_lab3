#include <iostream>
#include "Tablelab3.h"

using namespace std;

void printTable(double start, double end, double step, FunctionType func) {
    cout << "  x\t|\t f(x)\n";
    cout << "--------------------------\n";
    for (double x = start; x <= end; x += step) {
        cout << x << "\t|\t" << func(x) << endl;
    }
}
