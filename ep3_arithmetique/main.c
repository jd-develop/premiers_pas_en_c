#include <stdio.h>

int main() {
    int a;
    a = 5;
    printf("%d\n", a);
    a += 2;
    printf("%d\n", a);

    int dividende = 31;
    int diviseur = 3;
    int quotient;
    int reste;

    quotient = dividende / diviseur;
    reste = dividende % diviseur;

    printf("%d/%d = %d*%d + %d\n", dividende, diviseur, dividende, quotient, reste);

    return 0;
}