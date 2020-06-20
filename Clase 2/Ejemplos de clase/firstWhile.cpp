#include <iostream>

using namespace std;

int main() {
    int a = -1;

    cout<<"Ingrese un numero positivo, menor a 128." <<endl;

    while(a<0 || a>128){

        cin >> a;

        if (a<0){
            cout<< "Ingrese un numero positivo, la proxima vez."<<endl;
        }
        
        if (a>128) {
            cout<< "Ingrese un numero mas chico, la proxima vez."<<endl;
        }

    }
    cout <<" El valor finalmente ingresado es: "<< a << endl;
    cout <<" Su caracter es: "<< (char) a << endl;

    return 0;
}