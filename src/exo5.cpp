//
// Created by kheir on 02/04/2022.
//

#include "../include/exo5.h"

void    exo5() {
    int n;
    n = askIntInput("Nombre mystere : ");
    int myNumber = rand() % n + 1;
    int tentative  = 0;
    int m = n - n - n;
    std::cout << "Le nombre a trouver est compris entre : " << m << " et " << n << std::endl;
    int guess = askIntInput("Votre proposition : ");
    while (guess != myNumber) {
        if (guess > myNumber) {
            std::cout << "C'est moins" << std::endl;
        } else {
            std::cout << "C'est plus" << std::endl;
        }
        guess = askIntInput("Votre proposition : ");
        tentative++;
    }
    std::cout << "Bravo,  le chiffre est bien " << myNumber <<"vous avez gagne en " << tentative << " coups" << std::endl;
    char rep = askCharInput("Voulez vous rejouer ? (O/N)");
    if (rep == 'O' || rep == 'o') {
        exo5();
    } else {
        std::cout << "Au revoir" << std::endl;
    }
}
