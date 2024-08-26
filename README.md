# Alocação Dinâmica em C

Este projeto demonstra o uso da alocação dinâmica em C. A alocação dinâmica permite que o programa aloque memória em tempo de execução, o que é útil quando o tamanho dos dados não é conhecido em tempo de compilação.

## O que é Alocação Dinâmica?

A alocação dinâmica é uma técnica que permite que um programa solicite e libere memória durante a execução. Em C, isso é feito usando funções da biblioteca padrão `stdlib.h`, como `malloc`, `calloc`, `realloc` e `free`.

- **`malloc(size_t size)`**: Aloca um bloco de memória de `size` bytes e retorna um ponteiro para o início do bloco. O conteúdo da memória alocada não é inicializado.
- **`calloc(size_t num, size_t size)`**: Aloca memória para um array de `num` elementos, cada um com `size` bytes, e inicializa toda a memória alocada com zero.
- **`realloc(void *ptr, size_t size)`**: Altera o tamanho do bloco de memória apontado por `ptr` para `size` bytes. Pode mover o bloco para um novo local se necessário.
- **`free(void *ptr)`**: Libera um bloco de memória que foi previamente alocado com `malloc`, `calloc` ou `realloc`.

## Exemplo de Código

O exemplo a seguir demonstra como usar a alocação dinâmica para criar um vetor de inteiros, ler valores do usuário e exibir esses valores.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;
    int *vetor;

    // Solicita o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Valida o tamanho do vetor
    if (tamanho <= 0) {
        printf("Tamanho inválido. O tamanho deve ser um inteiro positivo.\n");
        return 1;
    }

    // Aloca dinamicamente o vetor de inteiros
    vetor = (int*)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Lê os valores do vetor
    printf("Digite %d valores para o vetor:\n", tamanho);
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Exibe os valores do vetor
    printf("Valores do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Valor %d: %d\n", i + 1, vetor[i]);
    }

    // Libera a memória alocada
    free(vetor);

    return 0;
}
```

## Instruções de Compilação e Execução

1. **Salve o código em um arquivo**, por exemplo, `alocacao_dinamica.c`.

2. **Compile o código** usando um compilador C, como `gcc`:

   ```bash
   gcc -o alocacao_dinamica alocacao_dinamica.c
   ```

3. **Execute o programa**:

   ```bash
   ./alocacao_dinamica
   ```

## Explicação do Código

1. **Leitura do Tamanho do Vetor**:
   O programa solicita ao usuário o tamanho do vetor e valida se o valor é positivo.

2. **Alocação Dinâmica**:
   O vetor é alocado dinamicamente usando `malloc`. Se a alocação falhar, o programa exibe uma mensagem de erro e termina.

3. **Leitura e Impressão dos Valores**:
   O programa lê valores para o vetor do usuário e imprime os valores armazenados.

4. **Liberação da Memória**:
   A memória alocada é liberada usando `free` para evitar vazamentos de memória.

## Contribuições

Se você deseja contribuir para este projeto, faça um fork do repositório, crie uma branch para sua modificação, e envie um pull request com suas alterações.

