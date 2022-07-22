#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N, K;
        cin >> N >> K;
        cout << (N - K) << endl;
    }
    return 0;
}