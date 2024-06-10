// 1- Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na tela os valores lidos.

#include <iostream>

using namespace std;

int main()
{
    int valores[6];

    cout << "Digite os valores:" << endl;

    for(int i = 0; i < 6; i++)
    {
        cin >> valores[i];
    }

    cout << "\n";
    cout << "Valores lidos:" << endl;

    for(int i = 0; i < 6; i++)
    {
        cout << valores[i] << endl;
    }

    return 0;
}