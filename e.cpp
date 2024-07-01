#include <iostream>

int main() {
    int numero = 1;
    int soma = 0;
    int contador = 0;

    while (numero <= 15) {
        if (numero % 2 == 0) {
            soma += numero;
            contador++;
            cout << "Valor acumulado: " << numero <<endl;
        }
        numero++;
    }

    cout << "Soma dos valores acumulados: " << soma <<endl;
    cout << "Quantidade de números acumulados: " << contador <<endl;

    return 0;
}