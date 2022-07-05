#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, -9, 1, 3, -4, 5};
    int k = arr[0];
    for (int i = 1; i < 6; i++)
    {
        if (k < arr[i])
        {
            k = arr[i];
        }
        cout << k << " ";
    }

    return 0;
}