#include <stdio.h>

int main() {
    int i = 0;

    while (i < 10) {
        printf("i vaut %d\n", i);
        i++;
    }

    printf("Boucle while terminée avec i = %d !\n", i);

    do {
        printf("i vaut %d\n", i);
        i++;
    } while (i < 10);

    printf("Boucle do while n°1 terminée avec i = %d !\n", i);

    do {
        printf("i vaut %d\n", i);
        i++;
    } while (i < 20);

    printf("Boucle do while n°2 terminée avec i = %d !\n", i);

    for (i = 0; i<10; i++) {
        printf("i vaut %d\n", i);
    }

    printf("Boucle for n°1 terminée avec i = %d !\n", i);

    i = 0;
    for (; i<10; i += 2) {
        printf("i vaut %d\n", i);
    }

    printf("Boucle for n°2 terminée avec i = %d !\n", i);

    return 0;
}
