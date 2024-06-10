#include <iostream>

using namespace std;

int main()
{
    double nota1, nota2, total;

    cin >> nota1 >> nota2;
    
    total = (2 * nota1  + 3 * nota2) / 5;

    if(total >= 7)
        cout << "aprovado" << endl;
    
    else if(total < 3)
        cout << "reprovado" << endl;
    else
        cout << "final" << endl;


    return 0;
}