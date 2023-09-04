#include <stdio.h>
#include <errno.h>
#include <time.h>

#define MAX_BUFFER_SIZE 50


int printFile(FILE *fp) {
    if (fp == NULL)
        return errno;

    char str[MAX_BUFFER_SIZE];
    while (fgets(str, MAX_BUFFER_SIZE, fp) != NULL)
        printf("%s", str);

    return 0;
}


int main() {
    FILE *fp = fopen("fichier_vide", "w+");

    fputc('b', fp);
    fputc('o', fp);
    fputc('n', fp);
    fputc('j', fp);
    fputc('o', fp);
    fputc('u', fp);
    fputc('r', fp);

    fclose(fp);

    fp = fopen("fichier_vide", "r+");
    if (printFile(fp)) {
        printf("Errno %d\n", errno);
        return 1;
    }
    printf("\n");
    fclose(fp);

    fp = fopen("fichier_vide", "a+");
    if (fputs(" le monde !\n", fp) == EOF) {
        printf("Errno %d\n", errno);
        return 1;
    }
    fclose(fp);

    fp = fopen("fichier_vide", "r+");
    if (printFile(fp)) {
        printf("Errno %d\n", errno);
        return 1;
    }
    fclose(fp);

    fp = fopen("fichier_vide", "a+");
    if (fprintf(fp, "L’heure UNIX est %lu\n", (long unsigned)time(NULL)) == EOF) {
        printf("Errno %d\n", errno);
        return 1;
    }
    fclose(fp);

    fp = fopen("fichier_vide", "r+");
    if (printFile(fp)) {
        printf("Errno %d\n", errno);
        return 1;
    }
    fclose(fp);

    return 0;
}
