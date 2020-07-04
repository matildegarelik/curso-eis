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

    vector2D operator+(vector2D other){
        float x_res = this->x + other.x;
        float y_res = this->y + other.y;

        return vector2D(x_res, y_res);
    }
};

int main()
{

    vector2D v(3.0, 4.0);
    vector2D u(4.0, 3.0);

    vector2D w = v+u;
    
    return 0;
}