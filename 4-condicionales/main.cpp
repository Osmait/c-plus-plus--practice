#include <iostream>

using namespace std;

void condicion(int option)
{
    switch (option)
    {
    case 1:
        cout << "option 1";
        break;

    case 2:
        cout << "option 2 ";
        break;

    default:
        cout << "Esto no existe";
        break;
    }
}

int main()
{
    int option = 2;
    int edad;
    cout << "edad: ";
    cin >> edad;
    if (edad >= 18 && edad <= 40)
    {
        cout << "Puedes votar\n";
    }
    else
    {

        cout << "No puedes vota\n";
    }
    condicion(option);
}
