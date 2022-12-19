#include <iostream>

using namespace std;

int main()
{
    int edad;
    edad = 10;
    const char letra = 'g';
    int lista_edades[] = {
        1,
        2,
        3,
        4,
        5,
        6,
    };
    cout << lista_edades[0] << endl;
    for (int i = 0; i < 6; i++)
    {
        /* code */
        cout << i << endl;
    };

    cout << edad << endl;
    cout << letra << endl;
    cout << "Hello Word\n";
}