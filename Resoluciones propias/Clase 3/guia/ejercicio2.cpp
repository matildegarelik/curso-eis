#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
int main (){

string texto;
string leido;
ifstream archivo;
archivo.open ("nombres.txt");
while (getline (archivo, texto)){
    cout << texto;
}