#include <stdio.h>

int main() {
    int N, cont;

    printf("Qual a ordem da matriz?");
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

    printf("DIAGONAL PRINCIPAL:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", mat[i][i]);
    }

    cont = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (mat[i][j] < 0) {
                cont++;
            }
        }
    }

    if (cont == 0) {
        printf("\nNao ha negativos na matriz");
    } else {
        printf("\nQUANTIDADE DE NEGATIVOS = %d\n", cont);
    }

    return 0;
}
