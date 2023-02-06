#include <stdio.h>

int main() {
    char prenom[50];
    int age;

    printf("Votre prénom : ");
    scanf("%s", prenom);

    printf("Votre âge : ");
    scanf("%d", &age);

    if (age < 0)
        printf("Erreur : vous ne pouvez pas avoir un âge négatif...\n");
    else if (age < 2)
        printf("Vous vous appelez %s et vous avez %d an.\n", prenom, age);
    else
        printf("Vous vous appelez %s et vous avez %d ans.\n", prenom, age);
    
    if (age >= 18)
        printf("Vous êtes majeur.\n");
    else
        printf("Vous êtes mineur.\n");

    return 0;
}
