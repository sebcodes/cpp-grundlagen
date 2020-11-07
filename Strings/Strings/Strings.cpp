/*
* Application "Eine Hilfe für alle die C++ nicht ganz verstehen"
* Copyright (c) sebcodes 2020
* @author sebcodes <info@sebcodes.de>
* @see https://github.com/sebcodes/cpp-basycs
*/
#include <iostream>
#include <string>

/*
    Zur Einbindung : Benutzt ihr "using namespace::std" müsst ihr 
    meistens noch die "string.h" bzw. die "string" Library einbinden, 
    wenn ihr wie ich immer den namespace vorschreibt braucht ihr es nicht

    AUSNAHME: Ihr benötigt sie wenn ihr Strings mit "getline" einlest

*/


int main()
{
    //Der Datentyp ist "string", string befindet sich im Namespace "std", deshalb geben wir diesen auch an!
    std::string str1 = "Hello";
    std::string str2 = "World";
    //Strings brauchen keinen Startwert, "str3" hat den Wert str3 = "";
    std::string str3;

    /*
    Sobald wir einen String definieren, ist diese Variable ein Objekt(Klassen Instanz, dazu kommen noch Themen)!
        Deshalb können wir auf alle Methoden (Funktionen) der Klasse String zugreifen zb.so :

        Größe des Strings:   
            str3.size();


            size() ist eine Funktion der Klasse String

    */


    /*
        Erklärung der Zeile "str3 = str1"

        str3 hat ja den wert ""
        str1 hat den Wert "Hello"
        Bei dieser Zuweisung hat num str3 den Wert "Hello" von str1 bekommen
    
    */
 
    str3 = str1;
    std::cout << "str3 : " << str3 << std::endl;

    /*
        Erklärung der Zeile "str3 = str1"

        Anders ist es hier:
        Hier addieren wir beide Strings zu einem String, bei Strings ist eine Addition ein Anhängen von Chars
        str1 hat den wert "Hello"
        str2 hat den wert "World"

        Somit hat hier str3 den Wert "HelloWorld"

    */
    str3 = str1 + str2;
    std::cout << "str1 + str2 : " << str3 << std::endl;

    
    /*
         Größe eines Strings mit "length":

        Wie oben schon beschrieben können wir auf die Methoden der Klasse schreiben, somit hier ein Beispiel
        wie man die Größe des Strings ausgibt:

    */

    std::cout << "str3.size() :  " << str3.size() << std::endl;


    /*
       Länge eines Strings mit "length"
    
    */
    std::cout << "str3.length() :  " << str3.length() << std::endl;

    /*
        Zugriff auf die Strings:

        Auf Strings kann wie ein Feld (Array) zugreifen, hier ein Beispiel wie man das erste Zeichen von "Hallo" ausgibt

    */
    std::cout << "Erste Zeichen von 'Hallo' :  " << str1[0] << std::endl;


    /*
    Manipulieren von Strings:

    Hier ändern wir das erste Zeichen von "Hallo" zu einen "S"

    */
    str3[0] = 'S';
    std::cout << "Manipulierter String :  " << str1 << std::endl;
    std::cout << "Erste Zeichen von 'Hallo' :  " << str1[0] << std::endl;


    /*
        WICHTIGE INFO ZUM EINLESEN von Strings!
        
        ein einfaches "cin >> text" geht nur wenn es sich um einen String OHNE Leerzeichen handelt.

        Um die GANZE ZEILE einzulesen wird getline verwendet, als 1. Parameter wird "cin" übergeben, 
        als 2. Parameter der Variablen Name wo der String gespeichert werden soll

        Einlesen einer Zeile:
        
    */
    std::string Name;
    std::cout << "Namen eingeben: " << Name << std::endl;
    std::getline(std::cin, Name);
    
    std::cout << "Eingelesener String: " << Name << std::endl;


    (void)getchar();
    return 0;
}
