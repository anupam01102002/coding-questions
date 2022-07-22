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
        if (A > B && A > C)
        {
            cout << "Alice" << endl;
        }
        else if (B > A && B > C)
        {
            cout << "Bob" << endl;
        }
        else if (C > A && C > B)
        {
            cout << "Charlie" << endl;
        }
    }
    return 0;
}