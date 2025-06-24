#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída (para funções como printf e scanf)
#include <stdlib.h> // Inclui a biblioteca padrão para funções gerais (como system, malloc, etc. - embora não usada diretamente aqui, é comum incluir)

int main() { // Função principal onde a execução do programa começa

    long int fatorial = 1; // Declara a variável para armazenar o resultado do fatorial.
                           // É 'long int' para permitir números maiores.
                           // Inicializada com 1, pois 1 é o elemento neutro da multiplicação
                           // e o fatorial de 0 é 1.

    int i;   // Variável contadora para o loop 'for'.
    int num; // Variável para armazenar o número fornecido pelo usuário.

    // Seção de entrada de dados
    printf("Digite o numero do fatorial: "); // Pede ao usuário para inserir um número.
    scanf("%d", &num);                      // Lê o número inteiro digitado e armazena em 'num'.

    // Trata o caso de números negativos, onde o fatorial não é tradicionalmente definido.
    if (num < 0) {
        printf("Fatorial nao eh definido para numeros negativos.\n");
    } else {
        // Se num for 0, o loop não executa e 'fatorial' permanece 1 (correto, 0! = 1).
        // Se num for positivo, calcula o fatorial.
        // Loop para calcular o fatorial
        // Começa com i = num e vai decrementando até i = 1.
        for (i = num; i >= 1; i--) {
            fatorial *= i; // Multiplica o valor atual de 'fatorial' pelo valor de 'i'.
                           // Ex: fatorial = fatorial * i;
        }

        // Seção de saída de dados
        printf("\nO fatorial de %d eh: %ld\n", num, fatorial); // Exibe o resultado do fatorial.
                                                             // Usa %ld para 'fatorial' porque é um 'long int'.
                                                             // Adicionado \n no final para pular uma linha após a impressão.
    }

    return 0; // Retorna 0 para o sistema operacional, indicando que o programa terminou com sucesso.
}
