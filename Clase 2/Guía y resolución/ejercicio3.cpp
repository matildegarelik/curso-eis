#include <iostream>

using namespace std;

int main()
{
    int numero;
    int base;
    cout << "Ingrese el numero y luego la base" << endl;
    cin >> numero >> base;

    int cantDivisiones = 0;
    while (numero > 0)
    {
        numero /= base;
        cantDivisiones++;
    }

    cout << "Tiene " << cantDivisiones << " digitos." << endl;
    return 0;
}