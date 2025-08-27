#include <stdio.h>
    
    int conversao_cent = 100;
    int conversao_mil = 1000;
    
    float calculoCentimetros(float medida1, int conversao_cent){   //definição das funções para a conversão de medidas
        return medida1 * conversao_cent;
    }
    
    float calculoMilimetros(float medida1, int conversao_mil){
        return medida1 * conversao_mil;
    }

int main()
{
    float medida1;
    int escolha;
    printf("Me diga um valor em metros\n");
    scanf("%f",&medida1);
    printf("Escolha qual conversão deseja aplicar:\n");
    printf("Pressione 1 para converter para centímetros\n");
    printf("Pressione 2 para converter para milímetros\n");
    scanf("%d",&escolha);
        if(escolha == 1){
         calculoCentimetros(medida1, conversao_cent);       //chamada da função para converter de metros para centímetros
         printf("%.1f metros é igual a %.1f centímetros\n",medida1,calculoCentimetros(medida1, conversao_cent));
        }
         else if (escolha == 2){
         calculoMilimetros(medida1, conversao_mil);         //chamada da função para converter de centímetros para metros
         printf("%.1f metros é igual a %.1f milímetros\n",medida1,calculoMilimetros(medida1, conversao_mil));
         }
         else{
             printf("Fim do programa!");
         }

    return 0;
}