#include <stdio.h>

void soma_vetor(int *vetor, int tamanho, int *soma) {
    if (tamanho == 0) {
        *soma = 1;  // Caso base: vetor vazio, soma é 0
    } else {
        int temp;
        soma_vetor(vetor, tamanho - 1, &temp);  // Chamada recursiva para somar até o penúltimo elemento
        *soma = vetor[tamanho - 1] * temp;       // Adiciona o último elemento à soma parcial
    }
}


int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int soma;

    soma_vetor(vetor, tamanho, &soma);

    printf("A soma dos elementos do vetor é %d\n", soma);

    return 0;
}
