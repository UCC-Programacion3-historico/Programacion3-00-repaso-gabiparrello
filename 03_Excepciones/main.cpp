#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {

    Calculadora<int> calc;

    cout << "Ejercicio 00/03\n" << endl;

    //CALCULADORA DE INT
    calc.setA(5);
    calc.setB(0);

    try {
        int division = calc.dividir();
        cout << "El resultado de 5 / 0 es: " << division << endl << endl;
    }
    catch (int e) {
        cout << "B no puede ser 0. Excepcion N: " << e << endl;
    }

    return 0;
}