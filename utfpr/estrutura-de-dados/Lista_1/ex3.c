#include <stdio.h>

int main ()
{

	int cont = 0;
	char string[100];

	printf("Digite o número binário abaixo: ");
	scanf ("%s", string);

	for (int i = 0; string[i] != '\0'; i++) {
        	if (string[i] == '1') {
            	cont++;
        	}
        }

        printf ("O número de uns neste binário é de: %d ", cont);

return 0;
}
