#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the No. of Rows\n";
    cin >> N;
    // for (int i = 1; i <= 5; i++)
    // {
    for (int j = N; j >= 1; j--)
    {
        for (int k = j; k >= 1; k--)
        {
            cout << "* ";
            if (k == 1)
            {
                cout << endl;
            }
        }
    }
    // }

    return 0;
}