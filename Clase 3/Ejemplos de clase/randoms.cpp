#include <iostream>
#include <random>

using namespace std;


int main()
{
    random_device dev;
    mt19937 rng(dev());
    uniform_int_distribution<mt19937::result_type> dist6(1,6);

    cout<<"Numeros aleatorios del 1 al 6"<<endl;

    cout<<dist6(rng)<<endl;

    return 0;
}