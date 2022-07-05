#include <iostream>
using namespace std;
int factorial(int N)
{
    int a = 1;
    for (int i = 1; i <= N; i++)
    {
        a = a * i;
    }
    return a;
}
int main()
{
    int N;
    cout << "Enter the value of N\n";
    cin >> N;
    int ans = factorial(N);
    cout << ans;
    return 0;
}