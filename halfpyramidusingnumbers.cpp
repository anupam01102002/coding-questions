#include <iostream>
using namespace std;

int main()
{
    int N;
    cout<<"Enter number of rows\n";
    cin>>N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i <<" ";
            if (j == i)
            {
                cout << endl;
            }
        }
    }
    return 0;
}