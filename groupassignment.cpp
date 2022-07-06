#include <iostream>
using namespace std;
int main()
{
    int T, count = 0;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N, flag = 0;
        cin >> N;
        int arr[N];
        for (int j = 0; j < N; j++)
        {
            cin >> arr[j];
        }

        for (int x = 0; x < N; x++)
        {
            count = 0;
            for (int y = 0; y < N; y++)
            {
                if (arr[x] == arr[y])
                {
                    count = count + 1;
                }
            }
            if ((count % arr[x]) != 0)
            {
                cout << "NO" << endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}