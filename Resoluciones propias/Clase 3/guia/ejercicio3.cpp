#include <iostream>

using namespace std;
int main (){
    int A, B, C, perimetro;
    float area, volumen; 
    cout<< "Ingrese el ancho de la base."<<endl ;
    cin>>A;
    cout<<"Ingrese el largo de la base."<<endl;
    cin>>B;
    cout <<"Ingrese altura del paralelepipedo."<<endl;
    cin >> C;
    perimetro = 2*A + 2*B;
    area = A*B;
    volumen = A*B*C;
    cout<<"El perimetro es "<<perimetro<<endl;
    cout<<"El area es "<<area<<endl;
    cout<<"El volumen es "<<volumen<<endl;

return 0;
}