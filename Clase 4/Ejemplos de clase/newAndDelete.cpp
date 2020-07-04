#include <iostream>
#include <cmath>

using namespace std;


int main()
{

    // Uf, punteros...
    int* tablaDel2; // Direccion de memoria

    int* total = new int; // Le da un único entero a la variable "total"

    cin >> *total;

    tablaDel2 = new int [*total]; //Le da N elementos a la memoria dinámica

    for (int i = 0; i < *total; i++)
    {
        tablaDel2[i] = 2*(i+1);
    }

    delete[] tablaDel2; // Libera toda la memoria dinámica
    delete total; //Libera para un unico valor

    return 0;
}