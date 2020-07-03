#include <iostream>

using namespace std;

int main(){
    char a;
    cout << "Ingrese el caracter a estudiar: "<< endl;
    cin >> a;

    if (a>='a' && a<='z'){
        cout << "El caracter es una letra minúscula"<<endl;
    } else if (a>='0' && a<='9') {
        cout << "El caracter es numero"<<endl;
    } else if (a>='A' && a <='Z'){
        cout <<"El caracter es una letra mayuscula"<<endl;
    } else {
        cout << "Es otra cosa."<<endl;
    }
    return 0;
}