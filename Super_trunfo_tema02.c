// Jogo super trunfo referente ao * Tema 02 ref aos FUNDAMENTOS E TÉCNICAS AVANÇADAS
// Inicio da programação

#include <stdio.h>
#include <locale.h>
//Função padrão de divisão
float divisao( float numero01, float numero02){
   float resultado = numero01/numero02;
   return resultado;
}
const char* carta01(float cartaA, float cartaB){
   if (cartaA> cartaB)
      return "Carta 1 venceu (1)";
   if (cartaA< cartaB)
      return "Carta 2 venceu (0)";
   if (cartaB> cartaA)
      return "Carta 2 venceu (1)";
   if (cartaB< cartaA)
      return "Carta 1 venceu (0)";
   else
      return "Empate";
}
const char* densid_carta02(float cartaA, float cartaB){
   if(cartaA< cartaB)
      return "Carta 1 venceu (1)";
   if(cartaA> cartaB)
      return "Carta 2 venceu(0)";
   if(cartaB< cartaA)
      return "Carta 2 venceu (1)";
   if(cartaB> cartaA)
      return "Carta 1 venceu(0)";
   else
      return "Empate";
}
int main()
{
   
  
   //Carta 01

   int carta = 01;
   char estado = 'A';
   char codigo[4] = "A01";
   char cidade[30] = "Sao Paulo";
   unsigned long int populacao = 12325000;
   float area = 1521.11;
   double pib = 699000000028;
   int numero_p_turistico = 50;
   float densidade = divisao(populacao, area);
   float pib_perCapita = divisao(pib, populacao);
   //*****************************
   //Carta 02
   int carta1 = 02;
   char estado1 = 'B';
   char codigo1[4] = "B02";
   char cidade1[30] = "Rio de Janeiro";
   unsigned long int populacao1 = 6748000;
   float area1 = 1200.25;
   double pib1 = 300000000050;
   int numero_p_turistico1 = 30;
   float densidade1 = divisao(populacao1, area1);
   float pib_perCapita1 = divisao((float) pib1, populacao1);
   //Comparar a carta 01 com a carta 02
   const char* comp_populacao = carta01(populacao, populacao1);
   const char* comp_area = carta01(area, area1);
   const char* comp_pib = carta01(pib, pib1);
   const char* comp_n_turista = carta01(numero_p_turistico, numero_p_turistico1);
   const char* comp_densidade = densid_carta02(densidade, densidade1);
   const char* comp_pib_perCapita = carta01(pib_perCapita, pib_perCapita1);
   //Comparar a carta 02 com a carta 01
   const char* comp_populacao1 = carta01(populacao1, populacao);
   const char* comp_area1 = carta01(area1, area);
   const char* comp_pib1 = carta01(pib1, pib);
   const char* comp_n_turista1 = carta01(numero_p_turistico1, numero_p_turistico);
   const char* comp_densidade1 = densid_carta02(densidade1, densidade);
   const char* comp_pib_perCapita1 = carta01(pib_perCapita1, pib_perCapita);
   //Impressão das cartas
   printf("*************Carta 01************\n");
   printf(" Carta: %d\n Estado: %c\n Codigo: %s\n Cidade: %s\n Populacao: %lu %s\n Area: %f km2 %s\n Pib: %2.lf reais %s\n Numero de Turista: %d %s\n Densidade Populacional: %2.f hab/km2 %s\n PIB per Capita: %2.f reais %s\n", 
   carta, estado, codigo, cidade, populacao, comp_populacao, area, comp_area, pib, comp_pib, numero_p_turistico, comp_n_turista, densidade, comp_densidade, pib_perCapita, comp_pib_perCapita);
   printf("*************Carta 02************\n");
   printf(" Carta: %d\n Estado: %c\n Codigo: %s\n Cidade: %s\n Populacao: %lu %s\n Area: %f km2 %s\n Pib: %2.lf reais %s\n Numero de Turista: %d %s\n Densidade Populacional: %2.f hab/km2 %s\n PIB per Capita: %2.f reais %s\n", 
   carta1, estado1, codigo1, cidade1, populacao1, comp_populacao1, area1, comp_area1, pib1, comp_pib1, numero_p_turistico1, comp_n_turista1, densidade1, comp_densidade1, pib_perCapita1, comp_pib_perCapita1);

   
   return 0;
}