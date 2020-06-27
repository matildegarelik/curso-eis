#include <iostream>

using namespace std;

int esPrimo(int N);

int main()
{

    int M;
    cout << "Ingrese el número hasta el cual desea encontrar los primos." << endl;

    cin >> M;

    for (int i = 0; i < M; i++)
    {
        if (esPrimo(i))
        {
            cout << i << " es primo." << endl;
        }
    }
    return 0;
}

int esPrimo(int N)
{
    for (int i = 0; i < N; i++)
    {
        if (N % i == 0)
        {
            return 0;
        }
    }
    return 1;
}