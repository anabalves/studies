#include <stdio.h>

int main() {
    int N, abaixo, entre, acima;
    double totalCompra, totalVenda, totalLucro, lucro, percentualLucro;

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &N);

    char nomes[N][50];
    double precosCompra[N], precosVenda[N];

    for (int i = 0; i < N; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Nome: ");
        scanf("%s", &nomes[i][0]);
        printf("Preco de compra: ");
        scanf("%lf", &precosCompra[i]);
        printf("Preco de venda: ");
        scanf("%lf", &precosVenda[i]);
    }

    abaixo = 0;
    entre = 0;
    acima = 0;
    for (int i = 0; i < N; i++) {
        lucro = precosVenda[i] - precosCompra[i];
        percentualLucro = lucro * 100.0 / precosCompra[i];

        if (percentualLucro < 10.0) {
            abaixo++;
        } else if (percentualLucro < 20.0) {
            entre++;
        } else {
            acima++;
        }
    }

    totalCompra = 0;
    totalVenda = 0;
    for (int i = 0; i < N; i++) {
        totalCompra = totalCompra + precosCompra[i];
        totalVenda = totalVenda + precosVenda[i];
    }

    totalLucro = totalVenda - totalCompra;

    printf("\nRELATORIO:\n");
    printf("Lucro abaixo de 10%%: %d\n", abaixo);
    printf("Lucro entre 10%% e 20%%: %d\n", entre);
    printf("Lucro acima de 20%%: %d\n", acima);
    printf("Valor total de compra: %.2lf\n", totalCompra);
    printf("Valor total de venda: %.2lf\n", totalVenda);
    printf("Lucro total: %.2lf\n", totalLucro);

    return 0;
}
