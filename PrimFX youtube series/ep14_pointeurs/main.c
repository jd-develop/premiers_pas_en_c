#include <stdio.h>

int main() {
    int a = 10;
    int *pa = &a;
    int **ppa = &pa;
    int ***pppa = &ppa;
    int ****ppppa = &pppa;

    printf("a vaut %d, et son addresse est %p\n", a, pa);
    printf("L’adresse du pointeur vers a est %p\n", ppa);

    printf("À l’adresse %p est stockée la valeur %d\n", pa, *pa);
    printf("À l’adresse %p est stocké le pointeur vers l’adresse %p, dans laquelle est stockée la valeur %d\n", ppa, *ppa, **ppa);

    printf("%d\n", *****&ppppa);

    *pa = 30;
    printf("À l’adresse %p est stockée la valeur %d\n", pa, *pa);

    return 0;
}
