#include <stdio.h>

int main(){
    int N, qtd, totalCobaias, totalSapos, totalCoelhos, totalRatos;
    char tipoCobaia;
    double pratos, psapos, pcoelhos;
    totalRatos = 0;
    totalCoelhos = 0;
    totalSapos = 0;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        printf("Quantidade de cobaias: ");
        scanf("%d", &qtd);
        printf("Tipo de cobaia: ");
        scanf(" %c", &tipoCobaia);

        if (tipoCobaia == 'R') {
            totalRatos = totalRatos + qtd;
        } else if (tipoCobaia == 'S') {
            totalSapos = totalSapos + qtd;
        } else {
            totalCoelhos = totalCoelhos + qtd;
        }
    }

    totalCobaias = totalRatos + totalSapos + totalCoelhos;

    pcoelhos = ((double) totalCoelhos / totalCobaias) * 100.0;
    pratos = ((double) totalRatos / totalCobaias) * 100.0;
    psapos = ((double) totalSapos / totalCobaias) * 100.0;

    printf("\nRELATORIO FINAL:\n");
    printf("Total: %d cobaias\n", totalCobaias);
    printf("Total de coelhos: %d\n", totalCoelhos);
    printf("Total de ratos: %d\n", totalRatos);
    printf("Total de sapos: %d\n", totalSapos);
    printf("Percentual de coelhos: %.2lf\n", pcoelhos);
    printf("Percentual de ratos: %.2lf\n", pratos);
    printf("Percentual de sapos: %.2lf\n", psapos);

    return 0;
}
