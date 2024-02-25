#include <stdio.h>

int main() {
    printf("%d\n", 2 == 2);  // 1
    printf("%d\n", 2 == 3);  // 0
    printf("%d\n", 2 != 3);  // 1
    printf("%d\n", 2 != 2);  // 0
    printf("%d\n", 2 <= 1);  // 0
    printf("%d\n", 2 >= 2);  // 1
    printf("%d\n", 2 < 3);  //  1
    printf("%d\n", 2 > 2);  //  0
    printf("%d\n", 2 >= 2 == 2);  // 0, because this is parsed as (2 >= 2) == 2, which is 1 == 2, which is 0
    printf("%d\n", 2 >= 2 && 2 == 2);  // this is what you need to do to check if 2 >= 2 == 2

    printf("%d\n", 1==2 && 3==3);  // 0
    printf("%d\n", 1==1 && 3==3);  // 1

    printf("%d\n", 1==1 || 1==0);  // 1
    printf("%d\n", 1==0 || 1==1);  // 1
    printf("%d\n", 0==1 || 1==0);  // 0

    printf("%d\n", !(0==0));  // 0
    printf("%d\n", !(0==1));  // 1

    float a = 0.2 * 0.3;

    printf("%f\n", a);
    printf("%.15f\n", a);
    printf("%d\n", a==0.06);  // 0 due to approximation

    return 0;
}
