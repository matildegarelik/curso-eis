#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {

    int N;
    int N_c = 0;
    cout << "Introduzca el numero de iteraciones para calcular pi: ";
    cin >> N;

    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        float x = rand() * 1./RAND_MAX; // entre 0 y 1
        float y = rand() * 1./RAND_MAX; // entre 0 y 1

        float dist_origen_2 = x*x + y*y; // x^2 + y^2 < 1

        if (dist_origen_2 < 1.){
            N_c++;
        }

    }

    cout << "Pi es: "<< 4*N_c * 1./N << endl;
    


    return 0;
}