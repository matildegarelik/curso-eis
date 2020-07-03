#include <iostream>

using namespace std;

int main() {
    int a = -1;

    cout<<"Ingrese un número positivo, menor a 128." <<endl;

    while(a<0 || a>128){
        cin >> a;
    }
    cout <<" El valor finalmente ingresado es"<< a << endl;
    return 0;
}