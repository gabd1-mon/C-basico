#include <stdio.h>



int main(){

    int num1, num2, mmc=0;
    printf("Primeiro numero: ");
    scanf("%d", &num1);
    printf("Primeiro numero: ");
    scanf("%d", &num2);
    while(num1%num2!=0){
        mmc+=num1;
        num1=mmc;
    }

    printf("O MMC eh: %d", mmc);
    return 0;
}
