//Faca um programa que mostre ao usuario um menu com 4 opcoes de operacoes matematicas (as basicas, por exemplo). O usuario escolhe uma das opcoes e o seu programa entao pede dois valores numericos e realiza a operacao, mostrando o resultado e saindo.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, resultado;
    int op;
    x=0;
    y=0;
    resultado=0;
    op=0;

    printf(" \n Digite o valor do primeiro operando: ");
    scanf("%f", &x);
    printf(" \n Digite o valor do segundo operando: ");
    scanf("%f", &y);

    printf(" \n Escolha uma das opções abaixo: ");
    printf(" \n 1. Soma ");
    printf(" \n 2. Subtração ");
    printf(" \n 3. Multiplicação ");
    printf(" \n 4. Divisão ");

    printf(" \n Digite o número da opção desejada: ");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf(" \n Opção selecionada: 1. Soma ");
        resultado = x + y;
        printf(" \n A soma dos dois números é: %f ", resultado);
        break;

    case 2:
        printf(" \n Opção selecionada: 2. Subtração ");
        resultado = x - y;
        printf(" \n A subtração dos dois números é: %f", resultado);
        break;

    case 3:
        printf(" \n Opção selecionada: 3. Multiplicação ");
        resultado = x * y;
        printf(" \n A multiplicação dos dois números é: %f", resultado);
        break;

    case 4:
        printf(" \n Opção selecionada: 4. Divisão ");
        if(y == 0)
        {
            printf(" \n Não existe divisão por zero ");
        }
        else
        {
            resultado = x / y;
            printf(" \n A divisão dos dois números é: %f", resultado);
        }

        break;
    default:
        printf(" \n Você digitou uma opção inválida!");
    }
  return 0;
    oi
        olá
}
