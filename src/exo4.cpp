//
// Created by kheir on 31/03/2022.
//

#include <algorithm>
#include "../include/exo4.h"

void exo4() {
    int n;
    int arr[10];
    int i = 0;
    int summ = 0;
    float average;

    while (i < 10) {
        n = askIntInput("Veuillez entrer la note N " + std::to_string(i + 1) + " : ");
        if (n > 20 || n < 0) {
            std:: cout << "Attention! une note est comprise entre 0 et 20" << std::endl;
            continue;
        }
        arr[i] = n;
        i++;
        summ += n;
    }
    average = summ / 10;
    int max = *std::max_element(arr, arr + 10);
    int min = *std::min_element(arr, arr + 10);
    std:: cout << "La moyenne des notes est : " << average << std::endl;
    std:: cout << "La note la plus haute est : " << max << std::endl;
    std:: cout << "La note la plus basse est : " << min << std::endl;
}



