#include <iostream>
#include <cmath>

using namespace std;


template <class T>
class vector3D
{
protected:
    T x, y, z;

public:
    vector3D(T x_const, T y_const, T z_const)
    {
        x = x_const;
        y = y_const;
        z = z_const;
    }

    T calculaModulo()
    {
        return sqrt(x * x + y * y + z * z);
    }
};

template <class T>
class vector2D : public vector3D<T>
{
public:
    vector2D(int x, int y) : vector3D(x, y, 0) { };
};

int main()
{

    vector2D<float> v(3.0, 4.0);

    vector2D<int> w(5,8);

    cout << v.calculaModulo() << endl;

    return 0;
}