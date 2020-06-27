#include <iostream>

using namespace std;

int main() {

    int vectorDeEnteros[256];
    int N;

    cout<<"Cuantos elementos queres?"<<endl;
    cin>>N;

    for (int i = 0; i < N; i++)
    {
        cin>>vectorDeEnteros[i];
    }

    int suma=0;
    for (int i = 0; i < N; i++)
    {
        cout<<vectorDeEnteros[i]<<' ';
        suma += vectorDeEnteros[i];
    }

    
    cout<<"La suma es: "<<suma<<endl;


    return 0;
}