#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 7, 4, 6, 8, 10, 11}, pd = (arr[1] - arr[0]), curr = 2, ans = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = (i + 1); j < 5; j++)
        {
            if ((arr[j] - arr[j - 1]) == pd)
            {
                ans = ans + 1;
                if (ans > curr)
                {
                    ans = curr;
                }
            }
            else
            pd = arr[j] - arr[j - 1];
            
        }
    }
    cout << ans << endl;
    return 0;
}