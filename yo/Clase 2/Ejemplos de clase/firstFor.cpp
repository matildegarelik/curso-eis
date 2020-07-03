#include <iostream>

using namespace std;

int main() {
    int a;

    cout<<"Ingrese un numero positivo, menor a 128." <<endl;
    cin>>a;

    for(int i=0; i<a; i++){ //i++ es lo mismo que decir i+1
        cout<<"Contando números: "<<i<<endl;
    }
    return 0;
}