#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "enter value on N\n";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N - i; j++)
        {
            cout << "   ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j << "  ";
        }
        if (i != 1)
        {
            for (int k = 2; k <= i; k++)
            {
                cout << k << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}