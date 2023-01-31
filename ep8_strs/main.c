#include <stdio.h>

int main() {
    char chaine[6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    printf("%c\n", chaine[0]);
    printf("%s\n", chaine);

    chaine[3] = '\0';  // haha so funny
    printf("%s\n", chaine);

    char chaine2[6] = "world";

    printf("%s\n", chaine2);

    return 0;
}
