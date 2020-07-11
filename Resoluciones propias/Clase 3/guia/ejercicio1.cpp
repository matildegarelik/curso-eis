#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
int main (){

string texto;
string leido;
ifstream archivo;
archivo.open ("texto_español.txt");
while (getline (archivo, texto)){
    leido += texto;
}
archivo.close();
  
ofstream archivo2;
archivo2.open ("solucion_ej1.txt");
int c;
c= leido.length();
archivo2<<"El archivo NuevoArchivo.txt tiene "<<c<< " caracteres"<<endl;
archivo2.close();
return 0;
}