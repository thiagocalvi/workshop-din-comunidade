#include <stdio.h>

// Função que multiplica um número por dois
void multiplicadordois(int valor){
    valor = valor * 2;
    printf("\nResultado dentro da funcao multiplicadordois(): %d", valor); 
    printf("\nEndereco de memoria dentro da funcao: %p", &valor); 
}
void main()
{
    int a = 10; // variavel
    multiplicadordois(a); // função recebe a variavel 'a' como parâmetro
    // Resultado dentro da funcao multiplicadordois(): 20
    // Endereço de memoria dentro da funcao: 0x0061FE00


    printf("\nValor fora da funcao multiplicadordois(): %d",a); // a = 10
    printf("\nEndereco de memoria fora da função: %p", &a); // a = 0x0061FF1C
    
}

/* Perceba que a variável 'valor' em 'multiplicadordois(valor)' e em 'main()' 
    tem endereços de memórias diferentes logo o computador tratas como duas variáveis diferentes
    tanto que possuem valores diferentes*/

/*
int multiplicar_dois(int valor){
    valor = valor*2;
    printf("\nValor dentro da função: %d", valor);
    printf("\nEndereço dentro da função: %X", &valor);
    return valor;
}
*/