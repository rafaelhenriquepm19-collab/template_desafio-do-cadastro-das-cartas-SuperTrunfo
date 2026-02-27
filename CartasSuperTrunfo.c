#include <stdio.h>
int main(){
    char estado1; 
    char codigo1[5];
    char cidade1[20]; 
    int populacao1;
    float area1_km; 
    double pib1; 
    int pontos_turisticos1; 
    char nome[50]; 

    char estado2; 
    char codigo2[5]; 
    char cidade2[20];
    int populacao2; 
    float area2_km; 
    double pib2; 
    int pontos_turisticos2;

    //Coleta de dados CARTA1:
    printf("Bem vindo ao Super Trunfo, jogador!\nQual o seu nome? "); 
    scanf("%s", nome);  
    printf("Prazer %s, vamos iniciar o jogo.\nCrie a CARTA 1!\n", nome); 
     

    printf("Escolha uma letra de A a H para representar o seu estado: "); 
    scanf(" %c", &estado1); 
    printf("ESTADO: %c\n", estado1);  

    printf("Digite um número de %c01 a %c04 para o seu código: ", estado1, estado1); 
    scanf("%s", codigo1); 
    printf("Código da carta: %s\n", codigo1); 

    printf("Digite o nome da cidade: "); 
    scanf("%s", cidade1);
    printf("Cidade: %s\n", cidade1);

    printf("Digite o tamanho da população de %s: ", cidade1); 
    scanf("%d", &populacao1);  
    printf("População: %d habitantes\n", populacao1);  

    printf("Digite o tamanho da área de %s: ", cidade1); 
    scanf("%f", &area1_km); 
    printf("Tamanho da área: %.2f km²\n", area1_km); 
    float densidade1 = (float) populacao1 / area1_km;

    printf("Digite o PIB de %s em bilhões: ", cidade1); 
    scanf("%lf", &pib1); 
    printf("PIB: R$%.2f bilhões\n", pib1);
    double pib_capita1; 
    double pib_reais1 = pib1 * 1000000000.0;
    pib_capita1 = pib_reais1 / populacao1;     

    printf("Digite a quantidade de pontos turísticos: "); 
    scanf("%d", &pontos_turisticos1); 
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);


    //Coleta de dados CARTA 2:  
    printf("Agora vamos criar a segunda carta! Ela deve ser completamente diferente da CARTA 1.\nCARTA 2:\n"); 

    printf("Escolha uma inicial de A a H: ");
    scanf(" %c", &estado2);
    printf("Estado: %c\n", estado2);
    
    printf("Digite um número de %c01 até %c04: ", estado2, estado2); 
    scanf("%s", codigo2); 
    printf("Código da carta: %s\n", codigo2);

    printf("Escolha uma cidade: "); 
    scanf("%s", cidade2);
    printf("Cidade: %s\n", cidade2); 

    printf("Digite o tamanho da população de %s: ", cidade2); 
    scanf("%d", &populacao2); 
    printf("População: %d habitantes\n", populacao2); 

    printf("Digite o tamanho da área de %s: ", cidade2); 
    scanf("%f", &area2_km); 
    printf("Área: %.2f km²\n", area2_km);
    float densidade2 = (float) populacao2 / area2_km;  
    

    printf("Digite o pib de %s em bilhões: ", cidade2); 
    scanf("%lf", &pib2); 
    printf("PIB: R$%.2f bilhões\n", pib2);
    double pib_capita2; 
    double pib2_reais = pib2 * 1000000000.0; 
    pib_capita2 = pib2_reais / populacao2; 

    printf("Digite a quantidade de pontos turísticos de %s: ", cidade2); 
    scanf("%d", &pontos_turisticos2);
    printf("Números de pontos turísticos: %d\n", pontos_turisticos2);


    //CARTA 1:
    printf("CARTA 1:\n");
    printf("Estado: %c\nCódigo da carta: %s\nCidade: %s\n", estado1, codigo1, cidade1); 
    printf("População: %d habitantes\nÁrea: %.2f km²\nPIB: R$%.2f bilhões\n", populacao1, area1_km, pib1);
    printf("Número de pontos turísticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_capita1);  
 

    //CARTA 2: 
    printf("CARTA 2:\n"); 
    printf("Estado: %c\nCódigo da carta: %s\nCidade: %s\n", estado2, codigo2, cidade2); 
    printf("População: %d habitantes\nÁrea: %.2f km²\nPIB: R$%.2f bilhões\n", populacao2, area2_km, pib2);
    printf("Números de pontos turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2); 
    printf("PIB per capita: %.2f reais\n", pib_capita2); 

    return 0; 

}