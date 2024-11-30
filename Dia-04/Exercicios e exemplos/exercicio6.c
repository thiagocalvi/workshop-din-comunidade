#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#define TAMANHO_MAX 100
/*
// Função para contar vogais em uma string
int contar_vogais(const char *str) {
    int contagem = 0;
    while (*str) {
        char c = tolower(*str);  // Converte o caractere para minúsculo
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contagem++;
        }
        str++;
    }
    return contagem;
}
*/
// Função para inverter a string
void inverter_string(char *str, int tamanho) {
    
    char *inicio = str;
    char *fim = str + tamanho - 1;

    while (inicio < fim) {
        char auxiliar = *inicio;
        *inicio = *fim;
        *fim = auxiliar;

        inicio++;
        fim--;
    }
}
void palindromo(char *texto, char *texto_invertido, int tam){
    int i = 0;
    bool j = false;
    while (i < tam && j == false){
        printf("\n%c",*(texto + i));
        printf(" %c", *(texto_invertido + i ));
        if (*(texto + i) != *(texto_invertido + i )){
            
            j = true;
        }
        i ++;
    }
    if (j == true){
        printf("\n O texto nao e um palindromo");
    }
    else {
        printf("\n O texto e um palindromo");
    }
}


int main() {
    
    
    
    // Para poder escrever uma string pelo terminal
    /*
    // Solicita ao usuário que insira a string
    printf("Digite uma string: ");
    fgets(string, TAMANHO_MAX, stdin);

    // Remove o caractere de nova linha ('\n') se presente
    string[strcspn(string, "\n")] = '\0';
    */
    char string1[] = {"cabac"};
    int tam = sizeof(string1) / sizeof(string1[0]) - 1;
    char string2[tam];
    for (int i = 0; i < tam; i++){
        string2[i] = string1[i];
    }
     
    printf("\n%d", tam);
    // Solicita ao usuário que insira a string
    

    // Inverte a string
    inverter_string(string1, tam);

    // Exibe os resultados
    printf("\nString invertida: %s\n", string1);
    palindromo(string2,string1,tam);

    return 0;
    
    
}
