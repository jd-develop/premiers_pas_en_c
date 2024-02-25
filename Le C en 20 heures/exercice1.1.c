/*
 * Consigne :
 * 
 * Écrivez un programme qui :
 * - affiche « Salut toi, appuie sur une touche s'il te plaît » ;
 * - attend l'appui d'une touche ;
 * - affiche : « Merci d'avoir appuyé sur une touche ».
 */
#include <stdio.h>

int main() {
    puts("Salut toi, appuie sur une touche s’il te plaît");
    getchar();
    puts("Merci d’avoir appuyé sur une touche");
    return 0;
}
