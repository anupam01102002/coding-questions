#include <iostream>
using namespace std;

int main()
{
    int A;
    cin >> A;
    for (int i = 2; i <= (A / 2); i++)
    {
        if (A % i == 0)
        {
            cout << "False";
            return 1;
        }
    }
    cout << "True";
    return 1;
}