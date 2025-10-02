void main(){

    char x[] = {"Hello World"};
    char* y = x;
    // *y -> 'H'
    printf("\n%s", y); // Hello World
    y += 2;
    // *y -> 'l'
    printf("\n%s", y); // llo World
    y -=1;
    // *y -> 'e'
    printf("\n%s", y); // ello World

    
}