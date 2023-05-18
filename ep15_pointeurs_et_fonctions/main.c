#include <stdio.h>


int addition(int *x, int *y) {
    return *x+*y;
}


void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}


int main() {
    int a;
    int b;
    
    printf("Number a = ");
    scanf("%d", &a);

    printf("Number b = ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, addition(&a, &b));

    printf("a=%d and b=%d\n", a, b);
    swap(&a, &b);
    printf("a=%d and b=%d\n", a, b);

    return 0;
}
