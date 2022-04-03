//
// Created by kheir on 31/03/2022.
//

#include <valarray>
#include "../include/exo3.h"

int exo3() {
    int n;
    n = askIntInput("Saisir un nombre : ");
    int sum = 0;
    int copy = n;

    while (n > 0) {
        int temp = 1;
        int x = n % 10;
        n /= 10;
        for(int i = 1; i <= x; i++) {
            temp = temp * i;
        }
        sum += temp;
    }
    if (sum == copy) {
        std::cout << copy << " est un chiffre fort "<< std::endl;
    } else {
        std::cout << copy << " n'est pas un chiffre fort "<< std::endl;
    }
    return sum;
}


