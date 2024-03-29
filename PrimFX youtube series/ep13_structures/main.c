#include <stdio.h>
#include <string.h>  // declaration of strcpy


// You can also do that:
// struct Livre {
//     char titre[100];
//     char auteur[100];
//     int annee;
// };
// 
// typedef struct Livre Livre;


typedef struct {
    char titre[100];
    char auteur[100];
    int annee;
} Livre;


void afficherLivre(Livre livre) {
    printf("%s\n", livre.titre);
    printf("Écrit par %s\n", livre.auteur);
    printf("Publié en %d\n", livre.annee);
}


int main() {
    Livre livre1;
    Livre livre2;

    livre1.annee = 1997;
    // livre1.titre = "Le petit cheval de manège";
    // livre1.auteur = "Juste Leblanc";
    strcpy(livre1.titre, "Le petit cheval de manège");
    strcpy(livre1.auteur, "Juste Leblanc");

    livre2.annee = 2022;
    strcpy(livre2.titre, "Terminus Malaussène");
    strcpy(livre2.auteur, "Daniel Pennac");

    afficherLivre(livre1);
    printf("\n");
    afficherLivre(livre2);
    printf("\n");

    /////////////////////////////////////////////////

    Livre bibliotheque[100];
    int nbLivres = 0;
    int i;

    bibliotheque[0].annee = 1943;
    strcpy(bibliotheque[0].titre, "Le petit prince");
    strcpy(bibliotheque[0].auteur, "Antoine de Saint-Exupéry");
    nbLivres++;

    bibliotheque[1].annee = 1997;
    strcpy(bibliotheque[1].titre, "Harry Potter");
    strcpy(bibliotheque[1].auteur, "JK Rowling");
    nbLivres++;

    printf("Il y a %d livres dans la bibliothèque :\n\n", nbLivres);
    for (i = 0; i < nbLivres; i++) {
        afficherLivre(bibliotheque[i]);
        if (i+1 != nbLivres)
            printf("\n");
    }

    return 0;
}
