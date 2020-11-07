/*
* Application "Eine Hilfe für alle die C++ nicht ganz verstehen"
* Copyright(c) sebcodes 2020
* @author sebcodes <info@sebcodes.de>
* @see https ://github.com/sebcodes/cpp-basycs
*/

#include <iostream>

int main()
{
    //Eine Referenzvariable ist eine "Referenz" auf eine vorhandene Variable und wird mit dem Operator & erstellt:

    std::string Name = "Sebastian";
    std::string& Benutzername = Name;    // Referenz

    /*
    Jetzt können wir entweder den Variablennamen "Name" oder den Referenznamen "Benutzername" verwenden, 
    um auf die Variable "Name" zu verweisen:
    */


    std::cout << "Name: " << Name << std::endl;  // Gibt "Sebastian" aus
    std::cout << "Referenz von Name: " << Benutzername << std::endl;  // Gibt "Sebastian" aus


    /*
    Speicherplatz einer Variable durch die Referenz ausgeben:
    */
    std::cout << "Speicherplatz der Variable Name: " << &Name << std::endl;

    (void)getchar();
    return 0;
}
