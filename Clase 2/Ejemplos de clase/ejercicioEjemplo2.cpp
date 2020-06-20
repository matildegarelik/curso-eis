#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int N;

    cout << "Ingrese el numero del cual desea saber si es primo o no: " << endl;

    cin >> N;

    for (int i = 2; i < N; i++)
    {
        cout << N << " es divisible por "<<i<<" ?"<<endl;

        cout << "Calculo el resto de la division entre " << N << " y "<< i<<endl;

        cout<< "Eso es: "<< N%i <<endl;

        if (N % i == 0)
        {
            cout << "El numero no es primo" << endl;
            return 0;
        }
    }

    cout << "El numero es primo" << endl;
    return 0;
}