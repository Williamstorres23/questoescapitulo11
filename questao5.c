#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    int *vetor;
    
    
    do {
        printf("Digite um valor inteiro não negativo para N: ");
        scanf("%d", &N);
        if (N < 0) {
            printf("Valor inválido. O valor de N deve ser não negativo.\n");
        }
    } while (N < 0);

    
    vetor = (int*)malloc(N * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    
    printf("Digite %d valores para o vetor, cada um maior ou igual a 2:\n", N);
    for (int i = 0; i < N; i++) {
        do {
            printf("Valor %d: ", i + 1);
            scanf("%d", &vetor[i]);
            if (vetor[i] < 2) {
                printf("Valor inválido. Cada valor deve ser maior ou igual a 2.\n");
            }
        } while (vetor[i] < 2);
    }

    
    printf("Valores do vetor:\n");
    for (int i = 0; i < N; i++) {
        printf("Valor %d: %d\n", i + 1, vetor[i]);
    }

    
    free(vetor);

    return 0;
}

