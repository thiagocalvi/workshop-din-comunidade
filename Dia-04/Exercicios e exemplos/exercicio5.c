#include <stdio.h>
#include <stdbool.h>
void merge(int a[], int b[], int tam1, int tam2){


int vetor[tam1 + tam2];
int j;
bool verificador;
vetor[0] = a[0];
int contador = 1;
for (int i = 1; i < tam1; i++){
    verificador = false;
    j = contador - 1;
    while (j >= 0 && verificador == false){
        if (vetor[j] == a[i]){
            verificador = true;
        }
        j -= 1;
    }
    if (verificador == false){
        vetor[contador] = a[i];
        contador += 1;
    }
}

for (int i = 1; i < tam2; i++){
    verificador = false;
    j = contador - 1;
    while (j >= 0 && verificador == false){
        if (vetor[j] == b[i]){
            verificador = true;
        }
        j -= 1;
    }
    if (verificador == false){
        vetor[contador] = b[i];
        contador += 1;
    }
}
for (int i = 0; i < contador; i++){
    printf(" %d", vetor[i]);
}
}

int main(){
    // Com vetores prontos
    int a[] = {4, 2, 3, 3, 1, 10};
    int b[] = {3, 5, 2, 1, 4, 9, 8, 8};
    int tam1 = sizeof(a)/ sizeof(a[0]);
    int tam2 = sizeof(b) / sizeof(b[0]);

    

    // Criando-se vetores
    int x, y;

    printf("\n Digite o tamanho do vetor 1: ");
    scanf("%d", &x);
    int c[x];
    for (int i = 0; i < x; i++){
        printf("\n Digite um numero para o vetor: ");
        scanf("%d", &c[i]);      
    }
    
    printf("\n Digite o tamanho do vetor 2: ");
    scanf("%d", &y);
    int d[y];
    for (int j = 0; j < y; j++){
        printf("\n Digite um numero para o vetor: ");
        scanf("%d", &d[j]);
    }

    
    merge(c, d, x, y);
    return 0;

}