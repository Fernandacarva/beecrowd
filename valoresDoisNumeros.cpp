#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int inicio = min(a, b);
    int fim = max(a, b);

    for (int i = inicio; i <= fim; i++) 
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}