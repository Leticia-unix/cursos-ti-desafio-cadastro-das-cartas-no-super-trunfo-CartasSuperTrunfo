#include <stdio.h>
int main (){

//DESAFIO AVENTUREIRO

int populacao, pontu ;
char estado[4];
char codigo[10];
char  nocida[6];
float area;
float pib;
float dens;
float pibcar;

//CARTA 2

int populacao2, pontu2 ;
char estado2[4];
char codigo2[10];
char  nocida2[6];
float area2;
float pib2;
float dens2;
float pibcar2;

//printf("Digite o número da carta: \n");
//scanf("%d" , &carta);



printf("Digite o estado: \n  ");
scanf("%s" , estado);

printf("Código da carta:  \n");
scanf("%s", codigo);

printf("Nome da cidade: \n");
scanf("%s", nocida);

printf("Qual é a população: \n");
scanf("%d" , &populacao);

printf("Qual é a área: \n");
scanf("%f" , &area);

printf("Qual é o PIB: \n");
scanf("%f" , &pib);

printf("Quantos pontos turisticos: \n");
scanf("%d" , &pontu);

dens =  populacao / area;
pibcar =  pib  / populacao;

//printf("Digite o número da carta: \n");
//scanf("%d" , &carta);

printf("Digite o estado: \n  ");
scanf("%s" , estado2);

printf("Código da carta:  \n");
scanf("%s", codigo2);

printf("Nome da cidade: \n");
scanf("%s", nocida2);

printf("Qual é a população: \n");
scanf("%d" , &populacao2);

printf("Qual é a área: \n");
scanf("%f" , &area2);

printf("Qual é o PIB: \n");
scanf("%f" , &pib2);

printf("Quantos pontos turisticos: \n");
scanf("%d" , &pontu2);

dens2 =  populacao2 / area2;
pibcar2 =  pib2  / populacao2;

printf("Carta 1\n");
printf("Estado: %s \n", estado);
printf("Código da carta: %s \n", codigo);
printf("nome da cidade: %s \n" , nocida);
printf("População: %d \n" , populacao);
printf("Área: %.2f Km²\n", area);
printf("PIB: %.2f bilhões de reais\n",  pib);
printf("Pontos turísticos: %d \n" , pontu);
printf("Densidade populacional: %.2f hab/km²\n", dens);
printf("PIB per Capita: %.2f reais\n", pibcar);






printf("Carta 2 \n");
printf("Estado: %s \n", estado2);
printf("Código da carta: %s \n", codigo2);
printf("nome da cidade: %s \n" , nocida2);
printf("População: %d \n" , populacao2);
printf("Área: %.2f Km²\n", area2);
printf("PIB: %.2f bilhões de reais\n",  pib2);
printf("Pontos turísticos: %d \n" , pontu2);
printf("Densidade populacional: %.2f hab/km²\n", dens2);
printf("PIB per Capita: %.2f reais\n", pibcar2);

    return 0;