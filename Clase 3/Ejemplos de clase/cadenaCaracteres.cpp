#include <iostream>

using namespace std;

int main() {

    char palabrota[] = "Robert"; 

    char letra = palabrota[0];
    int longitud = 0;

    while(letra != 0) {
        longitud++;
        letra = palabrota[longitud];
    }

    cout<< "La longitud es: "<< longitud <<endl;


    return 0;
}