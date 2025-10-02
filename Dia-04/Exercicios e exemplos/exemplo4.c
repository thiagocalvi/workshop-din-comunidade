#include <stdio.h>
#include <string.h>
void main() {
    
    int x = 4;
    int *p = &x;
    *p *= 2;
    printf("\n %d", x); // x = 8
    printf("\n %d", *p); // *p = 8

    int y = 3 * *p;
    printf("\n %d", y); // y = 24

    char a[] = {"World"};
    char* b = &a;
    char c[] = {"Hello"};
    
    
    printf("\n%s %s",c, b); // Hello World


}