#include <stdio.h>


int main(){

int senha ;

do{
    printf("\nDigite sua senha:");
    scanf("%d", &senha);
    if(senha == 1234){
        printf("\nSenha correta");
    }else{
    printf("\nSenha incorreta");

    }



}while(senha != 1234);



}

