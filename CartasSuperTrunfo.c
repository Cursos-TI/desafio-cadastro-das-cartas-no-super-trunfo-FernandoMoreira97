#include <stdio.h>

int main () {
    // carta1
    
    char estado1;
    char código1[4];
    char nomedoEstado1[50];
    int população1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // carta 2 

    char estado2;
    char código2[4];
    char nomedoEstado2[50];
    int população2;
    float area2;
    float pib2;
    int pontosTuristicos2;
  
    // Entrada de dados carta 1
  

    printf ("Digite a letra do seu Estado  1: \n");
    scanf (" %c", &estado1);

    printf ("Digite o Código 1: \n");
    scanf ("%s", &código1);

    getchar ();
    printf ("Digite o Nome do Estado 1: \n");
    fgets(nomedoEstado1, sizeof(nomedoEstado1), stdin);
     
    printf ("Digite a População 1: \n");
    scanf ("%i", &população1);

    printf ("Digite a Área 1: \n");
    scanf ("%f", &area1);

    printf ("Digite o Pib 1: \n");
    scanf ("%f", &pib1);
    
    printf ("Digite o Numero de pontos turisticos 1: \n");
    scanf ("%d", &pontosTuristicos1);

  
   // carta 2 entrada de dados 

    printf ("Digite a letra do seu Estado  2: \n");
    scanf (" %c", &estado2);

    printf ("Digite o Código 2: \n");
    scanf ("%s", &código2);

    getchar ();
    printf ("Digite o Nome do Estado 2: \n");
    fgets (nomedoEstado2, sizeof(nomedoEstado2), stdin);
     
    printf ("Digite a População 2: \n");
    scanf ("%d", &população2);

    printf ("Digite a Área 2: \n");
    scanf ("%f", &area2);

    printf ("Digite o Pib 2: \n");
    scanf ("%f", &pib2);
    
    printf ("Digite o Numero de pontos turisticos 2: \n");
    scanf ("%d", &pontosTuristicos2);

    // Exibição de dados

    printf("Estado 1: %c\n- Codigo %s\n- Nome do estado %s\n", estado1, código1, nomedoEstado1);
    printf ("População %d\n", população1);
    printf ("Área %f\n", area1);
    printf ("Pib %f\n", pib1);
    printf ("Pontos Turisticos %d\n", pontosTuristicos1);

    printf ("Estado 2 %c \n", estado2 );
    printf ("Codigo %s\n", código2);
    printf ("Nome do Estado %s\n", nomedoEstado2);
    printf ("População %d\n", população2);
    printf ("Área %f\n", area2);
    printf ("Pib %f\n", pib2);
    printf ("Pontos Tursticos %d\n", pontosTuristicos2);

    return 0;
}
