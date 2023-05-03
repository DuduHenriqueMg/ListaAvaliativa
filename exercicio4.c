#include <stdio.h>

char validaSexo() {

    char sexo;
    do {
        printf("Informe o sexo (M/F): ");
        scanf(" %c", &sexo);
        if (sexo != 'M' && sexo != 'F') {
            printf("Sexo invalido. Tente novamente.\n");
        }
    } while (sexo != 'M' && sexo != 'F');

    return sexo;
}

float validaSalario() {

    float salario;
    do {
        printf("Informe o salario: R$ ");
        scanf("%f", &salario);
        if (salario <= 1.0) {
            printf("Salario invalido. Deve ser maior que R$ 1,00. Tente novamente.\n");
        }
    } while (salario <= 1.0);

    return salario;
}

char* classificaSalario(float salario) {

    if (salario < 1400.0) {
        return "Abaixo do salario minimo";
    } else if (salario > 1400.0) {
        return "Acima do salario minimo";
    } else {
        return "Igual ao salario minimo";
    }
}

void mostraClassifica(char sexo, float salario, char* classificacao) {

    printf("Sexo: %s\n", sexo == 'M' ? "Masculino" : "Feminino");
    printf("Salario: R$ %.2f\n", salario);
    printf("Clasificacao em relacao ao salario minimo: %s\n", classificacao);
}

int main() {

    int qtdAssalariados, numAbaixo = 0, numAcima = 0;
    float salario;
    char sexo, *classificacao;

    printf("Informe o numero de assalariados: ");
    scanf("%d", &qtdAssalariados);

    for (int i = 1; i <= qtdAssalariados; i++) {

        printf("\nAssalariado %d:\n", i);
        sexo = validaSexo();
        salario = validaSalario();
        classificacao = classificaSalario(salario);
        mostraClassifica(sexo, salario, classificacao);

        if (salario < 1400.0) {
            numAbaixo++;
        } else if (salario > 1400.0) {
            numAcima++;
        }
    }

    printf("\nTotal de assalariados abaixo do salario minimo: %d\n", numAbaixo);
    printf("Total de assalariados acima do salario minimo: %d\n", numAcima);

    return 0;
}

