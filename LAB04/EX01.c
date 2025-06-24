#include <stdio.h>
#include <string.h> // Adicionamos esta biblioteca para usar a função strcpy

// --- Protótipo da Função ---
float calcularTaxa(float horaspg);

int main() {
    // --- PASSO 1: Criar Arrays para armazenar os dados ---
    // Usaremos um array de strings (matriz de char) para os nomes.
    // E arrays de float para as horas e os valores a pagar.
    // O tamanho 6 é usado para ter índices de 1 a 5, facilitando a lógica.
    char clientes_nomes[6][30];
    float clientes_horas[6];
    float clientes_horaspagas[6];

    int i; // Variável de controle do loop

    // --- Loop para ENTRADA de dados ---
    for (i = 1; i < 6; i++) {
        char nome_temporario[30]; // Variável para ler o nome

        printf("Digite o nome do %dº cliente: \n", i);
        scanf(" %[^\n]", nome_temporario);

        printf("Digite as horas do cliente %s: \n", nome_temporario);

        // --- PASSO 2: Armazenar os dados nos arrays ---
        // Guardamos as horas no array correspondente ao índice 'i'.
        scanf("%f", &clientes_horas[i]);

        // Copiamos o nome lido para a posição correta no nosso array de nomes.
        strcpy(clientes_nomes[i], nome_temporario);

        // Calculamos a taxa e guardamos o resultado no array de valores pagos.
        clientes_horaspagas[i] = calcularTaxa(clientes_horas[i]);

        printf("Dados do cliente %d registrados com sucesso!\n\n", i);
    }

    // --- PASSO 3: Loop para SAÍDA de dados ---
    // Agora, imprimimos um cabeçalho e depois os dados de todos os clientes.
    printf("\n--- RELATÓRIO FINAL DE ESTACIONAMENTO ---\n");
    printf("========================================================\n");
    printf("%-20s | %-10s | %-15s\n", "CLIENTE", "HORAS", "VALOR A PAGAR");
    printf("--------------------------------------------------------\n");

    for (i = 1; i < 6; i++) {
        // Imprimimos os dados de cada cliente, buscando nos arrays.
        printf("%-20s | %-10.2f | R$ %-13.2f\n",
               clientes_nomes[i],
               clientes_horas[i],
               clientes_horaspagas[i]);
    }
    printf("========================================================\n");

    return 0; // Fim do programa
}

// Definição da função calcularTaxa (sem alterações)
float calcularTaxa(float horaspg) {
    float valorpagar = 0.0;

    if (horaspg <= 3) {
        valorpagar = 10.0;
    } else if (horaspg <= 8) {
        valorpagar = 10.0 + (horaspg - 3) * 1.5;
    } else {
        valorpagar = 20.0;
    }

    return valorpagar;
}
