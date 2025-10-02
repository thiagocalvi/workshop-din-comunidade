#include <string.h>
#include <stdio.h>
#include <ctype.h>

int contar_vogais(char x[]) {
    int contagem = 0;
    char* str = x;
    while (*str) {
        char c = tolower(*str);  // Converte o caractere para minúsculo
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contagem++;
        }
        str++;
    }
    return contagem;
}

void main(){
    char x[] = {"abedeio"};
    
    char* y = x;
    int z = contar_vogais(x);
    printf("\n%d", z);
}