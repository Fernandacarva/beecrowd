//2- Crie um programa que leia do teclado seis valores inteiros e em seguida mostre na tela os valores lidos em ordem inversa.

#include <iostream>

using namespace std;

int main()
{
   int  valor[6];

   cout << "Digite os valores:" << endl;
   
   for(int i = 0; i < 6; i++)
   {
        cin >> valor[i];
   }

   cout << endl;
   cout << "Valor lidor na ordem inversa:" << endl;

   for(int i = 5; i >= 0; i--)
   {
        cout << valor[i] << " " << endl;
   }
    return 0;
}