#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cout<<"Enter no, of Rows\n";
    cin >> N;
    cout<<"Enter no, of Columns\n";
    cin >> M;
    for (int i = 1; i <= N; i++)
    {
        if (i == 1 || i == N)
        { 
            for (int j = 1; j <= M; j++)
            {
                cout << "* ";
                if (j == M)
                {
                    cout << endl;
                }
            }
        }
        else
            for (int j = 1; j <= M; j++)
            {
                if (j == 1 || j == M)
                {
                    cout << "* ";
                    if (j == M)
                    {
                        cout << endl;
                    }
                }
                else
                    cout << "  ";
            }
    }
    return 0;
}