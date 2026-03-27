#include <stdio.h>
#include <string.h>

int main() {
    char string[100];

    printf("Digite uma cadeia de caracteres em letras maiusculas: ");
    fgets(string, sizeof(string), stdin);

    printf("Cadeia de caracteres convertida para minusculas: ");
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'A' && string[i] <= 'Z') {
            string[i] += 32; // Adiciona 32 para converter para minúscula
        }
        printf("%c", string[i]);
    }

    return 0;
}

