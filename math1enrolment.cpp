#include <iostream>
using namespace std;

int main()
{
    int X, Y, T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> X>> Y;
        if (Y < X)
        {
            cout << "0" << endl;
        }
        else if (Y >= X)
        {
            cout << (Y - X) << endl;
        }
    }

    return 0;
}