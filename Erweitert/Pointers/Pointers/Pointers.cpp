/*
* Application "Eine Hilfe für alle die C++ nicht ganz verstehen"
* Copyright (c) sebcodes 2020
* @author sebcodes <info@sebcodes.de>
* @see https://github.com/sebcodes/cpp-basycs
*/

#include <iostream>

int main()
{
    /*
    Ein Zeiger (engl. pointer) ist nichts anderes als eine Variable, 
    die anstelle eines normalen Wertes eine Adresse speichert, 
    z. B. die Adresse einer anderen Variable.

    Pointer sind hilfreich wenn die Größe eines Arrays während der Laufzeit erst deklariert/bekannt wird 
    (Beispiel : PasswortGenerator)

    */
    //Ein Pointer wird mit <Datentyp>* deklariert
    int* intPointer;           // pointer zu einem integer
    double* doublePointer;    // pointer zu einem double
    float* floatPointer;     // pointer zu einem float
    char* charPointer;      // pointer zu einem character

    //Ein Beispiel eines int Pointers das beliebig viele Zufallszahlen in ein Array einließt

    int wert;
    std::cout << "Anzahl der Werte :" << std::endl;
    std::cin >> wert;
    //"nullptr" wird benötigt um den pointer zu initialisieren
    int* pointer = nullptr;
    //Pointer zu einen neuen int array konvertieren, wenn deklariert kann vorher die "nullptr" deklaration weggelassen werden!
    pointer = new int[wert];

    for (size_t i = 0; i < wert; i++)
    {
        // Auf die Elemente des Arrays wird wie gewohnt zugegriffen.
        pointer[i] = rand();
    }
    
    //Alle zufalls werte ausgeben:
    for (size_t i = 0; i < wert; i++)
    {
        // Auf die Elemente des Arrays wird wie gewohnt zugegriffen.
        std::cout << "Zufallszahl #" << i << " "<< pointer[i] << std::endl; 
    }


    //Speicher wieder freigeben
    delete[] pointer;

    (void)getchar();
    std::cin.ignore();
    return 0;
}
