#include <iostream>

using namespace std;

int main() {
    int pessoa = 0, idadeTotal = 0, sexo, sexo1 = 0, sexo2 = 0;
    while (pessoa < 10) {
        int idade;
        cout << "Digite seu número de ficha (0 a 10), sexo (1 para homem, 2 para mulher) e sua idade:\n";
        cin >> pessoa >> sexo >> idade;
        idadeTotal += idade; 
        
        if (sexo == 1)
            sexo1++;
        else if (sexo == 2)
            sexo2++;
        
        pessoa++; 
    }

    cout << "A idade média é de " << idadeTotal / 10 << endl; 
    cout << "Existem " << sexo1 << " homens e " << sexo2 << " mulheres." << endl;

    return 0;
}
