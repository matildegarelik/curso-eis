#include <iostream>
#include <cmath>

using namespace std;

class vector2D
{
public:
    float x,y;
    float calculaModulo()
    {
        return sqrt(x * x + y * y);
    }
};

int main()
{

    vector2D v;

    v.x  = 4.0;
    v.y = 3.0;

    cout << v.calculaModulo() << endl;

    return 0;
}