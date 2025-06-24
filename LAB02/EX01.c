#include <stdio.h>  // Inclui a biblioteca padr�o de entrada e sa�da (para fun��es como printf e scanf)
#include <stdlib.h> // Inclui a biblioteca padr�o para fun��es gerais (como system, malloc, etc. - embora n�o usada diretamente aqui, � comum incluir)

int main() { // Fun��o principal onde a execu��o do programa come�a

    long int fatorial = 1; // Declara a vari�vel para armazenar o resultado do fatorial.
                           // � 'long int' para permitir n�meros maiores.
                           // Inicializada com 1, pois 1 � o elemento neutro da multiplica��o
                           // e o fatorial de 0 � 1.

    int i;   // Vari�vel contadora para o loop 'for'.
    int num; // Vari�vel para armazenar o n�mero fornecido pelo usu�rio.

    // Se��o de entrada de dados
    printf("Digite o numero do fatorial: "); // Pede ao usu�rio para inserir um n�mero.
    scanf("%d", &num);                      // L� o n�mero inteiro digitado e armazena em 'num'.

    // Trata o caso de n�meros negativos, onde o fatorial n�o � tradicionalmente definido.
    if (num < 0) {
        printf("Fatorial nao eh definido para numeros negativos.\n");
    } else {
        // Se num for 0, o loop n�o executa e 'fatorial' permanece 1 (correto, 0! = 1).
        // Se num for positivo, calcula o fatorial.
        // Loop para calcular o fatorial
        // Come�a com i = num e vai decrementando at� i = 1.
        for (i = num; i >= 1; i--) {
            fatorial *= i; // Multiplica o valor atual de 'fatorial' pelo valor de 'i'.
                           // Ex: fatorial = fatorial * i;
        }

        // Se��o de sa�da de dados
        printf("\nO fatorial de %d eh: %ld\n", num, fatorial); // Exibe o resultado do fatorial.
                                                             // Usa %ld para 'fatorial' porque � um 'long int'.
                                                             // Adicionado \n no final para pular uma linha ap�s a impress�o.
    }

    return 0; // Retorna 0 para o sistema operacional, indicando que o programa terminou com sucesso.
}
