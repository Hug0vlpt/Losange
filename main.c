#include <stdio.h>

void afficher_cercle() {
    const int rayon = 10;
    const int diametre = rayon * 2;

    for (int y = 0; y <= diametre; y++) {
        for (int x = 0; x <= diametre; x++) {
            // Utilisation de l'équation d'un cercle : (x - r)^2 + (y - r)^2 ≈ r^2
            int dx = x - rayon;
            int dy = y - rayon;
            int distance_carre = dx * dx + dy * dy;

            // On dessine si on est proche de la surface du cercle
            if (distance_carre >= rayon * rayon - rayon && distance_carre <= rayon * rayon + rayon) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main() {
    afficher_cercle();
    return 0;
}
