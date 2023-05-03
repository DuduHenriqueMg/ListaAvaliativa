#include <stdio.h>
#define minTimes 3
#define maxTimes 9
#define minJogadores 6
#define maxJogadores 11

int main(void) {

    int times, jogadores, menores = 0, maiores = 0, pesoAcima;
    float idade, peso, somaPesos, somaIdade, mediaIdade, mediaPeso, porcentagemPeso, pesoMaiores;
    
    do{
        printf("\nDigite o quantidade de times (de 3 e 9 times): ");
        scanf("%d", &times);

        if (times < minTimes || times > maxTimes){
            printf("Quantidade de times invalida");
        }
        
    } while (times < minTimes || times > maxTimes);
    
    for (int i = 1; i <= times; i++){

        somaIdade = 0;
        somaPesos = 0;

        do{
            printf("\nDigite o quantidade de jogadores (de 6 e 11 jogadores): ");
            scanf("%d", &jogadores);

            if (jogadores < minJogadores || jogadores > maxJogadores){
                printf("Quantidade de jogadores invalida\n");
            }
        
        }while (jogadores < minJogadores || jogadores > maxJogadores);

        for (int j = 1; j <= jogadores; j++){
            printf("Insira a idade do jogador %d do time %d: ", j, i);
            scanf("%f", &idade);

            printf("Insira o peso do jogador %d do time %d: ", j, i);
            scanf("%f", &peso);

            somaIdade += idade;
            somaPesos += peso;

            if (idade < 18){
                menores++;
            }
            if (idade > 25){
                maiores++;
                pesoMaiores += peso;
            }else{
                maiores = 0;
            }
            
            if (peso > 80){
                pesoAcima++;
            }
              
        }

        if (maiores>0){
            mediaPeso = pesoMaiores / maiores;
            printf("Time %d - Média do peso dos jogadores acima de 25 anos: %.2f\n", i, mediaPeso);
        }
        
        mediaIdade = somaIdade / jogadores;
        printf("Time %d - Média das idades dos jogadores: %.2f\n", i, mediaIdade);    
        
    }

    porcentagemPeso = (pesoAcima * 100.0) / jogadores;
    printf("Quantidade de jogadores menores de idade: %d\n", menores);
    printf("Quantidade de jogadores com mais de 80 kg: %d - Porcentagem de jogadores com mais de 80 kg: %.2f\n", pesoAcima, porcentagemPeso);
    
    return 0;
}