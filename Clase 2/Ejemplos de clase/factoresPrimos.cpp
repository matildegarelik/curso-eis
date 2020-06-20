#include <iostream>

using namespace std;

int main() {
    int num;
    cout<<"Ingrese un numero." <<endl;
    cin >> num;

    int numOrig = num;

    while(num > 1){
        for (int i = 2; i <= num; i++)
        {
            if(num%i == 0)
            {
                cout<<i<<" es divisor de "<<numOrig<<endl; 
                num /= i;
                break;
            }
        }
    }
    
    return 0;
}