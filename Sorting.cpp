#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 8, 2, 9, 7}, temp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[j] < arr[j - 1])
            {
                arr[j - 1] = temp;
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }

    for (int k = 0; k < 5; k++)
    {
        cout << arr[k] << " ";
    }

    return 0;
}