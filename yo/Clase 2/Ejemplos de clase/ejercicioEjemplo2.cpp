#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int long N;

    cout << "Ingrese el numero del cual desea saber si es primo o no: " << endl;

    cin >> N;

    while (N>1){
        for (int i = 2; i <= N; i++)
        {
            if (N % i == 0)
            {
                cout << "El numero no es primo" << endl;
            
                return 0;
                
            }
            else
            {
                break;
            }
            
        }
    }

    cout << "El numero es primo" << endl;
    return 0;
}
