#include <stdio.h>

// typedef type nouveau_type;
typedef int entier;
typedef enum {False, True} bool;  // False sera 0 et True sera 1

int main() {
    int a = 10;
    entier b = 11;

    printf("a vaut %d et b vaut %d\n", a, b);

    bool c = a != b;

    if (c)
        printf("c est vrai\n");

    bool d = False;

    if (!d)
        printf("d est faux\n");

    if (True)
        printf("True est vrai\n");

    return 0;
}
