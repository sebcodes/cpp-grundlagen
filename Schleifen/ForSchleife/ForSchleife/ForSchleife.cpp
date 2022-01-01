/*
* Application "Eine Hilfe für alle die C++ nicht ganz verstehen"
* Copyright (c) sebcodes 2020
* @author sebcodes <info@sebcodes.de>
* @see https://github.com/sebcodes/cpp-basycs
*/

#include <iostream>

int main()
{


    /* Eine For-Schleife besteht aus 3 Bestandteilen,
       1. der lokalen Variablen Definition (Variable ist nur in der Schleife gültig)
       2. der Bedingung zb. (i < 10)  -> i ist dabei die lokale variable
       3. die Inkrementierung/Dekrementierung der Lokalen Variable zb. i++ (ist das selbe wie i = i+1)

       Was macht die Schleife jetzt? Da die schleife ja noch einen Anweisungsblock besitzt "{}", wird dieser solange
       wiederholt wie die bedingung (Bestandteil 2) wahr ist/erfüllt ist.
       
       Nach jedem Durchlauf wird Bestandteil 3 ausgeführt, im beispiel unten also immer "i" um 1 erhöht.

    */

    //Hier läuft die schleife 10 mal durch und "i" wird bei jedem Durchlauf um eins erhöht also 
    // 1.Durchlauf: i = 0
    // 2.Durchlauf: i = 1
    // 3.Durchlauf: i = 2
    // 4.Durchlauf: i = 3
    // 5.Durchlauf: i = 4
    // 6.Durchlauf: i = 5
    // 7.Durchlauf: i = 6
    // 8.Durchlauf: i = 7
    // 9.Durchlauf: i = 8
    // 10.Durchlauf: i = 9

    std::cout << "Beispiel wo immer i +1  genommen wird:" << "\n";

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Durchlauf: " << i << "\n";
    }


    /*
    Beispiel wo immer i + 2 genommen wird:
    */
    std::cout << "Beispiel wo immer i + 2 genommen wird:" << "\n";

    //Durchlauf: 0
    //Durchlauf: 2
    //Durchlauf: 4
    //Durchlauf: 6
    //Durchlauf: 8

    for (int i = 0; i < 10; i = i+2)
    {
        std::cout << "Durchlauf: " << i << "\n";
    }

    /* 
    Wichtig: die Schleifenvariable (hier i) kann ich nur innerhalb der for-Schleife verwenden,
    da diese eine lokale variable ist und sie ihren gültigkeitsbereich nur in der schleife hat,
    da sie dort definiert wird
    */

    /*

        Abbrechen einer Schleife mit "break"

    */
    for (int i = 0; i < 10; i++) {
        //Wenn i = 4 ist soll die schleife abgebrochen werden.
        if (i == 4) {
            break;
        }
        std::cout << i << "\n";
    }

    /*

        Überspringen in einer Schleife mit "continue"

    */
    for (int i = 0; i < 10; i++) {
        //Wenn i = 4 ist soll die schleife die weitere Anweisung (also das cout)
        //überspringen und in den nächsten Durchlauf gehen.
        if (i == 4) {
            continue;
        }
        std::cout << i << "\n";
    }


    (void)getchar();
    return 0;
}
