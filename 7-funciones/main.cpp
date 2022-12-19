#include <iostream>

using namespace std;

int multiplicar(int a, int b = 2)
{
    return a * b;
}
int suma(int a, int b)
{
    return a + b;
}

int main(int argc, char const *argv[])
{
    cout << suma(2, 3) << endl;
    cout << multiplicar(4);
}
