#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream miArchivoAEscribir;
    miArchivoAEscribir.open("NuevoArchivo.txt");
    miArchivoAEscribir << "Pablito clavo un clavito!" << endl;
    miArchivoAEscribir << "Cuantos clavitos clavo pablito?" << endl;
    miArchivoAEscribir.close();

    ifstream miArchivoALeer;
    miArchivoALeer.open("NuevoArchivo.txt");
    string textoArchivo; // Creo una variable auxiliar donde guardo el texto que saco de adentro del archivo
    //getline(miArchivoALeer, textoArchivo); // Guardo el texto desde adentro del archivo

    int i = 0;
    while (getline(miArchivoALeer, textoArchivo))
    {
        cout<< textoArchivo << endl;
    }

    miArchivoALeer.close();

    return 0;
}