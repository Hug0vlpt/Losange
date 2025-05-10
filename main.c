// main.c

#include <stdio.h>

void afficher_dessin() {
    int lignes[9][3] = {
        {4, '*', 1},
        {3, '*', 3},
        {2, '*', 5},
        {1, '*', 7},
        {0, '*', 9},
        {1, '*', 7},
        {2, '*', 5},
        {3, '*', 3},
        {4, '*', 1}
    };

    for (int i = 0; i < 9; i++) {
        int espaces = lignes[i][0];
        char caractere = (char)lignes[i][1];
        int nb_caracteres = lignes[i][2];

        for (int j = 0; j < espaces; j++) {
            printf(" ");
        }
        for (int k = 0; k < nb_caracteres; k++) {
            printf("%c", caractere);
        }
        printf("\n");
    }
}

int main() {
    afficher_dessin();
    return 0;
}
