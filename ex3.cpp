// 3- Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida, mostre todos os valores lidos juntamente com a média dos valores.

#include <iostream>

using namespace std;

int main()
{
    int num[5], media , i;

    cout << "Digite os números: " << endl;

    for(i = 0; i < 5; i++)
    {
        cin >> num[i];
    }

    
    cout << "Valores lidos:" << "\n";

    for(int i = 0; i < 5; i++)
    {
        cout << num[i] << endl;
    }

    media = (num[0] + num[1] + num[2] + num[3] + num[4]) / 5;
    cout << "A média é: " << media << endl;
    

    return 0;
}