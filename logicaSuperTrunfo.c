#include <stdio.h>
junior
// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

int main (){

    int codigo1, codigo2, pontos_turisticos1, pontos_turisticos2; 
    char cidade1[50], cidade2[50];
    float pib1, pib2, area1, area2, populacao1, populacao2, densidade1, densidade2;
    
    printf("Digite o código da cidade: \n");
    scanf("%d", &codigo1);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("População: \n");
    scanf("%f", &populacao1);

    printf("Pontos Turisticos: \n");
    scanf("%d", &pontos_turisticos1);
    ///////////CIDADE 2/////////
    printf("Digite o código da cidade: \n");
    scanf("%d", &codigo2);
    
    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("População: \n");
    scanf("%f", &populacao2);

    printf("Pontos Turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    densidade1 = (area1 / populacao1);
    densidade2 = (area2 /populacao2);
   
    if (populacao1 > populacao2) {
    printf("A Cidade %s tem maior população.\n", cidade1);
    } else {
    printf("A Cidade %s tem maior população. \n", cidade2);
    }
   
    if (pib1 > pib2) {
    printf("A Cidade %s tem o maior PIB.\n", cidade1);
    } else {
    printf("A Cidade %s tem o maior PIB. \n", cidade2);
    }

    if (area1 > area2) {
    printf("A Cidade %s  tem a maior Área por km².\n", cidade1);
    } else {
    printf("A Cidade %s  tem a maior Área por km². \n", cidade2);
    }

    if (pontos_turisticos1 > pontos_turisticos2) {
    printf("A Cidade %s tem mais pontos turisticos.\n", cidade1);
    } else {
    printf("A Cidade %s tem mais pontos turisticos. \n", cidade2);
    }
    if (densidade1 < densidade2) {
    printf("Densidade Populacional %s.\n", cidade1);
    } else {
    printf("Densidade Populacional %s. \n", cidade2);
    }
}


    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
