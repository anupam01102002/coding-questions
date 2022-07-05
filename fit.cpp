#include <iostream>

using namespace std;

int main()
{
    int T, N, even = 0, odd = 0, x;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> N;
        int B[2 * N];
        for (int j = 0; j < N; j++)
        {
            cin >> B[j];
        }
        for (int j = 0; j < (2 * N); j++)
        {
            if (B[j] % 2 == 0)
            {
                even = even + 1;
            }
            else if (B[j] % 2 != 0)
            {
                odd = odd + 1;
            }
        }
        if (even >= odd)
        {
            x = (even - odd) / 2;
        }
        else if (odd > even)
        {
            x = (odd - even) / 2;
        }
        cout << x;
        return 0;
    }
}