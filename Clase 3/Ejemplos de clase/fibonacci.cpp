#include <iostream>

#include <stdexcept>

using namespace std;

int fibonacci(int n)
{
    if (n>50)
        throw invalid_argument("Ingrese un valor mas chico");

    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int termino;
    cout<<"ingrese un termino: ";
    cin>>termino;
    try{
        cout<<"El termino 15 de la serie de fibonacci es: "<<fibonacci(termino)<<endl;
    }
    catch (exception &e)
    {
        cout<<"Error!" <<e.what() <<endl;
    }
    return 0 ;
}