#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int b = 3;
    bool result = b > a;
    a += 1;
    bool prueba = true;
    int edades[] = {24, 64, 14};
    cout << sizeof(edades) / sizeof(edades[0]) << endl;
    cout << sizeof(a) << endl;
    cout << prueba << endl;
    cout << result << endl;
}