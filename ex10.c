#include <stdio.h>

int main() {
    // CRIA VARIAVEIS PARA O TAMANHO DAS MATRIZES
    int M, N, P;
    // PEDE PARA O USUARIO OS TAMANHO DAS MATRIZES
    printf("Informe o total de linhas de A: ");
    scanf(" %d", &M);
    printf("Informe o total de colunas de A: ");
    scanf(" %d", &P);
    printf("Informe o total de colunas de B: ");
    scanf(" %d", &N);

    // CRIA E DEFINE TAMANHO DAS MATRIZES
    double A[M][P], B[P][N], C[M][N];

    // PEDE AO USUARIO OS VALORES DA MATRIZ A
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            scanf(" %lf", &A[i][j]);
        }
    }

    // PEDE AO USUARIO OS VALORES DA MATRIZ B
    for (int i = 0; i < P; i++) {
        for (int j = 0; j < N; j++) {
            scanf(" %lf", &B[i][j]);
        }
    }

    // CALCULA O PRODUTO DE A*B E COLOCA EM C
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < P; j++) {
            // INICIALIZA MATRIZ C(PRODUTO DE A*B) ZERADA
            C[i][j] = 0;
            for (int k = 0; k < P; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // IMPRIME NA TELA A MATRIZ C
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("[%.2lf]",C[i][j]);
        }
        printf("\n");
    }


    return 0;
}