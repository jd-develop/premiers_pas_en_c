#include <stdio.h>
#include <math.h>

int main() {
    int a;
    int b;
    float hypothenuse;

    printf("Valeur de a : ");
    scanf("%d", &a);
    printf("Valeur de b : ");
    scanf("%d", &b);
    hypothenuse = sqrt(a*a + b*b);
    printf("L’hypothénuse vaut %f.\n", hypothenuse);
    return 0;
}
