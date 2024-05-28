#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Protótipos
void escolha(int valor);
int usuario(void);
void vencedor(int bot, int user);

//Função main
int main(void){
    int u, opcao = 0;
    system("cls"); //Limpa tela
    srand(time(NULL)); //Define a aleatoriedade da função rand

    printf("\n\nBem-vindo ao jogo de Pedra, Papel, Tesoura!\n");

    //Escolhas do usuário e computador
    u = usuario();
    opcao = (rand() % 3);
    printf("Escolha do computador: ");
    escolha(opcao);

    //Resultado
    vencedor(opcao, u);
    return 0;
}

//Função que transcreve a escolha de um número em palavra
void escolha(int valor){
    if(valor == 0){
        printf("%s", "Pedra\n");
    }
    if(valor == 1){
        printf("%s", "Papel\n");
    }
    if(valor == 2){
        printf("%s", "Tesoura\n");
    }
}

//Função da escolha do usuário
int usuario(void){
    int num;
    do{
        printf("Hora da escolha!\n0 - Pedra\n1 - Papel\n2 - Tesoura\n");
        printf("Digite aqui sua escolha: ");
        scanf("%d",&num);
        if(num < 0 || num > 2){
            printf("Erro!! Selecione uma opcao disponivel.\n");
        }
    }while(num < 0 || num > 2); //Evita que o usuário digite um número diferente das opções
    printf("\nEscolha do usuario: ");
    escolha(num);
    return num;
}

//Função que define o vencedor 
void vencedor(int bot, int user){
    int u, opcao = 0;
    srand(time(NULL));

    //Possíveis resultados
    if(bot == 0){
        if(user == 1){
            printf("\nParabens, Papel ganha de Pedra! Voce foi superior ao computador.");
        }
        if(user == 2){
            printf("\nInfelizmente Tesoura perde para Pedra. Portanto, agora a IA vai dominar o mundo!");
        }
    }
    if(bot == 1){
        if(user == 0){
            printf("\nInfelizmente Pedra perde para Papel. Portanto, agora a IA vai dominar o mundo!");
        }
        if(user == 2){
            printf("\nParabens, Tesoura ganha de Papel! Voce foi superior ao computador.");
        }
    }
    if(bot == 2){
        if(user == 0){
            printf("\nParabens, Pedra ganha de Tesoura! Voce foi superior ao computador.");
        }
        if(user == 1){
            printf("\nInfelizmente Papel perde para Tesoura. Portanto, agora a IA vai dominar o mundo!");
        }
    }
    if(bot == user){
        printf("\nOpa, parece que temos um empate! Vamos tentar novamente\n");
        
        u = usuario();

        opcao = (rand() % 3);
        printf("Escolha do computador: ");
        escolha(opcao);
        vencedor(opcao,u);
    }
}