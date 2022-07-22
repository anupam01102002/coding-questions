#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int X, Y, Z, x1, x2, x3, x4;
        cin >> X >> Y >> Z;
        x1 = X / 3;
        x2 = X % 3;
        if (x2 == 0)
        {
            x3 = (x1 - 1) * Z;
        }
        else
        {
            x3 = x1 * Z;
        }
        x4 = X * Y;
        cout << x3 + x4 << endl;
    }
    return 0;
}