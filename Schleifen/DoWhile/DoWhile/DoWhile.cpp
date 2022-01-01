/*
* Application "Eine Hilfe für alle die C++ nicht ganz verstehen"
* Copyright (c) sebcodes 2020
* @author sebcodes <info@sebcodes.de>
* @see https://github.com/sebcodes/cpp-basycs
*/

#include <iostream>

/*
    Eine DoWhileSchleife ist eine Fußgesteuerte Schleife,
    sie läuft immer einmal durch bis die bedingung kommt und ab dann nur solange die bedingung wahr ist.


    Struktur:
    do {
        Anweisung1;
        Anweisung2;
    } while (Bedingung);



*/


int main()
{
    //Beispiel wo die schleife 10 mal durchläuft
    int i = 1;
    do {
        std::cout << "Durchlauf: " << i << "\n";
        //i wird erhöht, da es sonst unendlich durchläuft, da i dann immer kleiner 10 ist und somit die Bedingung wahr ist.
        i++;
    } while (i <= 10);

    (void)getchar();
    return 0;
}

