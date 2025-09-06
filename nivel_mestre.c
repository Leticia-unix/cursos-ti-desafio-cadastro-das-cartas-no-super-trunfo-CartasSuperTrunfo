#include <stdio.h>
int main(){

    //CARTA 1
    char carta1[10];
int pontu ;
char estado[4];
char codigo[10];
char  nocida[6];
unsigned long int populacao;
float area;
float pib;
float dens;
float pibcar;
float superpoder;
float densidadeinvertida;

//CARTA 2

char carta2[10];
int pontu2 ;
char estado2[4];
char codigo2[10];
char  nocida2[6];
unsigned long int populacao2;
float area2;
float pib2;
float dens2;
float pibcar2;
float superpoder2;
float densidadeinvertida2;


   //COMPARAÇÃO CARTAS
int compopu = (populacao > populacao2);
int comarea = area > area2 ; 
int comppib = pib > pib2;
int comppontu = pontu > pontu2;
int compdensi = dens < dens2;
int comppibcar = pibcar > pibcar2;
int comsuperpoder = superpoder > superpoder2;



//CARTA 1
printf("Carta 1: \n");
scanf("%s", carta1 );

printf("Digite o estado: \n  ");
scanf("%s" , estado);

printf("Código da carta:  \n");
scanf("%s", codigo);

printf("Nome da cidade: \n");
scanf("%s", nocida);


printf("Qual é a população: \n");
scanf("%lu" , &populacao);

printf("Qual é a área: \n");
scanf("%f" , &area);

printf("Qual é o PIB: \n");
scanf("%f" , &pib);

printf("Quantos pontos turisticos: \n");
scanf("%d" , &pontu);

dens =  populacao / area;
pibcar =  pib  / populacao;

densidadeinvertida = 1 / dens;


//SUPER PODER CARTA 1
superpoder = (float) populacao + (float) area + (float) pib + (float) pontu + (float) pibcar + densidadeinvertida;



// -----CARTA 2-----

printf("Carta 2: \n");
scanf("%s", carta2 );

printf("Digite o estado da carta 2: \n  ");
scanf("%s" , estado2);

printf("Código da carta da carta 2:  \n");
scanf("%s", codigo2);

printf("Nome da cidade da carta 2: \n");
scanf("%s", nocida2);

printf("Qual é a população da carta 2: \n");
scanf("%lu" , &populacao2);

printf("Qual é a área da carta 2: \n");
scanf("%f" , &area2);

printf("Qual é o PIB da carta 2: \n");
scanf("%f" , &pib2);

printf("Quantos pontos turisticos da carta 2: \n");
scanf("%d" , &pontu2);

dens2 =  populacao2 / area2;
pibcar2 =  pib2  / populacao2;

densidadeinvertida2 = 1 / dens;

//SUPER PODER CARTA 2
superpoder2 = (float) populacao2 + (float) area2 + (float) pib2 + (float) pontu2 + (float)pibcar2 + (float) densidadeinvertida2; 



//EXIBIÇÃO CARTA 1
printf("---Carta 1---\n");
printf("Estado: %s \n", estado);
printf("Código da carta: %s \n", codigo);
printf("nome da cidade: %s \n" , nocida);
printf("População: %lu\n" , populacao);
printf("Área: %.2f Km²\n", area);
printf("PIB: %.2f bilhões de reais\n",  pib);
printf("Pontos turísticos: %d \n" , pontu);
printf("Densidade populacional: %.2f hab/km²\n", dens);
printf("PIB per Capita: %.2f reais\n", pibcar);

// Exibição da Carta 2
    printf("--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Cidade: %s\n", nocida2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontu2);
    printf("Densidade demográfica: %.2f habitantes/km²\n", dens2);
    printf("PIB per capita: %.2f\n", pibcar2);


 

//resultado
printf("-- Resultado da comparação , 1 é para carta 1 e 0 para carta 2 -- \n");

printf("População: Carta %d\n", compopu);
printf("Área: Carta %d\n", comarea);
printf("PIB: Carta %d\n", comppib);
printf("Pontos turísticos: Carta %d\n", comppontu);
printf("Densidade Populacional: Carta %d\n", compdensi);
printf("PIB per capita: Carta %d\n", comppibcar);
printf("Super Poder: Carta %d\n",comsuperpoder);

    return 0;
}