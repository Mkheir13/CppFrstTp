//
// Created by kheir on 31/03/2022.
//
#include "../include/exo2.h"

int exo2()
{
    int n;
    n = askIntInput("Saisir un Nombre :  ");
    int result = 1;
    for(int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    std::cout << "Factorielle de  " << n << "est: " << result << std::endl;
    return result;
}