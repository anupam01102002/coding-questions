#include <iostream>
using namespace std;

int main()
{
    int n = 5, k = 0;
    for (int i = 1; i <= n; i++)
    {
        k = i + (i - 1);
        cout << k << " ";
    }

    return 0;
}