#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Introduzca el valor de a" << endl;
    cin >> a;

    if (a<0){
        cout<<"La proxima introduzca un valor positivo."<<endl;
    } 
    else
    {
        cout<<"El valor es positivo. "<<endl;
    } 

    return 0;
}