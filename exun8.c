#include <stdio.h>

int main() {
    float salario, maiorSalario = 0;
    int numeroFilhos, totalPessoas = 0, pessoasComSalarioAte100 = 0;
    float somaSalarios = 0, somaNumeroFilhos = 0;

    do {
       
        printf("Digite o salário (ou um valor negativo para encerrar): ");
        scanf("%f", &salario);

        if (salario >= 0) {
           
            if (salario <= 100) {
                pessoasComSalarioAte100++;
            }

            printf("Digite o número de filhos: ");
            scanf("%d", &numeroFilhos);

            
            somaSalarios += salario;
            somaNumeroFilhos += numeroFilhos;

           
            if (salario > maiorSalario) {
                maiorSalario = salario;
            }

            totalPessoas++;
        }
    } while (salario >= 0);

    if (totalPessoas > 0) {
       
        float mediaSalario = somaSalarios / totalPessoas;
        float mediaNumeroFilhos = somaNumeroFilhos / totalPessoas;

        float percentualSalarioAte100 = (float)pessoasComSalarioAte100 / totalPessoas * 100;

        printf("a) Média do salário da população: %.2f\n", mediaSalario);
        printf("b) Média do número de filhos: %.2f\n", mediaNumeroFilhos);
        printf("c) Maior salário: %.2f\n", maiorSalario);
        printf("d) Percentual de pessoas com salário até R$100,00: %.2f%%\n", percentualSalarioAte100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}
