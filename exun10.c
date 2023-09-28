#include <stdio.h>
#include <string.h>

int main() {
    int codigo, numVeiculos, numAcidentes;
    char estado[3];
    char cidade_maior_acidente[50], cidade_menor_acidente[50];
    int maior_acidente = -1, menor_acidente = -1;
    int total_veiculos = 0, totalAcidentes_rs = 0;
    int cidades_rs = 0;

    for (int i = 0; i < 200; i++) {
        
        printf("Cidade %d:\n", i + 1);
        printf("Código da cidade: ");
        scanf("%d", &codigo);
        printf("Estado (sigla): ");
        scanf("%s", estado);
        printf("Número de veículos de passeio (em 1992): ");
        scanf("%d", &numVeiculos);
        printf("Número de acidentes de trânsito com vítimas (em 1992): ");
        scanf("%d", &numAcidentes);

        total_veiculos += numVeiculos;

        
        if (strcmp(estado, "RS") == 0) {
            totalAcidentes_rs += numAcidentes;
            cidades_rs++;
        }

        if (maior_acidente == -1 || numAcidentes > maior_acidente) {
            maior_acidente = numAcidentes;
            strcpy(cidade_maior_acidente, estado);
        }
        if (menor_acidente == -1 || numAcidentes < menor_acidente) {
            menor_acidente = numAcidentes;
            strcpy(cidade_menor_acidente, estado);
        }
    }

    
    float media_veiculos = (float)total_veiculos / 200;

    
    float mediaAcidentes_rs = (float)totalAcidentes_rs / cidades_rs;

    printf("\nResultados:\n");
    printf("a) Maior índice de acidentes: %d (Cidade: %s)\n", maior_acidente, cidade_maior_acidente);
    printf("   Menor índice de acidentes: %d (Cidade: %s)\n", menor_acidente, cidade_menor_acidente);
    printf("b) Média de veículos nas cidades brasileiras: %.2f\n", media_veiculos);
    printf("c) Média de acidentes com vítimas no Rio Grande do Sul: %.2f\n", mediaAcidentes_rs);

    return 0;
}
