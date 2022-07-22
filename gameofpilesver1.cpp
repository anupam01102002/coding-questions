#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + N);
        if (arr[0] % 2 == 0)
        {
            cout << "CHEFINA" << endl;
        }
        else
            cout << "CHEF" << endl;
    }

    return 0;
}