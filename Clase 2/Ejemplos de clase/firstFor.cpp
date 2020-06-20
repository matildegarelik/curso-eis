#include <iostream>

using namespace std;

int main() {
    int a;
    cout<<"Ingrese un numero positivo, menor a 128." <<endl;
    cin>>a;

    for(int i=0; i<a; i++){

        /* i++ es equivalente a decir i = i + 1 que es equivalente a i += 1*/
        cout<<"Contando numeros: "<<i+1<<endl;
    }
    return 0;
}