#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "enter the value of N\n";
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j % 2 != 0)
                {
                    cout << "1 ";
                }
                else if (j % 2 == 0)
                {
                    cout << "0 ";
                }
            }
        }
        else if (i % 2 == 0)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j % 2 != 0)
                {
                    cout << "0 ";
                }
                else if (j % 2 == 0)
                {
                    cout << "1 ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}