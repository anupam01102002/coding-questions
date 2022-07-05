#include <iostream>

using namespace std;

int main()
{
    int T, N, M, K;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> N >> M >> K;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        for (int j = 0; j < N; j++)
        {
            if (A[i] != K && A[i] > K)
            {
                /* code */
            }
        }
    }
    return 0;
}