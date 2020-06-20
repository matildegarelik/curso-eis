#include <iostream>
#include <bitset>

using namespace std;

int main() {
    float fl = 420.69;
    int n = 12;
    int d = 5;
    char a = 'a';

    cout << "La suma de n y d es: "<< n+d <<endl;
    cout << "El cociente de n y d es: "<< n/d <<endl;
    cout << "El resto de n y d es: "<< n%d <<endl;
    cout << "Si le sumo n a la letra a obtengo: " << (char)(a+d) << endl;

    cout << "Si divido un entero por un flotante: " << n/fl <<endl;

    cout<< "La dirección de memoria donde está fl es: "<< &fl <<endl;
    return 0;
}