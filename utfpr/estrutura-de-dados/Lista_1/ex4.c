#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    printf("String sem vogais: ");
    for (int i = 0; string[i] != '\0'; i++) {
        char c = tolower(string[i]); // Converter para minúsculo para considerar vogais maiúsculas
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            printf("%c", string[i]);
        }
    }

    return 0;
}

