/*
* Application "Eine Hilfe für alle die C++ nicht ganz verstehen"
* Copyright (c) sebcodes 2020
* @author sebcodes <info@sebcodes.de>
* @see https://github.com/sebcodes/cpp-basycs
*/

#include <iostream>

/*
    Ein Namensraum ist eine Virtuelle Abtrennung bzw. Verzeichniss um in der Objekt Orientierten Programmierung
    Klassen, Funktion und Structs usw. zu organisieren.

    Einen Namensraum kennt Ihr schon, den "std", in diesem sind einfach Funktionen hinterlegt áuf die man so zugreifen kann:

    Aufbau eines Namespaces:

            namespace Name {

	            Deklarationen;

            }
    
    */

//Hier definieren wir den Namespace "Umlaute":
namespace Umlaute {

    //Definierung der Umlaute:
    const unsigned char AE = static_cast<unsigned char>(142);
    const unsigned char ae = static_cast<unsigned char>(132);
    const unsigned char OE = static_cast<unsigned char>(153);
    const unsigned char oe = static_cast<unsigned char>(148);
    const unsigned char UE = static_cast<unsigned char>(154);
    const unsigned char ue = static_cast<unsigned char>(129);
    const unsigned char ss = static_cast<unsigned char>(225);


}
//Hier definieren wir den Namespace "Benutzer" mit 2 Funktion zum setzen und ausgeben des Namens:
namespace Benutzer {
    //Prototypen
    std::string BenutzerName;

    void setUser(std::string name);
    std::string getUser();

    void setUser(std::string name) {
        BenutzerName = name;
    }
    std::string getUser() {
        return BenutzerName;
    }

}



int main()
{
   
    /*
        Hier können wir den Namespace einbinden oder auch ganz oben unter den Includes (ist besser) wenn wir wollen:
        using namespace::Benutzer;
    */
    //Auf Funktion und Variablen können wir mit "::" zugreifen, kenne wir ja von "std::cout"
    //Benutzernamen setzen:
    Benutzer::setUser("Sebastian");

    //Ausgabe: Benutzernamen: Sebastian
    std::cout << "Benutzernamen: " <<  Benutzer::getUser();


    /*
    Wir können auch auf die Variable "BenutzerName" aus dem Namespace "Benutzer zugreifen":

    INFO: Diese Variable hat den Wert ja nur dadurch da wir vorher den Benutzernamen gesetzt haben.
          Wenn wir das nicht tun wird ein leerer String zurückgegeben.

    */

    //Ausgabe : Sebastian
    std::cout << Benutzer::BenutzerName << "\n";

    //Hier die Ausgabe von "ü" aus dem Namespace "Umlaute":

    std::cout << "Unser ue : " << Umlaute::ue << "\n";

    
    (void)getchar();
    return 0;
}

