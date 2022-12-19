#include <iostream>
using namespace std;

class Persona
{
private:
    string nombre;
    int edad;

public:
    static int numero_personas;
    Persona(string nombre, int edad);

    // Destruct
    ~Persona()
    {
        cout << "El destructor fue invocado en persona " << nombre << endl;
    }
    void mostrar()
    {
        cout << nombre << endl;
        cout << edad << endl;
    }
    void saludar();

    Persona &estnombre(string nombre)
    {
        this->nombre = nombre;
        cout << "Cuál es su nombre? ";
        cin >> this->nombre;

        return *this;
    }
    // el "&" es para indicar que la variable almacena una dirección y "*" antes del return, para que retorne el valor que almacena esa dirección.//
    Persona &estedad(int edad)
    {
        this->edad = edad;
        cout << "Cuál es su edad? ";
        cin >> this->edad;
        return *this;
    }
};

void Persona::saludar()
{
    cout << "Hola mi nombre es " << nombre << endl;
}
int Persona::numero_personas = 0;

Persona::Persona(string nombre, int edad)
{
    this->nombre = nombre;
    this->edad = edad;
    numero_personas += 1;
}

int main()
{
    system("clear"); // para limpiar pantalla si estas en windows o "cls" si es Linux

    Persona per = Persona("saul", 25); // inicia la persona de manera estatica
    per.mostrar();
    per.saludar();
    cout << endl;
    /*Inicia un array de Puntero de tipo Persona
    y el operador new crea el objeto de manera
    dinamica en memoria, sera el lugar donde el
    puntero almacene los datos que reciba. */
    Persona *p = new Persona("saul", 25);
    delete p; // Elminando esa instancia de la clase

    p->mostrar();
    p->saludar();
    cout << endl;
    cout << Persona::numero_personas << endl;
}