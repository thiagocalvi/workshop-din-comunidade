#include <stdio.h>

void main() {
    int numero;
    printf("Informe um número inteiro de 4 digitos: \n");
    scanf("%d", &numero);

    int primeiro_digito = numero / 1000;
    int segundo_digito = (numero / 100) % 10;
    int terceiro_digito = (numero / 10) % 10;
    int quarto_digito = numero % 10;

    if ((primeiro_digito == quarto_digito) && (segundo_digito == terceiro_digito)){
        printf("O número %d é um palíndrome\n", numero);
    }else {
        printf("O número %d não é um palíndrome\n", numero);

    }

}