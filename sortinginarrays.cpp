#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
}

int main()
{
    int arr[] = {0,1,0,1,0,1};
    for (int i = 0; i < 6; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
