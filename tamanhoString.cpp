#include <iostream>
#include <string>

using namespace std;

int main(){
    // Seu código vai aqui

    string nome;
    int i = 0;

    cin >> nome;
    if(nome != "\0")
    {
        i++;
        cout << i << endl;
    }

    return 0;
}
