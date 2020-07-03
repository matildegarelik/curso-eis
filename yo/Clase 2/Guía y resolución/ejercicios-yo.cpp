#include <iostream>
#include <bitset>
using namespace std;

int main(){
    char numEj;
    cout<<"Que ejercicio o desafio desea ejecutar?"<<endl;
    cin >> numEj;

    if (numEj=='0')
    {
        string nombre, apellido, dni, telefono;
        cout<<"Ingrese su nombre."<<endl;
        cin >> nombre;

        cout<<endl<<"Ingrese su apellido."<<endl;
        cin >> apellido;

        cout<<endl<<"Ingrese su Documento Nacional de Identidad."<<endl;
        cin >> dni;

        cout<<endl<<"Ingrese su numero de telefono."<<endl;
        cin >> telefono;

        cout<<endl<<"Nombre: "<<nombre<<endl<<"Apellido: "<<apellido<<endl<<"D.N.I.: "<<dni<<endl<<"Telefono: "<<telefono<<endl;


    }

    else if (numEj=='1')
    {
        int decimal;
        cout<<"Ingrese un numero entero entre 0 y 127."<<endl;
        cin>>decimal;
        bitset<8> bin(decimal);
        cout<<"Su expreson binaria es "<<bin<<endl;

    }
    
    else if (numEj=='2')
    {
        /* code */
    }
    
    else if (numEj=='3')
    {
        /* code */
    }
    
    else if (numEj=='4')
    {
        float pi=1;
        int iter;
        int i=1;
        cout<<"Este programa calcula pi mediante la serie de Leibinz."<<endl;
        cout<<"Cuantas iteraciones desea hacer?"<<endl;
        cin>>iter;

        for (i; i < iter; i++)
        {
            if (i%2)
            {
                pi -= 1.0/(2*i+1);
             } 
            
            else {
                pi += 1.0/(2*i+1);
                }
                
        }
            
        

        cout << "El valor de pi es "<<pi*4<<endl;
        
    }
    
    else if (numEj=='A')
    {
        string nombre;
        cout<<"Ingrese su nombre: "<<endl;
        cin>>nombre;
        int suma = 0;

        for (int i=0; i<= nombre.length();i++){
            char letra = nombre[i];
            suma+= letra -'A';
        }

        cout<<"El puntaje es "<<suma<<endl;
    }
    
    else if (numEj=='B')
    {
        /* code */
    }

    else {
        cout<<"Vuelva a ejecutar el programa e ingrese un numero que corresponda."<<endl;

    }

 
    return 0;



}