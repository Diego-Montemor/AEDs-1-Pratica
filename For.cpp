#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

int main(int argc, char** argv) {

    const int quant = 20;
    int i, tabela[quant], troca = 1, opcao;

   // srand(time(NULL));
    cout << "A tabela gerada foi: ";
    for (i = 0; i <= quant; i++) {
        tabela[i] = rand() % (20 - 1 + 1);
        cout << tabela[i] << " ";
    }
    cout << endl;

    cout << "como você deseja organizar essa tabela?\n(1).crescente  (2).decrescente  (3).assim mesmo\nR: ";
    cin >> opcao;


    while (troca != 0) {
        int p, p1, p2;
        troca = 0;
        for (p = 0; p < quant; p++) {
                p1 = tabela[p];
                p2 = tabela[p + 1];
            switch (opcao) {
                case 1:
                    if (p1 > p2) {
                        tabela[p] = p2;
                        tabela[p + 1] = p1;
                        troca++;
                    }
                break;
                case 2:
                    if (p1 < p2) {
                        tabela[p] = p2;
                        tabela[p + 1] = p1;
                        troca++;
                    }
                break;
                default:
                break;
            }
        }
    }
    cout << "A tabela ficou assim: ";
    for (i = 0; i <= quant; i++) {
        cout << tabela[i] << " ";
    }
return 0;
}

