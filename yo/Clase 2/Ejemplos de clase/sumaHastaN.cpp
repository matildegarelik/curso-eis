#include <iostream>
using namespace std;

int main() {
    int N;
    cout<<"Poner un numero"<<endl;
    cin>>N;

    int suma= 0;
    
    for (int i = 0; i <= N ; i++)
    {
        suma+=i;
    }
    
    cout<<"La suma entre 1 y "<<N<<" es "<<suma<<endl;

    return 0;

}