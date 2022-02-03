#include <stdio.h>

int main(){
    int N, cont;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    int ver[N];

    for (int i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%d", &ver[i]);
    }

    cont = 0;
    printf("\nNUMEROS PARES:\n");
    for (int i = 0; i < N; i++) {
        if (ver[i] % 2 == 0) {
            printf("%d  ", ver[i]);
            cont++;
        }
    }

    printf("\n\nQUANTIDADE DE PARES = %d\n", cont);

    return 0;
}
