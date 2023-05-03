#include <stdio.h>

float validaQuantidade(int funcionario) {

    float quantidade;

    printf("Digite a quantidade de pecas fabricadas pelo funcionario %d: ", funcionario);
    scanf("%f", &quantidade);

    while (quantidade < 0) {
        printf("Quantidade invalida. Digite novamente: ");
        scanf("%f", &quantidade);
    }
    return quantidade;
}

float calculaSalario(float quantidade) {

    float salario;

    if (quantidade <= 50) {
        salario = 600.00;
    } else if (quantidade > 50 && quantidade <= 80) {
        salario = 600.00 + (quantidade - 50) * 0.50;
    } else {
        salario = 600.00 + 30.00 * 0.50 + (quantidade - 80) * 0.75;
    }

    return salario;
}

void mostraFinal(int funcionario, float salario) {
    printf("O salario do funcionario %d e: R$ %.2f\n", funcionario, salario);
}

int main() {

    int funcionario = 1;
    float quantidade, salario;

    printf("Calculo de salario dos funcionarios da fabrica de pecas\n");

    while (1) {
        quantidade = validaQuantidade(funcionario);
        salario = calculaSalario(quantidade);
        mostraFinal(funcionario, salario);
        funcionario++;
        printf("\nDeseja continuar (S/N)? ");
        char resposta;
        scanf(" %c", &resposta);
        if (resposta != 'S' && resposta != 's') {
            break;
        }
    }

    return 0;
}
