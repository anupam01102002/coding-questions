#include <iostream>

using namespace std;

int main()
{
    int T, N, M, K;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int A, B, C;
        cin >> A >> B >> C;
        if (A >= 10 && B >= 10 && C >= 10 && (A + B + C) >= 100)
        {
            cout << "PASS" << endl;
        }
        else
            cout << "FAIL" << endl;
    }
    return 0;
}