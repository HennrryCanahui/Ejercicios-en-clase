#include <iostream>
using namespace std;

/* colaboradores :
Hennrry Geovanny Canahui Gomez        0909-23-258
Lester Alexander Esquivel Xepuxtian   0909-23-2662

*/

int main() {
    // Tabla de multiplicar del '4'
    cout << "Tabla de multiplicar del 4" << "\n";
    for (int i = 0; i <= 10; i++) {
        cout << "4 * " << i << " = " << 4 * i << "\n";
    }

    // Tabla de multiplicar del '6'
    cout << "Tabla de multiplicar del 6" << "\n";
    for (int i = 0; i <= 10; i++) {
        cout << "6 * " << i << " = " << 6 * i << "\n";
    }

    // Cálculo del factorial de un número
    int numero;
    cout << "Ingresa un numero para calcular su factorial: ";
    cin >> numero;
    int factorial = 1;
    for (int i = 1; i <= numero; i++) {
        factorial *= i;
    }
    cout << "El factorial de " << numero << " es " << factorial << "\n";

    // Generación de la serie Fibonacci
    int n;
    cout << "Ingresa el numero de terminos para la serie Fibonacci: ";
    cin >> n;
    int termino1 = 0, termino2 = 1, siguienteTermino = 0;
    cout << "Serie de Fibonacci: ";
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << termino1 << ", ";
            continue;
        }
        if (i == 2) {
            cout << termino2 << ", ";
            continue;
        }
        siguienteTermino = termino1 + termino2;
        termino1 = termino2;
        termino2 = siguienteTermino;
        cout << siguienteTermino << ", ";
    }

    // Identificación de números primos
    int numeroPrimo;
    bool esPrimo = true;
    cout << "\nIngrese un numero para verificar si es primo: ";
    cin >> numeroPrimo;
    if (numeroPrimo <= 1) {
        esPrimo = false;
    } else {
        for (int i = 2; i * i <= numeroPrimo; ++i) {
            if (numeroPrimo % i == 0) {
                esPrimo = false;
                break;
            }
        }
    }
    if (esPrimo) {
        cout << numeroPrimo << " es un numero primo." << endl;
    } else {
        cout << numeroPrimo << " no es un numero primo." << endl;
    }

    // Identificación de números pares
    int numeroPar;
    cout << "Ingresa un numero para verificar si es par: ";
    cin >> numeroPar;
    numeroPar = numeroPar % 2;
    if (numeroPar == 0) {
        cout << "Es un numero par." << endl;
    } else {
        cout << "No es un numero par." << endl;
    }

    // Generación de una tabla de multiplicar personalizada
    cout << "Ingresa un numero para generar su tabla de multiplicar: ";
    int tablaMultiplicar;
    cin >> tablaMultiplicar;
    cout << "Tabla de multiplicar del " << tablaMultiplicar << ":" << endl;
    for (int i = 0; i <= 10; i++) {
        cout << tablaMultiplicar << " * " << i << " = " << tablaMultiplicar * i << "\n";
    }

    return 0;
}
