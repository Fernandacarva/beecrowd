#include <iostream>

using namespace std;

int main(){
    // Seu código vai aqui
    int numero;
    cin >> numero;

   for(int i = 1; i <= numero; i++)
    {
        if(numero % i == 0 && i <= numero)
        {
            cout << i << " ";
        }
    }
    return 0;
}
