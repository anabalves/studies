#include <stdio.h>

int main() {
    int N, soma;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    int mat[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMATRIZ DIGITADA:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    soma = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            soma = soma + mat[i][j];
        }
    }

    printf("\nSOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d\n", soma);

    return 0;
}
