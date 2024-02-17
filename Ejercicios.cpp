#include <iostream>
using namespace std;
int main(){

    // tabla de multiplicar '4'
    cout<<"  tabla de multiplicar 4"<<"\n";
    cout<<"_________________________"<<"\n";
    for (int i=0; i<=10; i++ ){
        cout << "4*" << i << "=" << 4*i << "\n";
    }

    // tabla de multiplicar '6'
    cout<<"  tabla de multiplicar 6"<<"\n";
    cout<<"_________________________"<<"\n";
    for (int i=0; i<=10; i++ ){
        cout << "6*" << i << "=" << 6*i << "\n";
    }

    // Numero factorial
    int numero_ingresado;
    cout << "Ingresa un numero: ";
    cin >> numero_ingresado;
    int factorial = 1;
    for (int i = 1; i <= numero_ingresado; i++) {
        factorial *= i;
    }
    cout << "El factorial de " << numero_ingresado << " es " << factorial << "\n";

    //  numeros fibonacci
    int n, t1 = 0, t2 = 1, siguienteTermino = 0;

    cout << "Ingresa el número de términos: ";
    cin >> n;

    cout << "Serie de Fibonacci: ";

    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            std::cout << t2 << ", ";
            continue;
        }
        siguienteTermino = t1 + t2;
        t1 = t2;
        t2 = siguienteTermino;

        cout << siguienteTermino << ", ";
    }

    // identificar numero numeros primos



    // Identificacion de numeros par
    int numeroPar;
    cout<<"Ingresa un numero: ";
    cin>>numeroPar;
    numeroPar = numeroPar%2;
    if (numeroPar == 0){
        cout<<"Es un numero par";
    }else{
        cout<<"No es un numero par";
    }


    // tabla de multiplicar
    cout<<"  ingresa un numero de la tabla de multiplicar: ";
    int tabla_multiplicar;
    cin>> tabla_multiplicar;
    for (int i=0; i<=10; i++ ){
        cout <<tabla_multiplicar <<"*" << i << "=" << tabla_multiplicar*i << "\n";
    }
    return 0;
}