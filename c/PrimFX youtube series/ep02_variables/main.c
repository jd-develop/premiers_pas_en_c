#include <stdio.h>

int main() {
    int num = 42;
    float nombreDecimal = 3.14;
    char caractere = 'a';
    unsigned char char2 = 98;

    printf("%d\n", num);
    printf("%f\n", nombreDecimal);
    printf("%c\n", caractere);
    printf("%c\n", char2);
    printf("Le caractère %c a pour valeur %d\n", caractere, caractere);
    
    return 0;
}
