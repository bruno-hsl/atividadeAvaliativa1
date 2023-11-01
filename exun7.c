#include <stdio.h>

int main() {
    int numAlunos = 30;
    float notas[numAlunos], medias[numAlunos];
    float mediaGeral = 0;

    for (int i = 0; i < numAlunos; i++) {
        float n1, n2, n3;

        printf("Aluno %d:\n", i + 1);
        printf("Digite a primeira nota: ");
        scanf("%f", &n1);
        printf("Digite a segunda nota: ");
        scanf("%f", &n2);
        printf("Digite a terceira nota: ");
        scanf("%f", &n3);

        medias[i] = (n1 * 2 + n2 * 4 + n3 * 3) / 10;

        mediaGeral += medias[i];

        
        if (medias[i] >= 7) {
            printf("Média: %.2f (Aprovado)\n", medias[i]);
        } else {
            printf("Média: %.2f (Reprovado)\n", medias[i]);
        }
    }

    
    mediaGeral /= numAlunos;

    printf("\nMedia geral da turma: %.2f\n", mediaGeral);

    return 0;
}
