#include <iostream>

using namespace std;

int factorial (int n){
    if (n==1){
        return 1;
    }
    else {
        return n*factorial(n-1);
    }
}

int main (){

    cout<<"Ingrese un numero para obtener su factorial"<<endl;
    int n;
    cin>>n;
    int nFact;
    nFact = factorial (n);
    cout<<"El factorial de "<<n<<" es "<<nFact<<endl;
    return 0;
}