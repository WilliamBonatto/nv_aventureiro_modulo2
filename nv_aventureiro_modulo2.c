#include <stdio.h>

int main(){
    // Variáveis das Cartas 1 e 2
 
    float pib1, pib2; //Produto interno bruto
    float area1, area2; // Área relacionada a Km²
    float densidadeDemografica1, densidadeDemografica2; // Divisão da população pela área 
    float per_capita1, per_capita2; //Divisão PIB pela população
    float super_poder1, super_poder2; //Soma de todas as variáveis numéricas (ex: pib, area, população, etc...)
    char estado1, estado2; //Usar apenas uma caractere para representar Estado (ex: A , B, C...)
    char codigo_da_carta1[4], codigo_da_carta2[4]; // Códigos como A01, B02
    char cidade1[20], cidade2[20];      // Nomes sem espaços (limite de 19 caracteres)
    unsigned int populacao1, populacao2; // Sem sinal (não existe população negativa)
    int pontos_turisticos1, pontos_turisticos2;
    int atributos;

    /*Apresentação das Cartas
    Cada jogadore apresanta sua carta com Estado, 
    código da carta e nome da cidade.*/

    printf("***APRESENTAÇÃO DAS CARTAS***\n\n");

    printf("-- Jogador 1 apresente a sua Carta com código do Estado, código da carta e cidade ! --\n");
    printf("Digite o Código do Estado ( A - H):\n");
    scanf(" %c", &estado1);
    printf("Digite o Código da sua carta ( A01 - B02):\n");
    scanf("%s", codigo_da_carta1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("--Jogador 2 apresente a sua Carta com código do Estado, código da carta e cidade !--\n");
    printf("Digite o Código do Estado ( A - H):\n");
    scanf(" %c", &estado2);
    printf("Digite o Código da sua carta ( A01 - B02):\n");
    scanf("%s", codigo_da_carta2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);

// Coletando informações da Cartas 1 
    printf("Digite a população: (Carta 1)\n");
    scanf("%u", &populacao1);
    printf("Digite a area: (Carta 1)\n");
    scanf("%f", &area1);
    printf("Digite o PIB: (Carta 1)\n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos: (Carta 1)\n");
    scanf("%d", &pontos_turisticos1);

    densidadeDemografica1 = (float) populacao1 / area1;
    printf("A densidade Demográfica é de: (Carta 1) %.2f\n", densidadeDemografica1);

    per_capita1 = (float) pib1 / populacao1;
    printf("O PIB per Capita é de: (Carta 1) %.2f\n", per_capita1);

    super_poder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + densidadeDemografica1 + per_capita1;
    printf("O super poder é de: (Carta 1) %.2f\n\n", super_poder1);

    
// Coletando informações da Carta 2
    printf("Digite a população: (Carta 2)\n");
    scanf("%u", &populacao2);
    printf("Digite a area: (Carta 2)\n");
    scanf("%f", &area2);
    printf("Digite o PIB: (Carta 2)\n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos: (Carta 2)\n");
    scanf("%d", &pontos_turisticos2);

    densidadeDemografica2 = (float) populacao2 / area2;
    printf("A densidade Demográfica é de: (Carta 2) %.2f\n", densidadeDemografica2);

    per_capita2 = (float) pib2 / populacao2;
    printf("O PIB per Capita é de: (Carta 2) %.2f\n", per_capita2);

    super_poder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + densidadeDemografica2 + per_capita2;
    printf("O super poder é de: (Carta 2) %.2f\n\n", super_poder2);
//Desafio de atributos

printf("***Disputa dos Atributos***\n\n"); // Menu de opções de atributos a ser disputado.
printf("Escolha o atributo a ser Disputado !\n");
printf("1 - População\n");
printf("2 - Área\n");
printf("3 - PIB\n");
printf("4 - Pontos turísticos\n");
printf("5 - Densidade demográfica\n");
printf("6 - Per Capita\n");
printf("7 - Super Poder\n\n");
printf("Escolha o Atributo\n");
scanf("%d", &atributos);

/*A estrutura switch em C é usada para simplificar
o processo de seleção de uma entre várias opções possíveis*/
switch (atributos)  
{
case 1:
if (populacao1 > populacao2)
{
    printf("POPULAÇÃO: Carta 1 venceu !\n"); // Estruturas aninhadas de if else
} else if (populacao2 > populacao1) {
    printf("POPULAÇÃO: Carta 2 venceu !\n");
} else {
    printf("Empate entre Cartas !\n");
}
    break;

    case 2:
    if (area1 > area2)
{
    printf("ÁREA: Carta 1 venceu !\n");
} else if (area2 > area1) {
    printf("ÁREA: Carta 2 venceu !\n");
} else {
    printf("Empate entre Cartas !\n");
}
  break;
  
    case 3:
    if (pib1 > pib2)
{
    printf("PIB: Carta 1 venceu !\n");
} else if (pib2 > pib1) {
    printf("PIB: Carta 2 venceu !\n");
} else {
    printf("Empate entre Cartas !\n");
}
    break;

    case 4:
    if (pontos_turisticos1 > pontos_turisticos2)
{
    printf("PONTOS TURÍSTICOS: Carta 1 venceu !\n");
} else if (pontos_turisticos2 > pontos_turisticos1) {
    printf("PONTOS TURÍSTICOS: Carta 2 venceu !\n");
} else {
    printf("Empate entre Cartas !\n");
}
    break;

    /*Regras de Comparação: A regra geral é: vence a carta com o maior valor no atributo escolhido.
    Porém, para a Densidade Demográfica, a regra inverte: vence a carta com o menor valor.*/
    case 5:
    if (densidadeDemografica1 < densidadeDemografica2) 
{
    printf("DENSIDADE DEMOGRÁFICA: Carta 1 venceu !\n");
} else if (densidadeDemografica2 < densidadeDemografica1) {
    printf("DENSIDADE DEMOGRÁFICA: Carta 2 venceu !\n");
} else {
    printf("Empate entre Cartas !\n");
}
    break;

    case 6:
    if (per_capita1 > per_capita2)
{
    printf("PER CAPITA: Carta 1 venceu !\n");
} else if (per_capita2 > per_capita1) {
    printf("PER CAPITA: Carta 2 venceu !\n");
} else {
    printf("Empate entre Cartas !\n");
}
    break;

    case 7:
    if (super_poder1 > super_poder2)
{
    printf("SUPER PODER: Carta 1 venceu !\n");
} else if (super_poder2 > super_poder1) {
    printf("SUPER PODER: Carta 2 venceu !\n");
} else {
    printf("Empate entre Cartas !\n");
}
    break;

default: printf("Código inválido\n");
    break;

}

return 0;

}
