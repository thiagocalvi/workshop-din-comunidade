
void main(){

int minhaIdade = 19;
int idadeVizinho = 35;
int * A = & minhaIdade ; // O ponteiro aponta para minhaIdade

// Resultado do endereco de memoria de minhaIdade atraves do ponteiro A(0 x7ffe5367e044 )
printf ( " % p \n " , A ) ;

// Valor da variavel minhaIdade atraves do ponteiro A (19)
printf ( " % d \n " , * A ) ;

// Valor de minhaIdade alterado
minhaIdade = 30;

// Resultado do endereco de memoria de minhaIdade atraves do ponteiro A (0x7ffe5367e044 )
printf ( " % p \n " , A ) ;

// Valor da variavel minhaIdade atraves do ponteiro A (30)
printf ( " % d \n " , * A ) ;



A = &idadeVizinho; // O ponteiro agora aponta para idadeVizinho

// Resultado do endereco de memoria de idadeVizinho atraves do ponteiro A (0x7ffe5367e198)
printf ( " % p \n " , A ) ;

// Valor da variavel idadeVizinho atraves do ponteiro A (35)
printf ( " % d \n " , * A ) ;

int peso = 19;
int * B = & peso ;
int * C = & peso ;
int ** D = & B ;

}