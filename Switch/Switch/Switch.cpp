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
    Ein Switch ist sozusagen eine verkürzte Schreibweise zu einem if else if else usw.
    Jeder Case ist die Bedinung also der case mit der 1 , heißt in der if : if(day == 1)
    Wenn der Case zutrifft wird dieser ausgeführt und mit break beendet, damit nicht die andern
    cases geprüft werden.
   */

    int day = 4;
    switch (day) {
    case 1:
        std::cout << "Monday";
        break;
    case 2:
        std::cout << "Tuesday";
        break;
    case 3:
        std::cout << "Wednesday";
        break;
    case 4:
        std::cout << "Thursday";
        break;
    case 5:
        std::cout << "Friday";
        break;
    case 6:
        std::cout << "Saturday";
        break;
    case 7:
        std::cout << "Sunday";
        break;
    }


    (void)getchar();
    return 0;
}
