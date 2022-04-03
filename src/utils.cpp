//
// Created by kheir on 31/03/2022.
//

#include "../include/utils.h"

int askIntInput(const std::string prompt) {
    std::string input;
    std::cout << prompt;
    std::getline(std::cin, input);

    // test if input can be cast to int
    try {
        return std::stoi(input);
    } catch (std::invalid_argument) {
        std::cout << "Invalid input. Please try again." << std::endl;
        return askIntInput(prompt);
    }
}

int askCharInput(const std::string prompt) {
    std::string input;
    std::cout << prompt;
    std::getline(std::cin, input);

    // test if input can be cast to char
    try {
        return input.at(0);
    } catch (std::out_of_range) {
        std::cout << "Invalid input. Please try again." << std::endl;
        return askCharInput(prompt);
    }
}

void menu() {
    int choix;
    std::cout << "\nChoisir un exercice: " << std::endl;
    std::cout << "0. Quitter" << std::endl;
    std::cout << "1. Affichage & Somme (Pairs)" << std::endl;
    std::cout << "2. Factorielle" << std::endl;
    std::cout << "3. Nombre fort" << std::endl;
    std::cout << "4. Notes" << std::endl;
    std::cout << "5. Nombre mystere" << std::endl;
//    std::cin >> choix;
    choix = askIntInput("\nQuel exercice voulez-vous lancer ? : ");
    switch (choix) {
        case 0:
            std::cout << "Au revoir" << std::endl;
            break;
        case 1:
            exo1();
            menu();
            break;
        case 2:
            exo2();
            menu();
            break;
        case 3:
            exo3();
            menu();
            break;
        case 4:
            exo4();
            menu();
            break;
        case 5:
            exo5();
            menu();
            break;
        default:
            std::cout << "Saisie incorrecte!" << std::endl;
            menu();
    }
}


