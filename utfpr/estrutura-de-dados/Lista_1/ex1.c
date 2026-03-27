#include <stdio.h>

int main ()
{
	int fat;
	int num;

	printf ("Digite um numero inteiro para calcular o fatorial:\n");
	scanf ("%d", &num);

	if (num > 0) {
		for (fat = 1; num > 0; num--) {
		fat*=num;
		}

		printf ("O fatorial do numero informado e: %d", fat);
	} else if (num == 0) {
        printf("O fatorial do numero informado e: 1");
    } else
        printf("Digite um numero inteiro positivo");

return 0;
}