#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double R, area;

    cin >> R;

    area = (3.1416 * R * R);
    cout << fixed << setprecision(2) << area << endl;
    return 0;


}