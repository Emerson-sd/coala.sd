#include <stdio.h>

int main(){

    char cidade[50],cidade2[50];
    printf( "\ndigite a cidade:");
    scanf("%s",&cidade);
    
    char estado[50],estado2[50];
    printf("\nDigite o estado da cidade :");    
    scanf("%s",&estado);

    char codigo[50],codigo2[50];
    printf("\nCodigo da cidade:"); 
    scanf("%s",&codigo);

    int populacao_da_cidade,populacao_da_cidade2;
    printf("\nInforme a populaçao da cidade:");
    scanf("%d",&populacao_da_cidade);

    float pib,pib2 ;
    printf("\nInforme o pib da cidade:");
    scanf("%f",&pib);

    float area,area2 ;
    printf("\nInforme a area da cidade:");
    scanf("%f",&area);

    int pontos_turisticos,pontos_turisticos2;
    printf("\nInforme os pontos turisticos da cidade:");
    scanf("%d",&pontos_turisticos);
    //calculo da densidade populacional
    float densidade_populacional,densidade_populacional2;

    //calculo da pib per capital
    float pib_per_capita,pib_per_capita2;

    float super_poder,superpoder2;
    
   

    densidade_populacional = populacao_da_cidade/area;
    pib_per_capita =  pib/populacao_da_cidade;
    
    

    printf("====CARTA====");
    printf("\nCidade:%s",cidade);
    printf("\nEstado:%s",estado);
    printf("\nCodigo:%s",codigo);
    printf("\nPopulaçao:%d",populacao_da_cidade);
    printf("\nPIB:%.2f bilhões de reais ",pib);
    printf("\nArea :%.2fkm²",area);
    printf("\nPontos turisticos:%d",pontos_turisticos);
    printf("\nDensidade Populacional:%.2f hab/km²",densidade_populacional);
    printf("\nPIB per Capita:%.2f reais",pib_per_capita);
    printf("\n=============");


    /// CARTA 2



    //cidade da carta 2
    printf( "\ndigite a cidade:");
    scanf("%s",&cidade2);



    //estado da carta 2
    printf("\nDigite o estado da cidade :");    
    scanf("%s",&estado2);


    //codigo carta 2
    printf("\nCodigo da cidade:"); 
    scanf("%s",&codigo2);


    //populacao da cidade carta 2
    printf("\nInforme a populaçao da cidade:");
    scanf("%d",&populacao_da_cidade2);

    //pib carta 2
    printf("\nInforme o pib da cidade:");
    scanf("%f",&pib2);


    // area carta 2
    printf("\nInforme a area da cidade:");
    scanf("%f",&area2);

    // pontos turisticos carta 2
    printf("\nInforme os pontos turisticos da cidade:");
    scanf("%d",&pontos_turisticos2);



    //densidade populacional e pib per capital carta 2
    densidade_populacional2 = populacao_da_cidade2/area2;
    pib_per_capita2 = pib2/populacao_da_cidade2;

    printf("====CARTA====");
    printf("\nCidade:%s",cidade2);
    printf("\nEstado:%s",estado2);
    printf("\nCodigo:%s",codigo2);
    printf("\nPopulaçao:%d",populacao_da_cidade2);
    printf("\nPIB:%.2f bilhões de reais",pib2);
    printf("\nArea :%.2fkm²",area2);
    printf("\nPontos turisticos:%d",pontos_turisticos2);
    printf("\nDensidade Populacional:%.2f hab/km²",densidade_populacional2);
    printf("\nPIB per Capita:%.2f reais",pib_per_capita2);
    printf("\n=============");
    super_poder = (populacao_da_cidade + pib + area + densidade_populacional + pib_per_capita)/ pontos_turisticos;
    superpoder2 = (populacao_da_cidade2 + pib2 + area2 + densidade_populacional2 + pib_per_capita2)/ pontos_turisticos2;
}
