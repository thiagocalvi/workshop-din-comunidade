#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void primos(int a){
    double x;
    int j;
    bool f;
    for (int i = 2; i < a; i++){
        x = sqrt(i);
        j = 2;
        f = false;
        while (j <= x && f == false){
            if (i % j == 0){
                f = true;
            }
            j ++;
        }
        if (f == false){
            printf("\n%d",i);
        }
        

    }
}

void main(){
    primos(1000);
}