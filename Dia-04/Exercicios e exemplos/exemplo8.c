#include <stdio.h>
#include <locale.h>

// Função que multiplica um número por 2.
void multiplicadordois(int *valor){
    *valor = *valor * 2;
    printf("\n Resultado da variavel dentro da funcao multiplicadordois(): %d", *valor);
    printf("\nEndereco de memoria dentro da funcao: %p", valor);
}


void main(){
    int a = 10;

    multiplicadordois(&a); // função recebe o endereço de memória de 'a' como parâmetro.
    // Resultado da variavel dentro da funcao multiplicadordois(): 20
    // Endereco de memoria dentro da funcao: 0x0061FF1C

    printf("\n Resultado da variavel fora da funcao multiplicadordois(): %d", a); //20
    printf("\nEndereco de memoria fora da funcao: %p ", &a); //0x0061FF1C
}
