#include <stdio.h>
#include <string.h>

int main () {
    char s[30];
    int i, j;
    int palindromo = 0;

    printf("VERIFICADOR DE PALINDROMOS\n");
    printf ("Digite a palavra abaixo:\n");
    scanf ("%s", s);

    i = 0;
    j = strlen(s) - 1;

    for (i < j; i++; j--){
        if (s[i] != s[j]){
            palindromo = 1;
        }

    if(palindromo == 0) {
        printf ("A palavra %s e um palindromo!\n", s);
    } else
        printf ("A palavra %s nao e um palindromo!\n", s);
    }
}
