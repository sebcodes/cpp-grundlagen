/*
* Application "Eine Hilfe für alle die C++ nicht ganz verstehen"
* Copyright (c) sebcodes 2020
* @author sebcodes <info@sebcodes.de>
* @see https://github.com/sebcodes/cpp-basycs
*/

#include <iostream>

/*
    Eine WhileSchleife ist eine Kopfgesteuerte Schleife, sie läuft solange die bedingung wahr ist.

    Struktur:
    while (Bedingung){
        Anweisung1; 
        Anweisung2;
    }



*/


int main()
{
    //Beispiel wo die schleife 10 mal durchläuft
    int i = 1; 
    while (i <= 10) {
        std::cout << "Durchlauf: " << i << std::endl; 
        //i wird erhöht, da es sonst unendlich durchläuft da i immer kleiner 10 ist und somit die Bedingung wahr ist.
        i++; 
    }

    (void)getchar();
    return 0;
}

