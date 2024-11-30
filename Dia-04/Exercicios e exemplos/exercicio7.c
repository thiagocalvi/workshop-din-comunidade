
#include <stdio.h>
// Por valor
int multiplicaImpar ( int vet[], int tam )
{

    int multi = 1;

    if ( tam < 0 )
        return 1;

    if ( vet[tam - 1] % 2 == 1 )
        multi = vet[tam - 1];

    return multi * multiplicaImpar(vet, tam - 1);
}


// Por referencia
int multiplicaImpar2 ( int* vet, int tam)
{
    
    

    int total = 1;

    if ( tam <= 0 )
        return 1;

    else {
        if ( *vet % 2 == 1 ){
            total = *vet;
        }
    return total * multiplicaImpar2(vet + 1, tam - 1);
    }
    

   
}

// Por valor e vetor é referenciado por ponteiro.
int multiplicaImpar3 ( int vet[], int tam )
{
    int* ptrVet = (int*)(vet);
    int multi = 1;

    if ( tam <= 0 )
        return 1;

    if ( *ptrVet % 2 == 1 )
        multi = *ptrVet;

    return multi * multiplicaImpar3((int*)(ptrVet + 1), tam - 1);
}
void multiplicaImpar4(int *vetor, int tamanho, int *soma) {

    if (tamanho == 0) {
        *soma = 1;  // Caso base: vetor vazio, soma é 0
    } else {
        int temp;
        multiplicaImpar4(vetor, tamanho - 1, &temp);
        if (vetor[tamanho - 1] % 2 == 1)  // Chamada recursiva para somar até o penúltimo elemento
            *soma = vetor[tamanho - 1] * temp;
        else
            *soma = 1 * temp;       // Adiciona o último elemento à soma parcial
    }
}

int main ()
{
    int vetor[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tam = sizeof(vetor) / sizeof(vetor[0]);
    int a;
    multiplicaImpar4(vetor, tam, &a);
    
    
    printf("A multiplicacao dos numeros impares eh: %d\n",a);

    

    return 0;
}

/*
void main(){
    //int z[] = {0,0,0,0,0,0,0,0,0,0,0,0};
    int x[5] = {1, 2, 5, 14, 10};
    int y[6] = {2, 8, 11, 15, 11, 24};
    int z[11];
    merge(x,5,y,6,11);
    for (int i = 0; i < 11; i++)
        printf("\n%d",z[i]);
}
*/