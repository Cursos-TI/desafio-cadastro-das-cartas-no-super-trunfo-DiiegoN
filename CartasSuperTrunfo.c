#include <stdio.h>

int main()
    {printf("Super Trunfo Paises!\n");
        
        char cidade [50],cidade2 [50], Estado, Estado2, Codigo[30], Codigo2[30];
        int Populacao, Populacao2;
        float Area, Area2, Pib, Pib2;
        int ponto, ponto2; 
    
    printf("Digite o Estado: \n");
    scanf("%s", &Estado);

    printf("Digite o codigo da carta: (ex: A01)\n");
    scanf("%s", &Codigo);

    printf("Digite o nome da cidade? \n");
    scanf ("%s", &cidade);

    printf("Digite a população de sua cidade: \n");
    scanf ("%d", &Populacao);

    printf("Digite a Área de sua cidade, em km²: \n");
    scanf("%f", &Area);

    printf("Digite o Pib de sua cidade: \n");
    scanf("%f \n", &Pib);

    printf("Quantos pontos turisticos existem em sua cidade? \n");
    scanf("%d \n", &ponto); 

    printf("Estado: %s \n", &Estado);
    printf ("Sua carta: %s\n", &Codigo);
    printf("Nome da cidade: %s\n", &cidade);
    printf("População: %d \n", &Populacao);
    printf("Área em km²: %f, \n", &Area);
    printf("Pib: %f \n", &Pib);
    printf("Pontos turisticos: %d \n", &ponto); 

    
    printf("Digite o Estado: \n");
    scanf("%s \n", &Estado2);

    printf("Digite o codigo da carta: (ex: A01)\n");
    scanf("%s \n", &Codigo2);

    printf("Digite o nome da cidade? \n");
    scanf ("%s \n", &cidade2);

    printf("Digite a população de sua cidade: \n");
    scanf ("%d \n", &Populacao2);

    printf("Digite a Área de sua cidade, em km²: \n");
    scanf("%f \n", &Area2);

    printf("Digite o Pib de sua cidade: \n");
    scanf("%f \n", &Pib2);

    printf("Quantos pontos turisticos existem em sua cidade? \n");
    scanf("%d \n", &ponto2);
    printf("Estado: %s \n", &Estado2);
    printf ("Sua carta: %s\n", &Codigo2);
    printf("Nome da cidade: %s\n", &cidade2);
    printf("População: %d \n", &Populacao2);
    printf("Área em km²: %f, \n", &Area2);
    printf("Pib: %f \n", &Pib2);
    printf("Pontos turisticos: %d \n", &ponto2); 
    
}
