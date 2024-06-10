#include <iostream>

using namespace std;

int main()
{
    // Seu código vai aqui
    int a, b, c;

    cin.getline()>> a >> b >> c;

    if(a == 0)
        cout << "A";
    if(b == 0)
        cout << "B";
    if(c == 0)
        cout << "C";
    if(a == 0 && b == 0 && c == 0)
        cout << "*";

    return 0;
}