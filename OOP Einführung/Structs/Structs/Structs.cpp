/*
* Application "Eine Hilfe für alle die C++ nicht ganz verstehen"
* Copyright (c) sebcodes 2020
* @author sebcodes <info@sebcodes.de>
* @see https://github.com/sebcodes/cpp-basycs
*/

#include <iostream>
/*
    Mit C / C ++ - Arrays könnt Ihr Variablen definieren, 
    die mehrere Datenelemente derselben Art kombinieren. 
    Die Struktur ist jedoch ein anderer benutzerdefinierter Datentyp, 
    mit dem Ihr Datenelemente verschiedener Art kombinieren können.

    Strukturen werden verwendet, um einen Datensatz darzustellen. Angenommen, 
    ihr möchtet eure Bücher in einer Bibliothek verfolgen. 
    Möglicherweise möchtet Ihr die folgenden Attribute für jedes Buch verfolgen:

        -Titel
        -Autor
        -Gegenstand
        -Buch-ID

        Struktur definieren

    Um eine Struktur zu definieren, müsst ihr die struct-Anweisung verwenden. 
    Die struct-Anweisung definiert einen neuen Datentyp mit mehr als einem Mitglied. 
    Eine struct-Anweisung ist folgendermaßen aufgebaut:

    struct [Struktur-Tag] {
        Mitgliedsdefinition;
        Mitgliedsdefinition;
        Mitgliedsdefinition;
    } [eine oder mehrere Strukturvariablen];

    Das Struktur-Tag ist optional und jede Elementdefinition ist eine normale Variablendefinition, 
    z. B. int i; oder float f; 
    oder eine andere gültige Variablendefinition. 
    Am Ende der Strukturdefinition könnt Ihr vor dem letzten Semikolon eine oder mehrere Strukturvariablen angeben, 
    dies ist jedoch optional. Hier ist die Art und Weise, 
    wie Ihr die Buchstruktur deklarieren würdet:
    Mit Strukturvariable
*/
struct Buecher {
    std::string  title;
    std::string  author[50];
    std::string  subject[100];
    std::string  book_id;
} buch;

//Ohne Strukturvariablen

struct BuecherOhneStrukturvariablen {
    std::string  title;
    std::string  author[50];
    std::string  subject[100];
    std::string  book_id;
};


int main()
{

    struct Buecher Buch1;        // Deklariert "Buch1" als Typ Bucher
    struct Buecher Buch2;        // Deklariert "Buch2" als Typ Bucher


    /*
        Um auf ein Mitglied einer Struktur zuzugreifen, verwenden wir den Elementzugriffsoperator (.). 
        Der Elementzugriffsoperator wird als Punkt zwischen dem Namen der Strukturvariablen und dem 
        Strukturelement codiert, auf das wir zugreifen möchten. 
        Man würde das Schlüsselwort struct verwenden, um Variablen vom Strukturtyp zu definieren. 
        Das folgende Beispiel erläutert die Verwendung der Struktur:
    */
    
    //Wenn wir eine Strukturvariable definiert haben können wir auch damit arbeiten:
    buch.title = "Buch Title";


    //Buch id setzen:

    Buch1.book_id = 124;

    //Buch Name setzen:
    Buch1.title = "C++ Fuer Einsteiger";
    Buch2.title = "C++ Fuer Profis";

    //Ausgabe
    std::cout << "Buch1 Titel: " << Buch1.title << std::endl;
    std::cout << "Buch2 Titel: " << Buch2.title << std::endl;


    (void)getchar();
    return 0;
}

