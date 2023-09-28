#include <stdio.h>

int main() {
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votosNulos = 0, votosEmBranco = 0;
    int voto;

    printf("Informe o seu voto (1, 2, 3, 4 para candidatos, 5 para voto nulo, 6 para voto em branco, ou 0 para encerrar): ");

    while (1) {
        scanf("%d", &voto);

        if (voto == 0) {
            break; 
        } else if (voto == 1) {
            candidato1++;
        } else if (voto == 2) {
            candidato2++;
        } else if (voto == 3) {
            candidato3++;
        } else if (voto == 4) {
            candidato4++;
        } else if (voto == 5) {
            votosNulos++;
        } else if (voto == 6) {
            votosEmBranco++;
        } else {
            printf("Voto inválido! Tente novamente.\n");
        }
    }

    printf("Resultado da votação:\n");
    printf("Candidato 1: %d votos\n", candidato1);
    printf("Candidato 2: %d votos\n", candidato2);
    printf("Candidato 3: %d votos\n", candidato3);
    printf("Candidato 4: %d votos\n", candidato4);
    printf("Votos Nulos: %d votos\n", votosNulos);
    printf("Votos em Branco: %d votos\n", votosEmBranco);

    return 0;
}
