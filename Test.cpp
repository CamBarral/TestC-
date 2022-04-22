// Test.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.

#include <iostream>
#include "Person.h"
#include "Car.h"

using namespace std;

int main()
{
    //Create a person
    cout << "============JOHN=============\n";
    Person John = Person("John", "Doe", "June 25, 1990", "man");
    John.Introduce();

    cout << "\n";

    //Create a car
    cout << "============PEUGEOT_208=============\n";
    Car Peugeot = Car("Peugot", "208", Colors::Red, "GH-456-XD", 12563, 7251);
    Peugeot.Introduce();
    Peugeot.SumUp();

    cout << "\n";

    //Create a second person
    cout << "============Alice=============\n";
    Person Alice = Person("Alice", "Super Name", "October 18, 1998", "girl");
    Alice.Introduce();
}


