#include <iostream>
using namespace std;

int main()
{
   int X, N;
   cin >> N;
   while (N > 0)
   {
      X = N % 2;
      N = N / 2;
      cout << X;
   }

   return 0;
}