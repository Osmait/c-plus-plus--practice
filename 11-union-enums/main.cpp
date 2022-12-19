#include <iostream>
#include <string>

using namespace std;

int main()
{

    // Union

    union number_letter
    {
        int number;
        char letter;
    };

    number_letter x = {'A'};

    cout << "X as a number: " << x.number << endl;
    cout << "X as a letter: " << x.letter << endl;

    // Enums

    enum weekdays
    {
        monday = 'M',
        tuesday = 'T',
        wednesday = 'W',
        thursday = 'H',
        friday = 'F',
        saturday = 'S',
        sunday = 'D'
    };

    weekdays day = monday;
    cout << (char)day;
}