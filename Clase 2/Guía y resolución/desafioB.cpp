#include <iostream>
/************************
 * A diferencia de 
 * los otros ejercicios,
 * en este se trabaja con 
 * un concepto adicional,
 * las operaciones bit a bit.
 * Así como tenemos los numeros 
 * enteros representados de a bits
 * podemos operar bit a bit entre ellos. 
 * 
 * Por ejemplo, 
 * entre los numeros 5 (101) y 3 (010)
 * se pueden hacer las operaciones 
 * de corrimiento a la derecha,
 * a la izquierda, 
 * bitwise and, 
 * y bitwise or.
 * 
 * ¡Juegue con ellas! 
 * No son tan importantes, 
 * y quedaron fuera
 * de la teoría por ello.
 * **********************/
using namespace std;

int main(){
    int W, n;

    cout << "Ingrese W y n"<<endl;

    cin >> W >> n;

    int incisoA = W>>n;
    int incisoB = (W>>n)<<n;

    int Mask = (1<<n)-1;

    int incisoC = W&Mask;
    int incisoD = W&~Mask;
    int incisoE = W|Mask; 

    cout<<incisoA<<" "<<incisoB<<" "<<incisoC<<" "<<incisoD<<" "<<incisoE<<endl;


    return 0;
}