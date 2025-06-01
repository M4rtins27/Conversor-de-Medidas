#include <stdlib.h>
#include <stdio.h>

int main()
{   
    int escolha, parimpar, divisor = 2; //Definindo as variáveis
    float num1, num2, resultado;
    
    
    printf("--- Calculadora ---\n");    //Introdução das opções
    printf("    Escolha o tipo de operação    \n");
    printf("(1) Adição\n");
    printf("(2) Subtração\n");
    printf("(3) Multiplicação\n");
    printf("(4) Divisão\n");
    printf("(5) Ímpar/Par\n");
    scanf("%d",&escolha);     
    
    switch( escolha ){          //Estrutura de controle
        case 1:     //Adição
        printf("Digite o primeiro termo\n");
        scanf("%f",&num1);
        printf("Digite o segundo termo\n");
        scanf("%f",&num2);
        resultado = num1 + num2;
        printf("resultado da soma é: %.1f",resultado);
        break;
        
        case 2:     //Subtração
        printf("Digite o minuendo\n");
        scanf("%f",&num1);
        printf("Digite o subtraendo\n");
        scanf("%f",&num2);
        resultado = num1 - num2;
        printf("O resto é: %.1f",resultado);
        break;
        
        case 3:     //Multiplicação
        printf("Digite o primeiro fator\n");
        scanf("%f",&num1);
        printf("Digite o segundo fator\n");
        scanf("%f",&num2);
        resultado = num1 * num2;
        printf("O produto da multiplicação é: %.1f",resultado);
        break;
        
        case 4:     //Divisão
        printf("Digite o dividendo\n");
        scanf("%f",&num1);
        printf("Digite o divisor\n");
        scanf("%f",&num2);
        resultado = num1 / num2;
        printf("O quociente da divisão é: %.1f", resultado);
        break;
    
        case 5:     //Verificando se é par ou ímpar
        printf("Digite um número para verificar se é par ou ímpar:\n");
        scanf("%d",&parimpar);
        parimpar % divisor == 0 ? printf("O número é par."): printf("O número é ímpar.");
        break;
        
        default: printf("Opção inválida! Fim do programa!"); //Caso a opção escolhida não exista 
    } 

    return 0; //Fim do programa
}

