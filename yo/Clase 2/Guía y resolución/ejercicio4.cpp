#include <iostream>

using namespace std;

int main(){
    int iteraciones;

    cout<<"Ingrese cuantas iteraciones desea utilizar"<<endl;
    cin>> iteraciones;
    
    float pi4 = 0;

    for (int i = 0; i < iteraciones; i++)
    {
        if (i % 2) {
            pi4 -= 1.0/(2*i+1);
        } else {
            pi4 += 1.0/(2*i+1);
        }
    }
    
    cout<<"Pi vale: "<<pi4*4<<endl;
    return 0;
}