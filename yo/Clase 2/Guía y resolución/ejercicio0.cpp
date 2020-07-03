#include <iostream>

using namespace std;

int main(){
    string nombre;
    string apellido;
    string documento;
    string telefono;
    
    cout <<"Ingrese su nombre, apellido, documento y telfono"<<endl;
    cin >> nombre >> apellido >> documento >> telefono;
    cout << "Su nombre es: "<< nombre << endl; 
    cout << "su apellido: " << apellido << endl;
    cout << "su documento: " << documento <<endl;
    cout << "Su telefono: " << telefono <<endl;

    return 0;
}