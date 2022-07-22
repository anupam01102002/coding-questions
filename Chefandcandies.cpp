#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N, X, candies;
        cin >> N >> X;
        if (X >= N)
        {
            cout << "0" << endl;
        }
        else if (X < N)
        {
            candies = (N - X) / 4;
            if ((N - X) % 4 != 0)
            {
                candies = candies + 1;
            }

            cout << candies << endl;
        }
    }
    return 0;
}