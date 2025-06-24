#include <stdio.h>


int main(){

int senha = 1234;


do{
    printf("Digite a senha:");
    scanf("%d", senha);
}while(senha != 1234);

printf("Senha correta!");


}
