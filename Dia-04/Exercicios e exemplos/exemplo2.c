void main(){

int minhaIdade = 19; // Variavel 

// Declaracao do ponteiro A que aponta para oendereco de memoria da variavel minhaIdade .
int * A = & minhaIdade ;

// Resultado da variavel minhaIdade (19)
printf ( "% d \n" , minhaIdade ) ;

// Resultado do endereco de memoria de minhaIdade (0x7ffe5367e044)
printf ( "% p \n" , & minhaIdade ) ;

// Resultado do endereco de memoria de minhaIdade atraves do ponteiro A (0x7ffe5367e044)
printf ( "% p \n" , A ) ;

// Valor da variavel minhaIdade atraves do ponteiro A (19)
printf ( "% d \n" , * A ) ;

}