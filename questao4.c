#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;
    int *vetor;


    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);


    if (tamanho <= 0) {
        printf("Tamanho inválido. O tamanho deve ser um inteiro positivo.\n");
        return 1;
    }

   
    vetor = (int*)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    
    printf("Digite %d valores para o vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    
    printf("Valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: %d\n", i + 1, vetor[i]);
    }

   
    free(vetor);

    return 0;
}
