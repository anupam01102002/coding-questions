#include <iostream>
using namespace std;

int main()
{
    int N, M = 0, K, A;
    cout << "Enter the No.\n";
    cin >> N;
    A = N;
    while (N > 0)
    {
        K = N % 10;
        M = (K * K * K) + M;
        N = N / 10;
    }
    if (M == A)
    {
        cout << A << " is an armstrong no.";
    }
    else
        cout << A << " is not an armstrong no.";
    return 0;
}