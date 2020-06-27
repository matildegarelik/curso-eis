#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

    int N;
    int N_c = 0;
    cout << "Introduzca la cantidad de puntos a utilizar: ";
    cin >> N;

    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        float x = rand() * 1.0/RAND_MAX;
        float y = rand() * 1.0/RAND_MAX;
        if ( x*x + y*y < 1)
            N_c++;
    }
    cout << "El valor de pi es: " << 4*N_c*1.0/N<<endl;
    


    return 0;
}