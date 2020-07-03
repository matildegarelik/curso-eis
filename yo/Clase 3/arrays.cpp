#include <iostream>

using namespace std;
int main(){
    char palabraAMedir[50];

    cout<<"Ingrese la palabra a medir"<<endl;

    cin>> palabraAMedir;

    //whatever.lenght() hace lo mismo

    char char_init = palabraAMedir[0];
    int longitud = 0;

    while (char_init){
        longitud++;
        char_init = palabraAMedir [longitud];
    }
    cout<<"La longitud es: "<<longitud<<endl;

    return 0;
}