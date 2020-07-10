#include <iostream>
#include <cmath>
using namespace std;

template <class T_vector, class T_num>
class vector3D
{
private:
    float x, y, z;

public:
    vector3D(float x_const, float y_const, float z_const)
    {
        x = x_const;
        y = y_const;
        z = z_const;
    }

    vector3D operator+(vector3D other)
    {
        float x_res = x + other.x;
        float y_res = y + other.y;
        float z_res = z + other.z;

        return vector3D(x_res, y_res, z_res);
    }

    vector3D operator-(vector3D other)
    {
        float x_res = x - other.x;
        float y_res = y - other.y;
        float z_res = z - other.z;

        return vector3D(x_res, y_res, z_res);
    }

    vector3D operator*(float alpha)
    {

        float x_res = x * alpha;
        float y_res = y * alpha;
        float z_res = z * alpha;

        return vector3D(x_res, y_res, z_res);
    }

    float modulo()
    {
        return sqrt(x * x + y * y + z * z);
    }

    float angulo()
    {
        return atan(y / x) * 180 / M_PI;
    }

    friend ostream& operator<<(ostream& os, const vector3D& vector) //Para imprimir, me permite interactuar con objetos de otra clase. Tambien puede usarse ara re ganar la conmutatibilidad de las operaciones
    {
        os <<"(" <<vector.x<<","<<vector.y<<","<<vector.z<<")"; //os es el flujo de informacion de salda, por ejemplo cout
    }
};

class sistema
{
    private:
        vector3D fuerzas [50];
        vector3D 
}

int main()
{
    vector2D w(3.0, 4.0);

    cout << w << endl;

    cout << w.modulo() << " < " << w.angulo() << endl;

    return 0;
}