#include <iostream>
#include "Calculadora.h"
#include <string>

using namespace std;

int main() {

    Calculadora<int> calcInt;
    Calculadora<char> calcChar;
    Calculadora<float> calcFloat;
    Calculadora<string> calcString;

    cout << "Ejercicio 00/02\n" << endl;

    //CALCULADORA DE INT
    calcInt.setA(5);
    calcInt.setB(2);

    cout << "CALCULADORA DE INT" << endl << endl;
    cout << "El resultado de 5 + 2 es: " << calcInt.sumar() << endl;
    cout << "El resultado de 5 - 2 es: " << calcInt.restar() << endl;
    cout << "El resultado de 5 * 2 es: " << calcInt.multiplicar() << endl;
    cout << "El resultado de 5 / 2 es: " << calcInt.dividir() << endl << endl;


    //CALCULADORA DE FLOAT
    calcFloat.setA(3.7);
    calcFloat.setB(2.5);

    cout << "CALCULADORA DE FLOAT" << endl << endl;
    cout << "El resultado de 3.7 + 2.5 es: " << calcFloat.sumar() << endl;
    cout << "El resultado de 3.7 - 2.5 es: " << calcFloat.restar() << endl;
    cout << "El resultado de 3.7 * 2.5 es: " << calcFloat.multiplicar() << endl;
    cout << "El resultado de 3.7 / 2.5 es: " << calcFloat.dividir() << endl << endl;

    //CALCULADORA DE STRING
    calcString.setA("Hola, ");
    calcString.setB("Mundo!");

    cout << "SUMADOR DE STRING" << endl << endl;
    cout << calcString.sumar() << endl;

    return 0;
}