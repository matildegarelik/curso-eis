#include <iostream>
using namespace std;

int main() {
    int N;
    cout<<"Poner un numero"<<endl;
    cin>>N;

    int long long factorial= 1;
    
    for (int i = 1; i <= N ; i++)
    {
        factorial= factorial*i;
    }
    
    cout<<"El factorial de "<<N<<" es "<<factorial<<endl;

    return 0;

}