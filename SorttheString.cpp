#include <iostream>
#include <string>
using namespace std;

int main()
{
    int X, Y, T;
    string S;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> S;
        int num = stoi(S);
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