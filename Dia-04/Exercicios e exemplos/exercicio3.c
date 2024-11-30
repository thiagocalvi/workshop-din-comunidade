#include <stdio.h>
void selecao(int vetor[], int tamanho){
    int i, j, menor, aux;
    for (i = 0; i < (tamanho - 1); i++){
        menor = i;
        for(j = i + 1; j  < tamanho; j++){
            if (vetor[j] < vetor[menor])
                menor = j;
        }
        if (vetor[i] != vetor[menor]){
            aux = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = aux;
        }
    }
    for (int i = 0; i < tamanho; i++)
        printf("\n %d", vetor[i]);
    
} 

void selecao_ref(int *vetor, int tamanho){
    int i, j, menor, aux;
    for (i = 0; i < (tamanho - 1); i++){
        menor = i;
        for(j = i + 1; j  < tamanho; j++){
            if (*(vetor + j) < *(vetor + menor))
                menor = j;
        }
        if (*(vetor + i) != *(vetor + menor)){
            aux = *(vetor + i);
            *(vetor + i) = *(vetor + menor);
            *(vetor + menor) = aux;
        }
    }
    
}

void insercao(int vetor[], int tamanho){
    int i = 0;
    int j = 1;
    int aux = 0;

    while (j< tamanho){
        aux =  vetor[j];
        i = j -1;
    
        while ((i >= 0) && (vetor[i] > aux)) {
            vetor[i + 1] = vetor[i];
            i = i - 1;
        }
        vetor[i + 1] = aux;
        j = j + 1;
    }

    for (int i = 0; i < tamanho; i++)
        printf("\n %d", vetor[i]);

}

void insercao_ref(int *vetor, int tamanho){
    int i = 0;
    int j = 1;
    int aux = 0;

    while (j< tamanho){
        aux =  *(vetor + j);
        i = j -1;
    
    while ((i >= 0) && (*(vetor + i) > aux)) {
        *(vetor + i + 1) = *(vetor + i);
        i = i - 1;
    }
    *(vetor + i + 1) = aux;
    j = j + 1;
    }

    
}

void main(){
    
    //ordenacao(vetor);
    
    int vetor[] = {3,2,5,87,1,2,12,7,2,12,53,2,2,5,6,3,21,5,62,86,3,12};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    
    insercao(vetor, tamanho);
    
    for (int i = 0; i < tamanho; i++)
        printf("\n %d", vetor[i]);
    
    
    
}