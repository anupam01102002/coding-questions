#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 5, 3, 4, 3, 5, 6}, flag = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i+1; j < 8; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i];
                return 0;
            }
        }
    }

    return 0;
}