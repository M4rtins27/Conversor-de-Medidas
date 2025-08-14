#include <stdio.h>
#include <stdlib.h>

int main()
{
    int escolha1, escolha2;        //Variáveis que usaremos no programa
    float temper, C, K, F;
    

    printf("---Conversor de Temperaturas---\n");
    printf("Selecione a escala que é usada na sua região: \n"); //Apresentando as opções
    printf("Celsius - 1\n");
    printf("Kelvin - 2\n");
    printf("Fahrenheit - 3\n");
    scanf("%d",&escolha1);
    
    
    switch(escolha1){        //selecionar a escala
    
    
    
    
    
    case 1:                                     //Selecionou Celsius
    printf(".\n.\n.\n.\n.\n");
    printf("Temperatura em Celsius!\n"); 
    printf("Digite abaixo a temperatura:\n");
    scanf("%f",&temper);
    printf(".\n.\n.\n.\n.\n");
    printf("Escolha a conversão que quer fazer: \n");
    printf("Kelvin - 1\nFahrenheit - 2\n");
    scanf("%d",&escolha2);
    
    
    if(escolha2 == 1){                            // De Celsius para Kelvin
    C = temper;
    K = C + 273.15;
    printf(".\n.\n.\n.\n.\n");
    printf("A temperatura de %.1fº Celsius em Kelvin é: %.2fº\n", temper, K); 
    }
   
   
    if(escolha2 == 2){                            // De Celsius para Fahrenheit
    C = temper;
    F = C * (9.0/5.0) + 32.0;
    printf(".\n.\n.\n.\n.\n");
    printf("A temperatura de %.1fº Celsius em Fahrenheit é: %.1fº\n", temper, F);
    }
   
   
    else{   
    printf("Fim do Programa!"); 
    }
    break;              //Fim
   
   
   
   
   
    case 2:                                     //Selecionou Kelvin
    printf(".\n.\n.\n.\n.\n");
    printf("Temperatura em Kelvin!\n"); 
    printf("Digite abaixo a temperatura:\n");
    scanf("%f",&temper);
    printf(".\n.\n.\n.\n.\n");
    printf("Escolha a conversão que quer fazer: \n");
    printf("Celsius - 1\nFahrenheit - 2\n");
    scanf("%d",&escolha2); 
    
    
    if(escolha2 == 1){                            // De Kelvin para Celsius
    K = temper;
    C = K - 273.15;
    printf(".\n.\n.\n.\n.\n");
    printf("O valor de %.2fº Kelvin em Celsius é: %.2fº\n", temper, C);
    }
    
    
    if(escolha2 == 2){                            // De Kelvin para Fahrenheit
    K = temper;
    C = K - 273.15;
    F = C * (9.0/5.0) + 32.0;
    printf(".\n.\n.\n.\n.\n");
    printf("O valor de %.2fº Kelvin em Fahrenheit é: %.2fº\n", temper, F);
    }
    
    
    else{
    printf("Fim do Programa!");
    }
    break;          //Fim
    
    
    
    
    
    case 3:                                     //Selecionou Fahrenheit
    printf(".\n.\n.\n.\n.\n");
    printf("Temperatura em Fahrenheit!\n"); 
    printf("Digite abaixo a temperatura:\n");
    scanf("%f",&temper);
    printf(".\n.\n.\n.\n.\n");
    printf("Escolha a conversão que quer fazer: \n");
    printf("Kelvin - 1\nCelsius - 2\n");
    scanf("%d",&escolha2);
    
    
    if(escolha2 == 1){                            // De Fahrenheit para Kelvin
    F = temper;
    C = (F - 32.0) * 5.0/9.0;
    K = C + 273.15;
    printf(".\n.\n.\n.\n.\n");
    printf("A temperatura de %.1fº Fahrenheit em Kelvin é: %.3fº\n", temper, K);
    }
    
    
    if(escolha2 == 2){                            // De Fahrenheit para Celsius
    F = temper;
    C = (F - 32.0) * 5.0/9.0; 
    printf(".\n.\n.\n.\n.\n");
    printf("A temperatura de %.1fº Fahrenheit em Celsius é: %.4fº\n", temper, C);
    }
    
    
    else{
    printf("Fim do Programa!");
    } 
    break;          //Fim
    
    
    default: 
    printf("Valor não aceito.\nFim do programa!"); break;  // Fim do programa
}
    
    return 0;
}