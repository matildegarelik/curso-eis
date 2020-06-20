#include <iostream>

using namespace std;

int main() {

    int N;
    cout << "Ingrese el numerovic" << endl;
    cin >> N;

    float suma = 0;
    double fact = 1;

    for (int i = 1; i <= N; i++)
    {
        suma += i;
        fact *= i;
    }

    cout << "La suma entre 1 y "<< N<< " es "<< suma << " , y su factorial es: "<<fact<< endl;

    return 0;
}