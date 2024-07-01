#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Digite dois numeros";
    cin >> a >> b;
    while (a % 2 == 0 && b % 2 == 0)
    {
        cout << "A soma dos pares e: " << a + b;
        cin >> a >> b;
    }

    return 0;
}