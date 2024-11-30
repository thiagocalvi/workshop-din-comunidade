int conta_dig(long N, int K)
{
   if ( N == 0 ) return 0;
   return conta_dig( N / 10 , K) + ( N % 10 == K );
}

int conta_dig2(long N, int K){
    int contador;
    if (N > 0){
        contador = 0;
        if (N % 10 == K){
            contador = 1;
        }
        return conta_dig2(N / 10, K) + contador;
    }
    else {
        return 0;
    }

}

void main(){
    int a,n;
    long m;
    printf("\n Digite um numero grande: ");
    scanf("%d",&m);
    printf("\n Digite um numero de 0 a 9: ");
    scanf("%d", &n);
    a = conta_dig(m,n);
    printf("Ha %d numeros iguais a %d em %d ",a,n,m);
}