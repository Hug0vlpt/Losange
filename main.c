#include <stdio.h>

void afficher_figure() {
    int lignes[10][2] = {
        {0, 10},  // ligne pleine
        {0, 1},   // bord gauche
        {0, 1},
        {0, 1},
        {0, 1},
        {0, 1},
        {0, 1},
        {0, 1},
        {0, 1},
        {0, 10}   // ligne pleine
    };

    for (int i = 0; i < 10; i++) {
        int espaces = lignes[i][0];
        int caracteres = lignes[i][1];

        for (int j = 0; j < espaces; j++) {
            printf(" ");
        }

        if (caracteres == 1 && i != 0 && i != 9) {
            printf("*");
            for (int j = 0; j < 8; j++) printf(" ");
            printf("*");
        } else {
            for (int j = 0; j < caracteres; j++) {
                printf("*");
            }
        }

        printf("\n");
    }
}

int main() {
    afficher_figure();
    return 0;
}
