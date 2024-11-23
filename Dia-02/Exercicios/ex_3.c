#include <stdio.h>

int dias_restantes(int dias_decorridos);

void main() {
    int n_dias_rest;
    int n_dias_dec;

    printf("Informe o número de dias decorridos: \n");
    scanf("%d", &n_dias_dec); 

    n_dias_rest = dias_restantes(n_dias_dec);

    printf("Faltam %d dias para o fim do ano!\n", n_dias_rest);
}

int dias_restantes(int dias_decorridos){
    return 365 - dias_decorridos;
}