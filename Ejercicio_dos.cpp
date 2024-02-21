#include <iostream>
using namespace std;

void identificarEdad() {
    int edadUsuario;
    do {
        cout << "Cual es tu edad?:";
        cin >> edadUsuario;
        if (edadUsuario < 0) {
            cout << "Cual es la raiz cuadra de un pez?.\n";
            cout << "Edad no valida. Por favor, introduce una edad positiva.\n";
        }
    } while (edadUsuario < 0);

    if (edadUsuario >= 18) {
        cout << "Eres mayor de edad" << "\n";
    } else {
        cout << "Eres menor de edad" << "\n";
    }
}

void identificarNumeroMayor() {
    float primerNumero;
    float segundoNumero;
    cout << "Dime un numero:";
    cin >> primerNumero;
    cout << "Dime otro numero:";
    cin >> segundoNumero;
    if (primerNumero > segundoNumero) {
        cout << primerNumero << " Es mayor que " << segundoNumero << "\n";
    } else if (primerNumero < segundoNumero) {
        cout << segundoNumero << " Es mayor que " << primerNumero << "\n";
    } else {
        cout << "Ambos numeros son iguales" << "\n";
    }
}

void identificarNumerosPares() {
    int numeroPar;
    cout << "Introduce un numero:" << "\n";
    cin >> numeroPar;
    numeroPar = numeroPar % 2;
    if (numeroPar == 0) {
        cout << "El numero es par" << "\n";
    } else {
        cout << "El numero es impar" << "\n";
    }
}

void calcularFactorial() {
    int contador = 1;
    int resultadoFactorial = 1;
    int numeroFactorial;
    cout << "Dime un numero:";
    cin >> numeroFactorial;
    while (contador < numeroFactorial) {
        contador += 1;
        resultadoFactorial *= contador;
    }
    cout << "El factorial de " << numeroFactorial << " es " << resultadoFactorial<<"\n";
}

void buscarNumerosImpares() {
    int numeroBuscado;
    do {
        cout << "Dime un numero entre el 10 al 30:";
        cin >> numeroBuscado;
        if (numeroBuscado < 10 or numeroBuscado > 30) {
            cout << "Numero no valido. Por favor, introduce un numero entre 10 y 30.\n";
        }
    } while (numeroBuscado < 10 or numeroBuscado > 30);

    for (int i = 1; i <= numeroBuscado; i++) {
        int resultado = i % 2;
        if (resultado == 1) {
            cout << i << " es impar" << endl;
        }
    }
}

void identificarNumerosParesWhile() {
    int numeroBuscadoWhile;
    do {
        cout << "Dime un numero entre el 10 al 30:";
        cin >> numeroBuscadoWhile;
        if (numeroBuscadoWhile < 10 or numeroBuscadoWhile > 30) {
            cout << "Numero no valido. Por favor, introduce un numero entre 10 y 30.\n";
        }
    } while (numeroBuscadoWhile < 10 or numeroBuscadoWhile > 30);

    int contadorWhile = 1;
    while (contadorWhile <= numeroBuscadoWhile) {
        int resultadoWhile = contadorWhile % 2;
        if (resultadoWhile == 1) {
            cout << contadorWhile << " es impar" << endl;
        }
        contadorWhile += 1;
    }
}

void Dias_semana() {
    int dia;
    do {
        cout << "Di un numero en el 1 al 5: ";
        cin >> dia;
        if (dia < 1 || dia > 5) {
            cout << "Numero invalido. Por favor, introduce un numero entre 1 y 5.\n";
        }
    } while (dia < 1 || dia > 5);

    switch (dia) {
        case 1:
            cout << "El numero " << dia << " corresponde al dia lunes";
            break;
        case 2:
            cout << "El numero " << dia << " corresponde al dia martes";
            break;
        case 3:
            cout << "El numero " << dia << " corresponde al dia miercoles";
            break;
        case 4:
            cout << "El numero " << dia << " corresponde al dia jueves";
            break;
        case 5:
            cout << "El numero " << dia << " corresponde al dia viernes";
            break;
    }
}

void repetir(){
    int opcion;
    do {
        cout << "\n********** MENU DE FUNCIONES **********\n";
        cout << "1. Identificar Edad\n";
        cout << "2. Identificar Numero Mayor\n";
        cout << "3. Identificar Numeros Pares\n";
        cout << "4. Calcular Factorial\n";
        cout << "5. Buscar Numeros Impares\n";
        cout << "6. Identificar Numeros Pares con While\n";
        cout << "7. Dias de la Semana\n";
        cout << "8. Salir\n";
        cout << "****************************************\n";
        cout << "Elige una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                identificarEdad();
                break;
            case 2:
                identificarNumeroMayor();
                break;
            case 3:
                identificarNumerosPares();
                break;
            case 4:
                calcularFactorial();
                break;
            case 5:
                buscarNumerosImpares();
                break;
            case 6:
                identificarNumerosParesWhile();
                break;
            case 7:
                Dias_semana();
                break;
            case 8:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion no valida. Por favor, elige una opcion del 1 al 8.\n";
        }
    } while (opcion != 8);
}

int main() {
    identificarEdad();
    identificarNumeroMayor();
    identificarNumerosPares();
    calcularFactorial();
    buscarNumerosImpares();
    identificarNumerosParesWhile();
    Dias_semana();
    repetir();
    return 0;
}
