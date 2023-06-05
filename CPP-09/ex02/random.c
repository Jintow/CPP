//
// Created by jlitaudo on 6/5/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 3000
#define MIN_RANGE 0
#define MAX_RANGE 100000

int main() {
    int numbers[SIZE];
    int i;

    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));

    // Génération des nombres aléatoires
    for (i = 0; i < SIZE; i++) {
        numbers[i] = rand() % (MAX_RANGE - MIN_RANGE + 1) + MIN_RANGE;
    }

    // Affichage des nombres générés
    for (i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
