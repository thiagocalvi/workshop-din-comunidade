#include <stdio.h>

void main(){

    int limite;
    int auxiliar, a = 0;
    int b = 1;

    printf("Informe o valor limite para mostrar a sequencia de Fibonacci: ");
    scanf("%d", &limite);
    printf("%d, ", a);



    for (; b < limite;){
        auxiliar = a + b;
        a = b;
        b = auxiliar;
        printf("%d, ", a);
    }

    printf("FIM");

    

}