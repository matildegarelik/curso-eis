#include <iostream>
#include <cmath>

using namespace std;

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

    friend ostream& operator<<(ostream& os, const vector3D& vector)
    {
        os <<"(" <<vector.x<<","<<vector.y<<","<<vector.z<<")";
    }
};

class vector2D : public vector3D 
{
    public:
        vector2D(float x_const, float y_const) : vector3D(x_const, y_const, 0) {};
};

int main()
{
    vector2D w(3.0, 4.0);

    cout << w << endl;

    cout << w.modulo() << " < " << w.angulo() << endl;

    return 0;
}