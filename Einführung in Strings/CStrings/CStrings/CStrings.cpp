/*
* Application "Eine Hilfe für alle die C++ nicht ganz verstehen"
* Copyright (c) sebcodes 2020
* @author sebcodes <info@sebcodes.de>
* @see https://github.com/sebcodes/cpp-basycs
*/


#include <iostream>

/*
    C-Strings sind tatsächlich eindimensionale Arrays, 
    die durch ein Nullzeichen '\0' abgeschlossen werden. 
    Somit enthält ein nullterminierter String die Zeichen, 
    aus denen die String besteht, gefolgt von einer Null.

    Die folgende Deklaration und Initialisierung erstellt ein String, 
    der aus dem Wort "Hallo" besteht. Um das Nullzeichen am Ende des Arrays zu halten, 
    ist die Größe des Zeichenarrays, das die Zeichenfolge enthält, 
    eins größer als die Anzahl der Zeichen im Wort "Hallo".
*/



int main()
{
    //1. Art ein C-String zu definieren:
    char text[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };

    //1. Art ein C-String zu definieren: ( hier muss man nicht auf das '\0' achten!)
    char text2[] = "Hello";

    //Beispiel das einlesen und wieder ausgeben von bustaben:

    //bustaben mit 20 zeichen (inclusive '\0')
    char bustaben[20+1];
    
    //getline benötigt 2 Parameter, der erste ist die Variable welcher der Wert der Eingabe zugewiesen werden soll
    // der zweite die größe des pointers/arrays, dies kann man mit sizeof() machen
    std::cin.getline(bustaben, sizeof(bustaben));


    //Ausgabe:
    std::cout << "Deine Eingabe (20 Zeichen): " << bustaben << std::endl;


    //Formatierte Ausgabe, zb nur jeder 2.te Bustabe

    //Eingabe : AaBbCcDdEeFfGg
    //Ausgabe : ABCDEFG

    std::cout << "Deine Formatierte ausgabe: ";
    for (int i = 0; i < strlen(bustaben); i++)
    {
        
        if(i % 2 == 0) std::cout << bustaben[i];
    }
    //Der C-String braucht noch ein '\0'
    std::cout << '\0';


    (void)getchar();
    std::cin.ignore();
    return 0;
}
