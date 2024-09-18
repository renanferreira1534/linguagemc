#include <stdio.h>

void parimpar(int vlr){
    if(vlr % 2 == 0){
        printf("o valor é par");
    }
    else{
        printf("o valor é impar");
    }
}

int main(){
    int vlr = 6;
    parimpar(vlr);
    return 0;
}