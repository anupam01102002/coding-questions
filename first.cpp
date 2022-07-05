#include<iostream>

using namespace std;

int main()  {
    int N;
    cout<<"enter N";
    cin>>N;
    for(int i=0 ; i<N ; i++){
        if(N%2 == 0){
            continue;
        }
        else
        cout<<N<<endl;
    }
    return 0;
}