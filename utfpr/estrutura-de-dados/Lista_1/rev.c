#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int num;
    int input;
    int count = 0;

    srand(time(NULL));
    num = rand() % 100 + 1;

    do
    {
        printf("Tente adivinhar o numero sorteado entre 1 e 100:\n");
        scanf("%d", &input);

        if (input < 1 || input > 100)
        {
            printf("Entrada invalida. Por favor, insira um numero entre 1 e 100.\n");
        }
        else if (input < num)
        {
            count++;
            printf("O numero sorteado e maior que %d.\n", input);
        }
        else if (input > num)
        {
            printf("O numero sorteado e menor que %d.\n", input);
        }
        else
        {
            printf("Parabens! Voce acertou o numero sorteado em %d tentativas.\n", count);
            break;
        }
    } while (input != num);

    printf("O numero sorteado foi: %d\n", num);

return 0;
}
