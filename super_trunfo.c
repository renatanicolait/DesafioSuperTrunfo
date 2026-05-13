#include<stdio.h>
int main() {

//Variáveis carta 1
char estado1; //Nome do estado
char codigo1[50]; //Código da carta
char cidade1[100]; //Nome da cidade
int populacao1; //Número de habitantes
float area1; //Área em km da cidade
double pib1; //Produto Interno Bruto da cidade
float densidade_populacional1; //Calcular a densidade populacional
float pib_percapta1; //Calcular o pib per capta da cidade
int turistico1; //Número de pontos turísticos da cidade

//Variáveis carta 2
char estado2; //Nome do estado
char codigo2[50]; //Código da carta
char cidade2[100]; //Nome da cidade
int populacao2; //Número de habitantes
float area2; //Área em km da cidade
double pib2; //Produto Interno Bruto da cidade
float densidade_populacional2; //Calcular a densidade populacional
float pib_percapta2; //Calcular o pib per capta da cidade
int turistico2; //Número de pontos turísticos da cidade

//Comandos carta 1
printf("Estado: ");
scanf(" %c", &estado1);//Digitar o código do Estado (letras de A a H)
printf("Código da carta: ");
scanf(" %s", codigo1);//São números de 01 a 04 mais a letra do Estado (A01)
printf("Cidade: ");
scanf(" %[^\n]", cidade1);
printf("População: ");
scanf(" %d", &populacao1);
printf("Área: ");
scanf(" %f", &area1);
printf("PIB: ");
scanf(" %lf", &pib1);
printf("Pontos turísticos da cidade: ");
scanf(" %d", &turistico1);
printf("A densidade populacional é: %.2f hab/km\n",populacao1/area1);
printf("O PIB per capta é: %.4f reais\n ",pib1/populacao1);
densidade_populacional1 = (float)populacao1 / area1;
pib_percapta1 = pib1 / (float)populacao1; 

//Comandos carta 2
printf("Estado: ");
scanf(" %c", &estado2);//Digitar o código do Estado (letras de A a H)
printf("Código da carta: ");
scanf(" %s", codigo2);//São números de 01 a 04 mais a letra do Estado (A01)
printf("Cidade: ");
scanf(" %[^\n]", cidade2);
printf("População: ");
scanf(" %d", &populacao2);
printf("Área: ");
scanf(" %f", &area2);
printf("PIB: ");
scanf(" %lf", &pib2);
printf("Pontos turísticos da cidade: ");
scanf(" %d", &turistico2);
printf("A densidade populacional é: %.2f hab/km\n",populacao2/area2);
printf("O PIB per capta é: %.4f reais\n ",pib2/populacao2);
densidade_populacional2 = (float)populacao2 / area2;
pib_percapta2 = pib2 / (float)populacao2;

printf("\n--- CARTA 1 ---\n");
printf("Estado: %c - Código: %s\n", estado1, codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f km2\n", area1); // O %.2f deixará o número bonito
printf("PIB: %.2f bilhões\n", pib1);
printf("Densidade Populacional: %.2f hab/km\n",densidade_populacional1);
printf("PIB per capta: %.4f reais\n",pib_percapta1);

printf("\n--- CARTA 2 ---\n");
printf("Estado: %c - Código: %s\n", estado2, codigo2);
printf("Cidade: %s\n", cidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f km2\n", area2);
printf("PIB: %.2f bilhões\n", pib2);
printf("Densidade Populacional: %.2f hab/km\n",densidade_populacional2);
printf("PIB per capta: %.4f reais\n",pib_percapta2);
}

