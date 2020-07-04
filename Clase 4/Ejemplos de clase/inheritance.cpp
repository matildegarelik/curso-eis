#include <iostream>
#include <cmath>

using namespace std;

class vector3D
{
protected:
    float x, y, z;

public:
    vector3D(float x_const, float y_const, float z_const)
    {
        x = x_const;
        y = y_const;
        z = z_const;
    }

    float calculaModulo()
    {
        return sqrt(x * x + y * y + z * z);
    }
};

class vector2D : public vector3D
{
public:
    vector2D(int x, int y) : vector3D(x, y, 0) { };
};

int main()
{

    vector2D v(3.0, 4.0);

    cout << v.calculaModulo() << endl;

    return 0;
}