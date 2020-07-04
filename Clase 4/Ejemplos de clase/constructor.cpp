#include <iostream>
#include <cmath>

using namespace std;



class vector2D
{
private:
    float x, y;

public:
    vector2D(float x_const, float y_const)
    {
        x = x_const;
        y = y_const;
    }
    
    float calculaModulo()
    {
        return sqrt(x * x + y * y);
    }
};

int main()
{
    float x, y;

    cout <<"Ingresame los valores x e y del vector: ";
    cin >> x >> y;

    vector2D v(x, y);

    cout << v.calculaModulo() << endl;

    return 0;
}