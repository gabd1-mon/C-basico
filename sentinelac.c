#include <stdio.h>

int main(){
//uma sentinela é uma variavel vigia, na hora que receber uma condicao que quebra o laço ele quebra o laço
int numero, soma=0;
printf("Informe um numero:");
scanf("%d", &numero);

while(numero != 0){
 soma += numero;
 printf("Informe um numero");
 scanf("%d", &numero);
 }
printf("\n A soma eh %d", soma);
return 0;


}
