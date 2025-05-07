#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    #include <stdio.h>

    int main () {
        // carta1
        
        char Estado1;
        char Código1[50];
        char NomedoEstado1[50];
        int População1;
        float Área1;
        float Pib1;
        int PontosTuristicos1;
    
        // carta 2 
    
        char Estado2;
        char Código2[4];
        char NomedoEstado2[50];
        int População2;
        float Área2;
        float Pib2;
        int PontosTuristicos2;
      
        // Entrada de dados carta 1
      
    
        printf ("Digite a letra do seu Estado  1: \n");
        scanf ("%s", &Estado1);
    
        printf ("Digite o Código 1: \n");
        scanf ("%s", &Código1);
    
        printf ("Digite o Nome do Estado 1: \n");
        scanf ("%s", &NomedoEstado1);
         
        printf ("Digite a População 1: \n");
        scanf ("%d", &População1);
    
        printf ("Digite a Área 1: \n");
        scanf ("%f", &Área1);
    
        printf ("Digite o Pib 1: \n");
        scanf ("%f", &Pib1);
        
        printf ("Digite o Numero de pontos turisticos 1: \n");
        scanf ("%d", &PontosTuristicos1);
    
      
       // carta 2 entrada de dados 
    
        printf ("Digite a letra do seu Estado  2: \n");
        scanf ("%s", &Estado2);
    
        printf ("Digite o Código 2: \n");
        scanf ("%s", &Código2);
    
        printf ("Digite o Nome do Estado 2: \n");
        scanf ("%s", &NomedoEstado2);
         
        printf ("Digite a População 2: \n");
        scanf ("%d", &População2);
    
        printf ("Digite a Área 2: \n");
        scanf ("%f", &Área2);
    
        printf ("Digite o Pib 2: \n");
        scanf ("%f", &Pib2);
        
        printf ("Digite o Numero de pontos turisticos 2: \n");
        scanf ("%d", &PontosTuristicos2);
    
        return 0;
    }
    