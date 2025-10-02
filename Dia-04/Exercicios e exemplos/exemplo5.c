void main(){

int numeros[4] = {25, 50, 75, 100};
int *ponteiro = &numeros; //Ponteiro apontando para o array.

// Endereço de memória apontado pelo ponteiro (0x0061FF0C)
printf("%p\n", ponteiro);

// Valor armazenado no endereço de memória apontado (25)
// Perceba que 25 é o primeiro elemento do array numeros
printf("%d\n", *ponteiro);

// Faz o ponteiro apontar para a célula de memória seguinte,
// que neste caso é o segundo elemento do array
ponteiro += 1; 

// Endereço de memória do apontado pelo ponteiro (0x0061FF10)
printf("%p\n", ponteiro);
// Valor armazenado no endereço de memória apontado (50)
printf("%d\n", *ponteiro);
}