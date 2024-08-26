#include <stdio.h>
#include <stdlib.h>

int main() {
    
    size_t size_char = sizeof(char);
    size_t size_int = sizeof(int);
    size_t size_float = sizeof(float);
    size_t size_double = sizeof(double);

    
    printf("Tamanho de um 'char': %zu bytes\n", size_char);
    printf("Tamanho de um 'int': %zu bytes\n", size_int);
    printf("Tamanho de um 'float': %zu bytes\n", size_float);
    printf("Tamanho de um 'double': %zu bytes\n", size_double);

    return 0;
}