#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto = "10.5";
    string texto2 = "10";

    cout << stoi(texto2) << endl;
    cout << stof(texto);
};