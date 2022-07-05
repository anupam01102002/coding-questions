#include <iostream>
using namespace std;

int main()
{
    int N = 5, k = 0;
    cout << "Enter the No.\n";
    cin >> N;
    for (int i = 2; i <= N; i++)
    {
        if (N % i == 0 && i != N)
        {
            cout << N << " is not prime";
            k = 1;
            break;
        }
    }
    if (k != 1)
    {
        cout << N << " is prime";
    }

    return 0;
}