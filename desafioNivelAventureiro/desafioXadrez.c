#include <stdio.h>

int main() {
    printf("--TORRE--\n");
    // Uso do for para a movimentação da Torre
    for (int i = 0; i < 5; i++)
    {
        printf(" Direita\n");
    }
    
    printf("\n --BISPO-- \n");
    // Uso do while para a movimentação do Bispo
    int i = 1;
    while (i <= 5)
    {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n--RAINHA--\n");
    // Uso do do-while para a movimentação da Rainha
    int j = 1;
    do
    {
        printf(" Esquerda\n");
        j++;
    } while (j <= 8);

    printf("\n --CAVALO--\n");

    int movimentoCompleto = 1;
    // Uso de loops aninhados (while e for) para a movimentação do Cavalo
    while (movimentoCompleto--)
    {
        for (int i = 0; i < 2; i++)
        {
            printf(" Cima\n");
        }
        printf(" Direita\n");
    }
    return 0;
}