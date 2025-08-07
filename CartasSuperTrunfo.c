#include <stdio.h>

int main(){

//Cadastro da Carta 1:

char estado[10] = "Alagoas";
char codigo[4] = "A01";
char cidade[100] = "Maceió";
int populacao = 1;
float area = 503;
float pib = 27.480;
int pontosturisticos = 50;

//Cadastro da Carta 2:

char estado2[10] = "Paraná";
char codigo2[4] = "B02";
char cidade2[100] = "Curitiba";
int populacao2 = 1.773;
float area2 = 2;
float pib2 = 98;
int pontosturisticos2 = 25;


//Leitura da Carta 1:

printf("Leitura da Carta 1:\n");

printf("Digite o Estado: \n");
scanf("%s", &estado); 
printf("%s\n", estado);

printf("Digite o Código: \n");
scanf("%s", &codigo);
printf("%s\n", codigo);

printf("Digite a Cidade: \n");
scanf("%s", &cidade);
printf("%s\n", cidade);

printf(" Informe a População (em milhões): \n");
scanf("%d", &populacao);
printf("%d\n", populacao);

printf(" Informe a Área (em km²): \n");
scanf("%f", &area);
printf("%f\n", area);

printf("Informe o PIB (em bilhões): \n");
scanf("%f", &pib);
printf("%f\n", pib);

printf(" Digite o Número de Pontos Turísticos: \n");
scanf("%d", &pontosturisticos);
printf("%d\n", pontosturisticos);

//Leitura da Carta 2:

printf("Leitura da Carta 2:\n");

printf("Digite o Estado: \n");
scanf("%s", &estado2); 
printf("%s\n", estado2);

printf("Digite o Código: \n");
scanf("%s", &codigo2);
printf("%s\n", codigo2);

printf("Digite a Cidade: \n");
scanf("%s", &cidade2);
printf("%s\n", cidade2);

printf(" Informe a População (em milhões): \n");
scanf("%d", &populacao2);
printf("%d\n", populacao2);

printf(" Informe a Área (em km²): \n");
scanf("%f", &area2);
printf("%f\n", area2);

printf("Informe o PIB (em bilhões): \n");
scanf("%f", &pib2);
printf("%f\n", pib2);

printf(" Digite o Número de Pontos Turísticos: \n");
scanf("%d", &pontosturisticos2);
printf("%d\n", pontosturisticos2);



return 0;


}