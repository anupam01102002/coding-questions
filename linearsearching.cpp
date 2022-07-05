#include <iostream>
using namespace std;
int main()
{
    int n, temp;
    cout << "Enter value of n and key\n";
    cin >> n >> temp;
    int arr[n], flag = 0;
    for (int j = 0; j < n; j++)
    {
        cin >> arr[j];
    }

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == temp)
        {
            cout << i;
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << "-1";
    }
    return 0;
}