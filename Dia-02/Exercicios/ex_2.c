#include <stdio.h>


void main() {
    float fahrenheit;

   
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);


    float celsius = (fahrenheit - 32) * (5.0/9.0);
    printf("%.2f°F é igual a %.2f°C\n", fahrenheit, celsius);

}