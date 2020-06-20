#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int a;

    cout << "Introduzca un numero entero." <<endl;
    cin >> a;

    cout << "El numero introducido es: " << a <<endl;

    bitset<8> x(a);

    cout << "Su representacion en binario es: " << x << endl;

    return 0;
}