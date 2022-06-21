#include<stdio.h>


typedef struct {
    int ano;
    char placa[8] ;
    char modelo[20];
    char marca[15];
    int id;
    char cor[10];
}Carro;


Carro estacionamento[30];
Carro cria_novo(Carro estacionamento, int foreing_id_carros);

main(){
    int i = 1;
    int foreing_id_carros = 0;

    while(i == 1){

        int escolha = 0;
        printf("Escolha uma opcao\n");
        printf("1\n");
        printf("2\n");
        scanf("%d", &escolha);

        switch(escolha)
        {
            case 0:
                printf("tchau\n");
                i = 0;
            break;
            case 1:
                printf("ola\n");
            break;
            case 2:
                printf("oi\n");
            break;
        }
    }
}


Carro cria_novo(Carro estacionamento, int foreing_id_carros, int ano, char placa, char marca, char cor){
    estacionamento[foreing_id_carros].ano = ano;
}
