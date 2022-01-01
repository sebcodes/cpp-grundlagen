/*
* Application "Eine Hilfe für alle die C++ nicht ganz verstehen"
* Copyright (c) sebcodes 2020
* @author sebcodes <info@sebcodes.de>
* @see https://github.com/sebcodes/cpp-basycs
*/
#include <iostream>

/*
    Das ist ein Prototyp einer Funktion, es deklariert den RückgabeTyp, die jeweiligen Datentypen der Parameter wenn benötigt
    Dies muss nicht zwingend gemacht werden, ist aber hilfreich bei der späteren Ansicht des Codes was man da gemacht hat.
    Außerdem MUSS dies gemacht werden wenn die Funktion unterhalb der "int main" funktion deklariert ist.
*/
int max(int, int);

/*
    Parameter sind Übergabewerte an Funktion, eine Funktion muss keine Parameter besitzen,
    wenn ja muss beim aufruf auch die Anzahl der Parameter übergeben werden
    die im Prototype bzw. in der Funktion Deklaration definiert sind.

*/


//Definition der Funktion, der Rückgabetyp entspricht hier "int": ein "int" MUSS auch zurückgegeben werden!
int max(int zahl1, int zahl2) {
    //Returnwert, "return" gibt nur etwas zurück, NICHT aus, es ist also nicht dasselbe wie "cout" !
    return (zahl1 > zahl2) ? zahl1 : zahl2; //Das ist ein tenärer Operator, den kann ich auf Anfrage gerne auch erklären
}

/*
    Überladung von Funktionen:
    Beispiel: Du hast 2 Funktionen die dir das maximum von 2 Zahlen liefern, eine für integer und eine für double
    Wenn es 2 oder mehrere Funktionen gibt die das selbe machen, ist es besser sie zu überladen,
    d.h wir definieren sie alle mit dem selben Namen,
    müssen aber entweder die Parameter Anzahl oder Datentyp ändern,
    da 2 exakt gleiche Funktion einen Fehler werfen.

    Beispiel für das maximum Problem:
*/
    //Maximum von Integern
    int maximum(int zahl1, int zahl2) {
        return (zahl1 > zahl2) ? zahl1 : zahl2;
    }

    //Dasselbe für Double (wichtig muss ein anderer Datentyp als int sein)
    double maximum(double zahl1, double zahl2) {
        return (zahl1 > zahl2) ? zahl1 : zahl2;
    }
    /*
        Somit nimmt der Compiler immer automatisch die Funktion anhand der Parameter, wenn es int Zahlen ist, die mit int,
        sonst wenn es Komma zahlen sind, die mit double
    */



/*
    Das ist die Main Funktion
    Der C++-Compiler benötigt sie, um zu kompilieren
    Sie ist der Startpunkt jedes Projektes
*/

int main()
{
    //Hier rufen wir unsere Funktion mal auf. Es gibt da mehrere Wege:
    //1. Sofort ausgeben:
    std::cout << "Maximum von 1 und 2: " << max(1, 2) << "\n";
    //2. in einer Variable speichern:
    int Maximum = max(1, 2); //Gibt 2 zurück
    //3. in anderen Funktionen nutzen oder in rechnungen:
    Maximum += max(5, 3); //gibt 2 + 5 = 7 zurück, da maximum ja mit dem wert 2 schon deklariert ist + dem maximum aus 5 und 3

    //Hier die Ausgabe der Überladung von Funktionen:
    std::cout << "Maximum von 2 Zahlen (Ueberladung): " << maximum(1, 2) << "\n";
    //Genau die Selbe Funktion, allerdings mit double Parameters
    std::cout << "Maximum von 2 Zahlen (Ueberladung): " << maximum(1.2, 2.3) << "\n";



    (void)getchar();
    //Auch das ist wieder eine Funktion die ein "int" als return type benötigt, daher "return 0"
    return 0;
}
