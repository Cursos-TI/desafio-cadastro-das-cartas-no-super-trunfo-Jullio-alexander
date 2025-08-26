#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
int main() {
//estruturas da variaveis das cartas
// carta 1
  char Estado1[3];
  char Codigo_carta1[5];
  char Nome_Cidade1[50];
  int Populacao1;
  float area_km2_1;
  float PIB1;
  int Numero_pontos_turistico1;
// carta 2
  char Estado2[3];
  char Codigo_carta2[5];
  char Nome_Cidade2[50];
  int Populacao2;
  float area_km2_2;
  float PIB2;
  int Numero_pontos_turistico2;

// Cadastro das cartas
printf("Cadastro da Carta 1 \n"); 
  printf("Ëstado (A-H): "); 
  scanf(" %s", &Estado1);

  printf("Codigo da Carta: ");            
  scanf("%s", Codigo_carta1);

  printf("Nome da Cidade: ");    
  scanf("%[^\n]", Nome_Cidade1);

  printf("Populacao: ");
  scanf("%d", &Populacao1);

  printf("Ärea em km2: ");
  scanf("%f", &area_km2_1);

  printf("PIB: ");
  scanf("%f", &PIB1);

  printf("Numero de pontos turistico: ");
  scanf("%d", &Numero_pontos_turistico1);

printf("\n"); // Adicionar uma linha para separar

printf("Cadastro da Carta 2 \n"); 
  printf("Ëstado (A-H): "); 
  scanf(" %s", &Estado2);

  printf("Codigo da Carta: ");            
  scanf("%s", Codigo_carta2);

  printf("Nome da Cidade: ");    
  scanf("%[^\n]", Nome_Cidade2);

  printf("Populacao: ");
  scanf("%d", &Populacao2);

  printf("Ärea em km2: ");
  scanf("%f", &area_km2_2);

  printf("PIB: ");
  scanf("%f", &PIB2);

  printf("Numero de pontos turistico: ");
  scanf("%d", &Numero_pontos_turistico2);

//Exibição das Cartas
printf("\n Cartas Cadastradas\n");

    //Carta 1
   printf("\nCarta 1:\n");
   printf("Estado: %c\n", Estado1);
   printf("Codigo: %s\n", Codigo_carta1);
   printf("Nome da Cidade: %s\n", Nome_Cidade1);
   printf("Populacao: %d\n", Populacao1);
   printf("Area: %.2f km²\n", area_km2_1);
   printf("PIB: %.2f bilhoes de reais\n", PIB1);
   printf("Numero de Pontos Turisticos: %d\n", Numero_pontos_turistico1);

    //Carta 2
   printf("\nCarta 2:\n");
   printf("Estado: %c\n", Estado2);
   printf("Codigo: %s\n", Codigo_carta2);
   printf("Nome da Cidade: %s\n", Nome_Cidade2);
   printf("Populacao: %d\n", Populacao2);
   printf("Area: %.2f km²\n", area_km2_2);
   printf("PIB: %.2f bilhoes de reais\n", PIB2);
   printf("Numero de Pontos Turisticos: %d\n", Numero_pontos_turistico2);


return 0;
}
