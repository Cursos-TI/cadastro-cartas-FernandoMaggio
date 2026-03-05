#include <stdio.h>

int main()
{
    int carta;
    char A;
    char codigo[4];
    char cidade[30];
    int populacao;
    float area;
    float PIB;
    int pontoturistico;

    // Inserção de dados para cadastro das cartas.

    // Carta 1

    printf("Insira a letra de um estado de A a H : \n");
    scanf(" %c", &A);

    printf("Insira o código da carta : \n");
    scanf("%s", codigo);

    printf("Insira a cidade : \n");
    scanf("%s", cidade);

    printf("Insira a população : \n");
    scanf("%d", &populacao);

    printf("Insira a aréa em km² : \n");
    scanf("%f", &area);

    printf("Insira o PIB : \n");
    scanf("%f", &PIB);

    printf("Insira o numero de pontos turisticos : \n");
    scanf("%d", &pontoturistico);

    // Impressão da carta 1

    printf("Dado cadastrado! O estado é : %c \n", A);
    printf("Dado cadastrado! A cidade é : %s \n", cidade);
    printf("Dado cadastrado! O codigo é : %s \n", codigo);
    printf("Dado cadastrado! A população é : %d \n", populacao);
    printf("Dado cadastrado! A aréa é : %.3f KM² \n", area);
    printf("Dado cadastrado! O PIB é : %.3f Bilhões! \n", PIB);
    printf("Dado cadastrado! O número de pontos turísticos é : %d \n", pontoturistico);

    ////////////////
    /*
    A
    Osasco
    756952
    64.95
    86.100
    6

    */

    ///////////////

    // cadastro de dados carta 2

    int carta2;
    char B;
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    float area2;
    float PIB2;
    int pontoturistico2;

    printf("Insira a letra de um estado de A a H da segunda carta : \n");
    scanf(" %c", &B);

    printf("Insira o código da segunda carta : \n");
    scanf("%s", codigo2);

    printf("Insira a cidade da segunda carta : \n");
    scanf("%s", cidade2);

    printf("Insira a população da segunda carta : \n");
    scanf("%d", &populacao2);

    printf("Insira a aréa em km² da segunda carta : \n");
    scanf("%f", &area2);

    printf("Insira o PIB da segunda carta : \n");
    scanf("%f", &PIB2);

    printf("Insira o numero de pontos turisticos da segunda carta : \n");
    scanf("%d", &pontoturistico2);

    // impressão 2° carta

    printf("Dado da segunda carta cadastrado! O estado é : %c \n", B);
    printf("Dado da segunda carta cadastrado! A cidade é : %s \n", cidade2);
    printf("Dado da segunda carta cadastrado! O codigo é : %s \n", codigo2);
    printf("Dado da segunda carta cadastrado! A população é : %d \n", populacao2);
    printf("Dado da segunda carta cadastrado! A aréa é : %.3f KM² \n", area2);
    printf("Dado da segunda carta cadastrado! O PIB é: %.3f Bilhões! \n", PIB2);
    printf("Dado da segunda carta cadastrado! O número de pontos turísticos é :%d \n", pontoturistico2);

    ////////////////
    /*
    B
    BeloHorizonte
    2416339
    331.35
    130.200
    25
    */
    ///////////////

    return 0;
}