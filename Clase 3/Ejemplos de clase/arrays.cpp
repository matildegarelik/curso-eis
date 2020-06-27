#include <iostream>

using namespace std;

int main() {

    int tablaDel2[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20}; 
    char palabrota[] = "Mequetrefe";

    cout << tablaDel2<<endl;
    cout << palabrota<<endl;

    for (int i = 0; i < 10; i++)
    {
        cout<<tablaDel2[i]<<'\t';
        cout<<palabrota[i]<<'\t';
        cout<<tablaDel2[i] + palabrota[i]<<endl;
    }

    return 0;
}