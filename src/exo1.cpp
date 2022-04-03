//
// Created by kheir on 31/03/2022.
//

#include "../include/exo1.h"

void printPairs(int n)
{
    for(int i = 1; i <= n; i++)
    {
        if(n == 1) {
            std:: cout << "0" << std::endl;
        }
        if(i % 2 == 0)
        {
            std::cout << i << " ";
        }
    }
}

void PrintNumberofPairs(int n)
{
    int i = 1;
    int sum = 0;
    while(i <= n)
    {
        if(i % 2 == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    std::cout << std::endl << "la somme des nombres pairs de 1 a " << n <<  "sont :" << sum << std::endl;
}


void exo1()
{
    int n;
    n = askIntInput("Saisir un Nombre :  ");
    std::cout << "les nombres pairs de 1 a " << n << " sont: " << std::endl;
    printPairs(n);
    int x;
    x = askIntInput("Saisir un Nombre :  ");
    std::cout << "la somme de 1 a " << x << " sont: ";
    PrintNumberofPairs(x);
}
