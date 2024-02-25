#include <stdio.h>

int main() {
    int a = 10;
    int condition;

    int b;
    for (b = 0; b != 20; b++) {
        condition = a == b;
        printf("a = %d\n", a);
        printf("b = %d\n", b);

        // multiline if statements
        if (condition) {
            printf("a est égal à b.\n");
        } else if (a == b+1 || a+1 == b) {
            printf("a et b sont différents, mais sont éloignés de 1\n");
        } else {
            printf("a est différent de b.\n");
        }

        // single line if statements
        if (b == 15)
            printf("b égale 15 !!\n");
        else if (b == 18)
            printf("b égale 18 !!\n");
        
        if (b == 5) printf("b égale 5 !!\n");
        else if (b == 2) printf("b égale 2 !!\n");

        printf("\n");
    }

    int c;
    printf("Entrez la valeur de c: ");
    // this value is pretty interesting : 4294967338 ^^'
    scanf("%d", &c);
    printf("c = %d\n", c);
    switch (c) {
        case 42:
            printf("La réponse universelle à la vie, l'univers et le reste\n");
            break;

        case 52:
            printf("C'est 52\n");
            break;
        
        default:
            printf("Meh, c'est pas une valeur de ouf...\n");
    }

    return 0;
}
