#include <stdio.h>

int main() {
    float salario, maiorSalario = 0;
    int numeroFilhos, totalPessoas = 0, pessoasComSalarioAte100 = 0;
    float somaSalarios = 0, somaNumeroFilhos = 0;

    do {
       
        printf("Digite o salario: ");
        scanf("%f", &salario);

        if (salario >= 0) {
           
            if (salario <= 100) {
                pessoasComSalarioAte100++;
            }

            printf("Digite o numero de filhos: ");
            scanf("%d", &numeroFilhos);

            
            somaSalarios += salario;
            somaNumeroFilhos += numeroFilhos;

           
            if (salario > maiorSalario) {
                maiorSalario = salario;
            }

            totalPessoas++;
        }
        printf("\n");
    } while (salario >= 0);

    if (totalPessoas > 0) {
       
        float mediaSalario = somaSalarios / totalPessoas;
        float mediaNumeroFilhos = somaNumeroFilhos / totalPessoas;

        float percentualSalarioAte100 = (float)pessoasComSalarioAte100 / totalPessoas * 100;

        printf("a) Media do salario da populacao: %.2f\n", mediaSalario);
        printf("b) Media do namero de filhos: %.2f\n", mediaNumeroFilhos);
        printf("c) Maior salario: %.2f\n", maiorSalario);
        printf("d) Percentual de pessoas com salario ata R$100,00: %.2f%%\n", percentualSalarioAte100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
