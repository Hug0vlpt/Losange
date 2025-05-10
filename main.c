#include <stdio.h>

void afficher_dessin() {
    int lignes[15][3] = {
        {7, '*', 1},
        {7, '*', 1},
        {3, '*', 1}, {11, '*', 1},
        {4, '*', 1}, {10, '*', 1},
        {5, '*', 1}, {9, '*', 1},
        {0, '*', 15},
        {5, '*', 1}, {9, '*', 1},
        {4, '*', 1}, {10, '*', 1},
        {3, '*', 1}, {11, '*', 1},
        {7, '*', 1},
        {7, '*', 1}
    };

    for (int i = 0; i < 15; i++) {
        int esp = lignes[i][0];
        char c = (char)lignes[i][1];
        int count = lignes[i][2];

        for (int j = 0; j < esp; j++) {
            printf(" ");
        }
        for (int k = 0; k < count; k++) {
            printf("%c", c);
        }
        printf("\n");
    }
}

int main() {
    afficher_dessin();
    return 0;
}
