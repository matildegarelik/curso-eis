#include <iostream>
#include <bitset>

using namespace std;

int main() {
    char a;

    cout << "Introduzca una letra." <<endl;
    cin >> a;

    cout << "La letra introducida es: " << a <<endl;
    cout << "Su valor entero es: " << int(a) <<endl;

    bitset<8> x(a);

    cout << "Su representacion en binario es: " << x << endl;

    return 0;
}