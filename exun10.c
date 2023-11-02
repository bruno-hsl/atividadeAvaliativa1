#include <stdio.h>
#include <string.h>

int main(){
    int codigo[200], codigoMenor = 0;
    int numVeiculos[200], codigoMaior = 0;
    int numAcidentes[200];
    char estado[200][3];

    int menorAcidente = 0, maiorAcidente = 0;
    int totalVeiculos = 0;
    float mediaVeiculos, mediaRS;
    int totalRS = 0, cidadesRS = 0;

    for(int i = 0; i < 200; i++){
        printf("Codigo da cidade: ");
        scanf("%d", &codigo[i]);

        printf("Estado: ");
        scanf("%s", &estado[i]);

        printf("Numero de veiculos em 1992: ");
        scanf("%d", &numVeiculos[i]);

        printf("Numero de acidentes em 1992: ");
        scanf("%d", &numAcidentes[i]);
    }

    menorAcidente = numAcidentes[0];
    maiorAcidente = numAcidentes[0];

    for(int i = 0; i < 200; i++){
        if(numAcidentes[i] <= menorAcidente){
            menorAcidente = numAcidentes[i];
            codigoMenor = codigo[i];
        }

        if(numAcidentes[i] >= maiorAcidente){
            maiorAcidente = numAcidentes[i];
            codigoMaior = codigo[i];
        }
        totalVeiculos += numVeiculos[i];
        
        if(strcmp(estado[i], "RS") == 0 || strcmp(estado[i], "rs") == 0){
            totalRS += numAcidentes[i];
            cidadesRS ++;
        }
    }

    mediaVeiculos = (float)totalVeiculos / 200;
    mediaRS = (float)totalRS / cidadesRS;

   
    printf("Menor numero de acidentes [%d]. Cidade [%d]", menorAcidente, codigoMenor);
    printf("\nMaior numero de acidentes [%d]. Cidade [%d]", maiorAcidente, codigoMaior);
    printf("\nMedia de veiculos nas cidades brasileiras: %f", mediaVeiculos);
    printf("\nMedia de acidentes nas ciades do RS %f", mediaRS);


    return 0;
}
