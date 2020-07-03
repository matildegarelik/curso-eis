#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    int N, N_c = 0;
    cout<<"Introduzca la cantidad de puntoa a utilizar"<<endl;
    cin>>N;

    srand (time(NULL));
    for (int i = 0, i < N , i++);
    {
        float x = rand () * 1.0 /RAND_MAX; //Operacion que evalúa entre 0 y 1
        float y = rand () * 1.0 /RAND_MAX;
        if (x*x+y*y<1)
        {
            N_c++;
        }
    }
    cout<<"El valor de pi es: "<<4*N_c*1.0/N<<endl;


    return 0;

}