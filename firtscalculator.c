#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int opcao;
    int num1 = 0, num2 = 0, num3 = 0;
    char resposta[3]; // aumentei o tamanho do array para 3 caracteres
    int resultado = 0;

    do {
        printf("**********************************\n");
        printf("|         Calculadora            |\n");
        printf("| Escolha a opcao desejada       |\n");
        printf("| 1-Somar                        |\n");
        printf("| 2-Diminuir                     |\n");
        printf("| 3-Multiplicar                  |\n");
        printf("| 4-Dividir                      |\n");
        printf("| 5-Exponenciar                  |\n");
        printf("| 6-Verificar se possui raiz 2   |\n");
        printf("| 7-Calcular o fatorial          |\n");
        printf("| 8-Sair                         |\n");
        printf("**********************************\n");
        scanf("%d", &opcao);

        if (opcao == 8) {
            printf("Saindo...\n");
            return 0; 
        }

        switch (opcao) {
            case 1:
                printf("Digite um número: ");
                scanf("%d", &num1);
                printf("Digite outro número: ");
                scanf("%d", &num2);
                printf("Deseja adicionar outro número? (s/n): ");
                scanf(" %2s", resposta); 

                if (resposta[0] == 's') {
                    printf("Digite outro número: ");
                    scanf("%d", &num3);
                    resultado = num1 + num2 + num3;
                    printf("Resultado: %d\n", resultado);
                } else {
                    resultado = num1 + num2;
                    printf("Resultado: %d\n", resultado);
                }
                break;
            case 2:
                printf("Digite um número: ");
                scanf("%d", &num1);
                printf("Digite outro número: ");
                scanf("%d", &num2);
                printf("Deseja adicionar outro número? (s/n): ");
                scanf(" %2s", resposta);

                if (resposta[0] == 's') {
                    printf("Digite outro número: ");
                    scanf("%d", &num3);
                    resultado = num1 - num2 - num3;
                    printf("Resultado: %d\n", resultado);
                } else {
                    resultado = num1 - num2;
                    printf("Resultado: %d\n", resultado);
                }
                break;
            case 3:
                printf("Digite um número: ");
                scanf("%d", &num1);
                printf("Digite outro número: ");
                scanf("%d", &num2);
                resultado = num1 * num2;
                printf("Resultado: %d\n", resultado);
                break;
            case 4:
                printf("Digite um número: ");
                scanf("%d", &num1);
                printf("Digite outro número: ");
                scanf("%d", &num2);
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %d\n", resultado);
                } else {
                    printf("Erro: divisão por zero!\n");
                }
                break;
            case 5:
                printf("Digite um número: ");
                scanf("%d", &num1);
                printf("Digite outro número: ");
                scanf("%d", &num2);
                resultado = pow(num1, num2);
                printf("Resultado: %d\n", resultado);
                break;
            case 6:
                printf("Digite um número: ");
                scanf("%d", &num1);
                if (sqrt(num1) == (int)sqrt(num1)) {
                    printf("O número %d possui raiz quadrada!\n", num1);
                } else {
                    printf("O número %d não possui raiz quadrada!\n", num1);
                }
                break;
            case 7:
                printf("Digite um número: ");
                scanf("%d", &num1);
                int fatorial = 1;
                for (int i = 1; i <= num1; i++) {
                    fatorial *= i;
                }
                printf("Fatorial de %d: %d\n", num1, fatorial);
                break;
            default:
                printf("Opção inválida!\n");
                break;
        }
    } while (1);

    return 0;
}