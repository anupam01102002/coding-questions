#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the value of N\n";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N * 2; j++)
        {
            if (j <= i || j > ((N * 2) - i))
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }
    for (int i = N; i >= 1; i--)
    {
        for (int j = 1; j <= N * 2; j++)
        {
            if (j <= i || j > ((N * 2) - i))
            {
                cout << "* ";
            }
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}