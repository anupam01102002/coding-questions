#include <iostream>
using namespace std;

int main()
{
    int N, M, T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> N >> M;
        cout << (N * M) << endl;
    }

    return 0;
}