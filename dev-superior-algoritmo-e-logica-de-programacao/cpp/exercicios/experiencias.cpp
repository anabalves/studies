#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int N, qtd, totalCobaias, totalSapos, totalCoelhos, totalRatos;
    char tipoCobaia;
    double pratos, psapos, pcoelhos;
    totalRatos = 0;
    totalCoelhos = 0;
    totalSapos = 0;

    cout << "Quantos casos de teste serao digitados? ";
    cin >> N;

    for (int i = 0; i < N; i++) {
        cout << "Quantidade de cobaias: ";
        cin >> qtd;
        cout << "Tipo de cobaia: ";
        cin >> tipoCobaia;

        if ((tipoCobaia == 'R') || (tipoCobaia == 'r')) {
            totalRatos = totalRatos + qtd;
        } else if ((tipoCobaia == 'S') || (tipoCobaia == 's')) {
            totalSapos = totalSapos + qtd;
        } else {
            totalCoelhos = totalCoelhos + qtd;
        }
    }

    totalCobaias = totalRatos + totalSapos + totalCoelhos;

    pcoelhos = ((double) totalCoelhos / totalCobaias) * 100.0;
    pratos = ((double) totalRatos / totalCobaias) * 100.0;
    psapos = ((double) totalSapos / totalCobaias) * 100.0;

    cout << endl << "RELATORIO FINAL:" << endl;
    cout << "Total: " << totalCobaias << " cobaias" << endl;
    cout << "Total de coelhos: " << totalCoelhos << endl;
    cout << "Total de ratos: " << totalRatos << endl;
    cout << "Total de sapos: " << totalSapos << endl;

    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << pcoelhos << endl;
    cout << "Percentual de ratos: " << pratos << endl;
    cout << "Percentual de sapos: " << psapos << endl;

    return 0;
}
