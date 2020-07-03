#include <iostream>
#include <cmath>


using namespace std;

int expresionPolar(int x, int y);

int main(){

    int x, y;

    cout<<"Ingrese las coordenadas del eje x"<<endl;
    cin>>x;
    cout<<"Ingrese las coordenadas en el eje y"<<endl;
    cin>>y;

    int resultado[2];

    expresionPolar(x,y);
    cout<<"El modulo es "<<*(resultado)<<" y el angulo "<<*(resultado + 1)<<" grados"<<endl;

    
    return 0;

}

int expresionPolar (int x, int y){
    int modulo;
    modulo = sqrt(x*x+y*y);
    int angulo;
    angulo = atan(y/x);
    int resultado[2];
    return resultado[modulo, angulo];

}