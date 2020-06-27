#include <iostream>

using namespace std;

void hanoi (int n, int from, int to, int aux);

int main() {
    hanoi(5,1,3,2);
    return 0;
}

void hanoi (int n, int from, int to, int aux )
{
    if (n==1){
        cout<<"Move de "<< from <<" a "<< to <<endl;
        return;
    }
    hanoi(n-1, from, aux, to);
    hanoi(1, from, to, aux);
    hanoi(n-1, aux, to, from);
}