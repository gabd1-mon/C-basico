#include <stdio.h>

int main(){
//uma sentinela � uma variavel vigia, na hora que receber uma condicao que quebra o la�o ele quebra o la�o
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
