#include <iostream>

using namespace std;

int main(){
    /******************************
     * Este algoritmo obtiene los 
     * dígitos en binario al calcular
     * el resto en la división. Luego,
     * con el cociente continúa hasta
     * llegar a cero. 
     * 
     * Ejemplo, 53:
     * 
     * 53 % 2 = 1 => Primer dígito 1 
     * 53 / 2 % 2 = 0 => Segundo dígito 0
     * 53 / 4 % 2 = 1 => Tercer dígito 1
     * ...
     * 
     * El problema es que los muestra al revés.
     * La solución se verá la clase siguiente,
     * en manipulación de variables
     * ****************************/
    int numero;

    cout << "Ingrese el número que desea mostrar en binario: ";
    cin >> numero;

    while(numero > 0){
        numero % 2 ? cout << 1 : cout<<0;
        numero /=2;
    }
    return 0;

}