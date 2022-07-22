#include <iostream>
using namespace std;

int main()
{
    int A;
    cin >> A;
    cout << "1 ";
    for (int i = 2; i <= (A / 2); i++)
    {
        if (A % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << A;
    return 0;
}