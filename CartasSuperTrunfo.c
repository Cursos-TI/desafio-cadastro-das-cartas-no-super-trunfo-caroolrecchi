#include <stdio.h>

int main(){

//Cadastro da Carta 1:

char estado[10] = "Alagoas";
char codigo[4] = "A01";
char cidade[100] = "Maceió";
float populacao = 1000000;
float area = 503000000;
float pib = 27480000;
int pontosturisticos = 50;

//Cadastro da Carta 2:

char estado2[10] = "Paraná";
char codigo2[4] = "B02";
char cidade2[100] = "Curitiba";
float populacao2 = 1773000;
float area2 = 2000000;
float pib2 = 98000000;
int pontosturisticos2 = 25;


//Leitura da Carta 1:

printf("Leitura da Carta 1:\n");

printf("Digite o Estado: \n");
scanf("%s", estado); 

printf("Digite o Código: \n");
scanf("%s", codigo);

printf("Digite a Cidade: \n");
scanf("%s", cidade);

printf(" Informe a População: \n");
scanf("%f", &populacao);

printf(" Informe a Área (em km²): \n");
scanf("%.2f", &area);

printf("Informe o PIB (em bilhões): \n");
scanf("%f", &pib);

printf(" Digite o Número de Pontos Turísticos: \n");
scanf("%d", &pontosturisticos);

//Leitura da Carta 2:

printf("Leitura da Carta 2:\n");

printf("Digite o Estado: \n");
scanf("%s", estado2); 

printf("Digite o Código: \n");
scanf("%s", codigo2);

printf("Digite a Cidade: \n");
scanf("%s", cidade2);

printf(" Informe a População: \n");
scanf("%f", &populacao2);

printf(" Informe a Área (em km²): \n");
scanf("%.2f", &area2);

printf("Informe o PIB (em bilhões): \n");
scanf("%f", &pib2);

printf(" Digite o Número de Pontos Turísticos: \n");
scanf("%d", &pontosturisticos2);


return 0;


}
