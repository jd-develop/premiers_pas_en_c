#include <stdio.h>
#include <errno.h>

#define MAX_BUFFER_SIZE 50


int main() {
    FILE *fp;

    fp = fopen("loremipsum", "r+");
    if (fp == NULL) {
        printf("Errno %d\n", errno);
        return 1;
    }

    // CAT!!!
    char c;
    while ((c = fgetc(fp)) != EOF)
        printf("%c", c);
    // meow

    fclose(fp);

    fp = fopen("loremipsum", "r+");
    if (fp == NULL) {
        printf("Errno %d\n", errno);
        return 1;
    }

    char str[MAX_BUFFER_SIZE];
    while (fgets(str, MAX_BUFFER_SIZE, fp) != NULL)
        printf("%s", str);

    fclose(fp);

    return 0;
}
