#include <stdio.h>

int main(){
        int ano;
        printf("digite um ano:\n");
        scanf("%d",&ano);
        if(ano % 2 == 0){
            printf("o ano digitado é bissexto\n");
        }
        return 0;
} 
