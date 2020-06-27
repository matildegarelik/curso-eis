#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        cout << "Tiro un dado " << rand() % 6 + 1 << endl;
    }

    return 0;
}