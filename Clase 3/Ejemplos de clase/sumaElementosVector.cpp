#include <iostream>

using namespace std;

int sumaVector(int vector[], int tamano);
double sumaVector(double vector[], int tamano);


int main() {

    int tablaDel2[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20}; 
    double tablaInversaDel2[10] = {12., 10., 8., 4., 2., 1., 0.5, 0.25, 0.125, 0.06275, 0.001};

    int sumaDel2 = sumaVector(tablaDel2, 10);
    double sumaDelInvDel2 = sumaVector(tablaInversaDel2, 10);



    cout<< sumaDel2 << endl;

    return 0;
}

int sumaVector(int vector[], int tamano)
{
    int suma = 0;

    for (int i = 0; i < tamano; i++)
    {
        suma += vector[i];
    }
    
    return suma;
}
