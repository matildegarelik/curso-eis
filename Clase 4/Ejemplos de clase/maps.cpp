#include <iostream>
#include <unordered_map> 

using namespace std;


int main()
{

    unordered_map<string, int> nota;
    nota["Federico Rigoberto"] = 3;
    nota["Juan Carlos"] = 5;
    nota["Egloberto"] = 10;

    cout << nota <<endl;

    return 0;
}