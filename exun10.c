#include <stdio.h>
#include <string.h>

int main() {
    int codigo, numVeiculos, numAcidentes;
    char estado[3];
    char cidadeMaiorAcidente[50], cidadeMenorAcidente[50];
    int maiorAcidente = -1, menorAcidente = -1;
    int totalVeiculos = 0;
    int cidades_rs = 0;
    float mediaAcidentes_rs, media_veiculos, totalAcidentes_rs = 0;

    for (int i = 0; i < 2; i++) {
        
        printf("Cidade %d:\n", i + 1);
        printf("Codigo da cidade: ");
        scanf("%d", &codigo);
        printf("Estado (sigla): ");
        scanf("%s", &estado);
        printf("Numero de veiculos de passeio (em 1992): ");
        scanf("%d", &numVeiculos);
        printf("Numero de acidentes de transito com vitimas (em 1992): ");
        scanf("%d", &numAcidentes);

        totalVeiculos += numVeiculos;

        
        if(estado == "rs"){
            totalAcidentes_rs += numAcidentes;
            cidades_rs++;
            mediaAcidentes_rs = (float)totalAcidentes_rs / cidades_rs;  
        }
        else{
            printf("0 cidades no RS");
        }
        

        if (maiorAcidente == -1 || numAcidentes > maiorAcidente) {
            maiorAcidente = numAcidentes;
        }
        if (menorAcidente == -1 || numAcidentes < menorAcidente) {
            menorAcidente = numAcidentes;
           
        }
    }

    
     media_veiculos = (float)totalVeiculos / 200;

    
    

    printf("\nResultados:\n");
    printf("Maior indice de acidentes: %d (Cidade: %d) (Estado: %s)\n", maiorAcidente, codigo, estado);
    printf("Menor indice de acidentes: %d (Cidade: %d) (Estado: %s)\n", menorAcidente, codigo, estado);
    printf("Media de veiculos nas cidades brasileiras: %.2f\n", media_veiculos);
    printf("Media de acidentes com vitimas no Rio Grande do Sul: %.2f\n", mediaAcidentes_rs);

    return 0;
}
