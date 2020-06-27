#include <iostream>
#include <cmath>
#include <stdexcept>

using namespace std;

float mySqrt(float x)
{
    if (x < 0)
    {
        throw invalid_argument("No podes calcular la raiz de un negativo");
    }
    return sqrt(x);
}

float division(float x, float y)
{
    if(y==0)
    {
        throw invalid_argument("No podes dividir por cero.");
    }
    return x/y;
}

int main()
{
    float x;
    cout << "Ingrese el numero cuya raiz quiere calcular" << endl;
    cin >> x;
    try
    {
        float raizX = mySqrt(x);
        cout << raizX << endl;
    }
    catch (exception &e)
    {
        cout << "Error! " << e.what() << endl;
    }
    return 0;
}
