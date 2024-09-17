#include <stdio.h>

int main(){

    char nome []="Marcelo";
    int i = 0;




    for(i ; i <= 6 ; i++){
    printf("%c -> %d -> %p\n",nome[i], nome[1], &nome[i]);
    }
    return 0;
}
