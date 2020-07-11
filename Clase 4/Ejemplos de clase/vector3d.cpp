#include <iostream>
#include <cmath>

using namespace std;
template <class T>
class vector3D
{

protected:
    T x, y, z;

public:
    vector3D()
    {
        x=0;
        y=0;
        z=0;
    }
    vector3D(T x_constr, T y_constr, T z_constr)
    {
        x = x_constr;
        y = y_constr;
        z = z_constr;
    }

    T calculaModulo()
    {
        return sqrt(x * x + y * y + z * z);
    }

    vector3D operator+(vector3D other)
    {
        T x_res = x + other.x;
        T y_res = y + other.y;
        T z_res = z + other.z;

        return vector3D(x_res, y_res, z_res);
    }

    vector3D operator*(T esc)
    {
        T x_res = x * esc;
        T y_res = y * esc;
        T z_res = z * esc;

        return vector3D(x_res, y_res, z_res);
    }

    friend ostream &operator<<(ostream &os, const vector3D &vector)
    {
        os << "(" << vector.x << "," << vector.y << "," << vector.z << ")";
    }
};

template <class T>
class vector2D : protected vector3D<T>
{
public:
    vector2D(T x_constr, T y_constr) : vector3D<T>(x_constr, y_constr, 0) {};
    
    friend ostream &operator<<(ostream &os, const vector2D &vector)
    {
        os << "(" << vector.x << "," << vector.y << ")";
    }
    
    vector2D operator+(vector2D other)
    {
        T x_res = this->x + other.x;
        T y_res = this->y + other.y;

        return vector2D(x_res, y_res);
    }
};

template <class T_num>
class sistema
{
private:
    vector3D<T_num> fuerzas[50];
    vector3D<T_num> posiciones[50]; // candado
    int numeroActual;

public:
    sistema()
    {
        numeroActual = 0;
    }
    void agregarFuerza(vector3D<T_num> fuerzaEntrante, vector3D<T_num> puntoAplicacion)
    {
        fuerzas[numeroActual] = fuerzaEntrante;
        posiciones[numeroActual] = puntoAplicacion;
        numeroActual++;
    }

    void agregarFuerza(vector3D<T_num> fuerzaEntrante)
    {
        fuerzas[numeroActual] = fuerzaEntrante;
        posiciones[numeroActual] = vector3D<T_num>(0., 0., 0.);
        numeroActual++;
    }

<<<<<<< HEAD
    friend ostream& operator<<(ostream& os, const vector3D& vector) //Para imprimir, me permite interactuar con objetos de otra clase. Tambien puede usarse ara re ganar la conmutatibilidad de las operaciones
    {
        os <<"(" <<vector.x<<","<<vector.y<<","<<vector.z<<")"; //os es el flujo de informacion de salda, por ejemplo cout
=======

    void quitarUltimaFuerza()
    {
        numeroActual--;
>>>>>>> 9a05988a31f1a94cc1b47a8e5d1e9fddff1a53a3
    }

<<<<<<< HEAD
class vector2D : public vector3D  //Los dos puntos hacen que herede
{
    public:
        vector2D(float x_const, float y_const) : vector3D(x_const, y_const, 0) {};
=======
    vector3D<T_num> fuerzaResultante()
    {
        vector3D<T_num> resultado;
        for (int i = 0; i < numeroActual; i++)
        {
            resultado = resultado + fuerzas[i];
        }
        return resultado;
    }
>>>>>>> 9a05988a31f1a94cc1b47a8e5d1e9fddff1a53a3
};

int main()
{
    /*
    vector3D v(3., 4., 5.);
    vector3D u(3., 5., 7.);

    vector3D w = u + v * 3;
    vector3D t = w*2 + u*3;

    sistema S;

    S.agregarFuerza(v);
    S.agregarFuerza(u);
    S.agregarFuerza(w);
    S.agregarFuerza(t);

    cout << S.fuerzaResultante() << endl;
    */

    vector2D<int> v(3, 4);
    vector2D<int> u(1, 1);

    vector2D<int> w = v+u;

    cout<<w<<endl;

    return 0;
}