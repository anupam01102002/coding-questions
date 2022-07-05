#include <iostream>
#include <math.h>
using namespace std;
bool number(int a)
{
    for (int i = 2; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            return false;
        }
        else
            return true;
    }
}
int main()
{
    int a = 10, b = 20;
    for (int i = a; i < b; i++)
    {
        if (number(i))
        {
            cout << i << " is a prime number" << endl;
        }
    }
    return 0;
}