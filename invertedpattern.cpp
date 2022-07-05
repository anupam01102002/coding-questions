#include <iostream>
using namespace std;

int main()
{
    int N = 5, Counter = 1;
    // cout << "Enter the value of N\n";
    // cin >> N;
    for (int i = N; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << Counter <<" ";
            Counter = Counter + 1;
        }
        cout << endl;
        Counter = 1;
    }
    return 0;
}