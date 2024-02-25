/*
 * Consigne :
 * Essayez d'écrire un programme contenant car=''' et constatez l'erreur obtenue à la compilation.
 */

int main() {
    char c = ''';

    return 0;
}

/*
 * En effet, on constate l’erreur suivante :
 * exercice2.3.c: In function ‘main’:
 *     exercice2.3.c:7:14: error: empty character constant
 *         7 |     char c = ''';
 *           |              ^~
 *     exercice2.3.c:7:16: warning: missing terminating ' character
 *         7 |     char c = ''';
 *           |                ^
 *     exercice2.3.c:7:16: error: missing terminating ' character
 *         7 |     char c = ''';
 *           |                ^~
 *     exercice2.3.c:9:5: error: expected ‘,’ or ‘;’ before ‘return’
 *         9 |     return 0;
 *           |     ^~~~~~
 */
