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
    Arrays werden verwendet, um mehrere Werte in einer einzelnen Variablen zu speichern,
    anstatt für jeden Wert separate Variablen zu deklarieren.

    Um ein Array zu deklarieren, definiere den Variablentyp, gebe den Namen des Arrays gefolgt von
    eckigen Klammern an und gebendie Anzahl der Elemente an, die gespeichert werden sollen:
    */

    //Array mit 4 Werten von typ string:
    std::string test[4];
    //Diesem Array werte zuweisen:
    std::string cars[4] = { "Tesla", "BMW", "Ford", "Mercedes" };

    //Array mit 3 Werten von Typ int:
    int myNum[3] = { 10, 20, 30 };

    //Ausgabe des ersten Wertes, WICHTIG Arrays beginnen immer ab 0 an zu zählen somit fängt alles bei 0.
    //Die 0.te Stelle wäre physisch die 1.te Stelle

    //Folgendes gibt "Tesla" aus.

    std::cout << "E-Auto ist: " << cars[0] << std::endl;


    /*
        Änderung eines Elements:
        Der Index 0 wird mit einem neuen Wert überschrieben, also statt "Tesla" nun "Opel"
    */
    cars[0] = "Opel";
    std::cout << "Auto waere nun ein: " << cars[0] << std::endl;

    /*
    Arrays in Verbindung mit Schleifen
    WICHTIG: Die schleife darf nur so lange laufen wie elemente im Array sind
    In dieser Schleife werden alle Autos einzeln ausgegeben:
    */
    for (int i = 0; i < 4; i++) {
        //i startet bei 0, somit wird wie wir oben gelernt haben der erste Wert ausgeben usw. bis 4
        std::cout << cars[i] << std::endl;
    }
    /*
    Eine Schleife die 5 Werte nacheinander einließt und alle werte in das array "zahlen" speichert
    
    */
    const int wert = 5;
    int zahlen[wert];
    for (size_t i = 0; i < wert; i++)
    {
        std::cout << "Bitte gebe die Zahl für die Stelle #" << i << " ein: " << std::endl;
        // Auf die Elemente des Arrays wird wie gewohnt zugegriffen.
        std::cin >> zahlen[i];
        std::cout << std::endl;
        
    }

    //Alle werte ausgeben:
    for (size_t i = 0; i < wert; i++)
    {
        // Auf die Elemente des Arrays wird wie gewohnt zugegriffen.
        std::cout << "Wert an stelle #" << i << " " << zahlen[i] << std::endl;
    }

    (void)getchar();
    std::cin.ignore();
    return 0;
}
