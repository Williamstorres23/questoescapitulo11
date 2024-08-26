#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;       
    char nome[100];     
    float notas[3];     
} Aluno;

int main() {
    
    size_t tamanho = sizeof(Aluno);

    
    printf("Tamanho da estrutura 'Aluno': %zu bytes\n", tamanho);

    return 0;
}