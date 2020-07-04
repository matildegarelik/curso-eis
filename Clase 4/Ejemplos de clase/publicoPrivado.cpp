#include <iostream>
#include <cmath>

using namespace std;

class vector2D
{
private:
    float x,y;
public:

    void setValues(float x, float y){
        this->x = x;
        this->y = y;
    }
    float calculaModulo()
    {
        return sqrt(x * x + y * y);
    }
};

int main()
{

    vector2D v;

    v.setValues(3.0, 4.0)

    cout << v.calculaModulo() << endl;

    return 0;
}