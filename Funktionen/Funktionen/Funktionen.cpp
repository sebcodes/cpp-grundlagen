/*
* Application "Eine Hilfe für alle die C++ nicht ganz verstehen"
* Copyright (c) sebcodes 2020
* @author sebcodes <info@sebcodes.de>
* @see https://github.com/sebcodes/cpp-basycs
*/
#include <iostream>

//Das ist ein Prototyp einer Funktion, es deklariert den RückgabeTyp, die jeweiligen Datentypen der Parameter wenn benötigt
//Dies muss nicht zwingend gemacht werden, ist aber hilfreich bei der späteren Ansicht des Codes was man da gemacht hat.
//Außerdem MUSS dies gemacht werden wenn die Funktion unterhalb der "int main" funktion deklariert ist.
int max(int, int);


//Definierung der Funktion, der RückgabeTyp entspricht hier "int" ein "int" MUSS auch zurückgegeben werden!
int max(int zahl1, int zahl2) {
    //Return wert, "return" gibt nur etwas zurück, NICHT aus, es ist also nicht dasselbe wie "cout" !
    return (zahl1 > zahl2) ? zahl1 : zahl2; //Das ist ein tenärer Operator, den kann ich auf Anfrage gerne auch erklären
}


/*
    Das ist die Main Funktion
    der C++ Compiler benötigt sie um zu kompilieren,
    die ist der Startpunkt jedes Projektes
*/

int main()
{
    //Hier rufen wir unsere Funktion mal auf. Es gibt da mehrere Wege:
    //1. Sofort ausgeben:
    std::cout << max(1, 2);
    //2. in einer Variable speichern:
    int maximum = max(1, 2); //Gibt 2 zurück
    //3. in anderen Funktionen nutzen oder in rechnungen:
    maximum += max(5, 3); //gibt 2 + 5 = 7 zurück, da maximum ja mit dem wert 2 schon deklariert ist + dem maximum aus 5 und 3


    (void)getchar();
    //Auch das ist wieder eine Funktion die ein "int" als return typ benötigt also "return 0"
    return 0;
}
