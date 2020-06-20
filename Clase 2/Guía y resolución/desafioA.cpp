#include <iostream>

using namespace std;

int main(){
    string nombre;
    
    cout <<"Ingrese el nombre para conocer su puntaje"<<endl;

    cin>>nombre;

    int suma=0;

    for (int i = 0; i < nombre.length(); i++)
    {
        char letra = nombre[i];
        if (letra>='A' && letra<='Z') {
            suma+=letra-'A'; 
        } 
        else if (letra >='a' && letra<='z')
        {
            suma += letra - 'a';
        } else {
            cout <<"Ah, que pillo que sos!"<<endl;
            return 0;
        }
    }
    cout << "El puntaje es: "<<suma<<endl;

    return 0;
}