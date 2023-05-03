#include <stdio.h>

int main(void) {

    int n, i, melhorVolta = 0;
    float tempo, melhorTempo = 9999, tempoMedio;

    printf("Digite o numero de voltas: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        printf("Digite o tempo da volta %d: ", i);
        scanf("%f", &tempo);

        tempoMedio += tempo;

        if (tempo < melhorTempo) {
            melhorTempo = tempo;
            melhorVolta = i;
        }
    }

    tempoMedio /= n;

    printf("\nO melhor tempo foi de %.2f ", melhorTempo);
    printf("\nA melhor volta foi a volta %d ", melhorVolta);
    printf("\nTempo medio das voltas: %.2f segundos\n", tempoMedio);

    return 0;
}