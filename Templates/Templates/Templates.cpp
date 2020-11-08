/*
* Application "Eine Hilfe für alle die C++ nicht ganz verstehen"
* Copyright (c) sebcodes 2020
* @author sebcodes <info@sebcodes.de>
* @see https://github.com/sebcodes/cpp-basycs
*/

#include <iostream>

/*
    In C ++ können zwei verschiedene Funktionen denselben Namen haben, 
    wenn ihre Parameter unterschiedlich sind. entweder weil sie eine andere Anzahl 
    von Parametern haben oder weil einer ihrer Parameter von einem anderen Typ ist. 
    Als beispiel nehme ich das Beispiel aus Überladenen Funktionen 
    @see https://github.com/sebcodes/cpp-basycs/tree/master/Funktionen/Funktionen

    Wo wir 2 Funktionen habe für unterschiedliche Datentypen.
    Mit Templates brauchen wir nur noch eine Funktionen Deklaration

*/
/*
    Ein Template wird mit "template" deklariert, danach kommt die definierte "Klasse" (Klassen erkläre ich demnächst)
    Damit hätten wir schon mal das Template erstellt, jetzt befüllen wir es mit Funktionen oder einfach Variablen

    Die Funktionssumme könnte für viele Typen überladen sein, und es könnte sinnvoll sein, 
    dass alle denselben Körper haben. In solchen Fällen kann C ++ Funktionen mit generischen Typen definieren, 
    die als Funktionsvorlagen bezeichnet werden. Das Definieren einer Funktionsvorlage folgt der gleichen Syntax 
    wie eine reguläre Funktion, außer dass das Schlüsselwort template und eine Reihe von Vorlagenparametern in 
    spitzen Klammern <> vorangestellt sind:

        Template <Template-Parameter> Funktionsdeklaration

    Die Vorlagenparameter sind eine Reihe von Parametern, 
    die durch Kommas getrennt sind. Diese Parameter können generische Vorlagentypen sein, 
    indem entweder das Schlüsselwort class oder typename gefolgt von einem Bezeichner angegeben wird. 
    Dieser Bezeichner kann dann in der Funktionsdeklaration verwendet werden, als wäre es ein regulärer Typ. 
    Zum Beispiel könnte eine generische Summenfunktion definiert werden als:


*/
//Hier machen wir ein Template das eine Funktion besitzt das eine aus 2 Strings einen String macht (Vorname + Nachname)
//Der Schlüsselworttyp ist jetzt immer "Benutzer", das haben wir oben definiert als Template class
template <class Benutzer>
Benutzer setName(Benutzer name, Benutzer nachname) {
    //Bei Variablen auch immer Den Schlüsselworttyp angeben
    Benutzer VollName;
    VollName = name + " " + nachname;
    return VollName;
}

/*
    Es spielt keine Rolle, ob der generische Typ in der Liste der Vorlagenargumente mit der Schlüsselwortklasse oder 
    dem Schlüsselworttyp angegeben wird (dies sind 100% Synonyme in Vorlagendeklarationen).

    Es spielt keine Rolle, ob der generische Typ in der Liste der Vorlagenargumente mit der Schlüsselwortklasse oder 
    dem Schlüsselworttyp angegeben wird (dies sind 100% Synonyme in Vorlagendeklarationen).

    Wenn wir im obigen Code "Benutzer" deklarieren (ein generischer Typ innerhalb der in spitzen Klammern eingeschlossenen 
    Vorlagenparameter), kann SomeType wie jeder andere Typ an einer beliebigen Stelle in der Funktionsdefinition verwendet 
    werden. Es kann als Typ für Parameter, als Rückgabetyp oder zum Deklarieren neuer Variablen dieses Typs verwendet werden. 
    In allen Fällen handelt es sich um einen generischen Typ, der zum Zeitpunkt der Instanziierung 
    der Vorlage festgelegt wird.
*/

/*
Beim Instanziieren einer Vorlage wird die Vorlage angewendet,
um eine Funktion mit bestimmten Typen oder Werten für ihre Vorlagenparameter zu erstellen.
Dies erfolgt durch Aufrufen der Funktionsvorlage mit derselben Syntax wie beim Aufrufen
einer regulären Funktion, wobei jedoch die in spitzen Klammern eingeschlossenen
Vorlagenargumente angegeben werden:

        std::string Name = setName<std::string>("Sebastian", "Kiefer");

*/

/*
Ein weiteres Template, diesmal mit 2 Datentypen
    Hier ist der Aufruf:
        are_equal(10,10.0);
    bzw mit Datentypen (ist kein Muss aber empfehleswert um Fehler zu vermeiden):
        are_equal<int,double>(10,10.0);
*/
template <class T, class U>
// T ist der erste Datentyp, U der 2.te Datentyp
bool areEqual(T a, U b)
{
    return (a == b);
}

/*
    Ein weiteres Template, wieder  mit 2 Datentypen

    Dieses Mal nutzen wir "N" in der Funktion, sodass der Parameter mit dem Datentyp übergeben wird:
        multiply<int,2>(10);
    Somit wird 2 * 10 gerechnet = 20
*/
template <class T, int N>
T multiply(T val)
{
    return val * N;
}


int main()
{
    //Instanzierung/Verwendung von Template "Benutzer" mit der "setName" Funktion
    std::string Name = setName<std::string>("Sebastian", "Kiefer");

    //Hier die Ausgabe von Name:

    std::cout << "Dein Vor und Nachname: " << Name << std::endl;



    (void)getchar();
    return 0;
}

