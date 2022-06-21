#include<stdio.h>
#include"biblio_setters.h"
#include"biblio_models.h"



main(){
    int i = 1;
    int foreing_id_carros = 0;

    while(i == 1){

        int escolha = 1;
        int menu;
        escolha = printa_menu(escolha);
        switch(escolha)
        {
            case 0:
                i = 0;
            break;
            case 1:
                estacionamento[foreing_id_carros].id = set_id(estacionamento, foreing_id_carros);
                estacionamento[foreing_id_carros].placa = set_placa(estacionamento, foreing_id_carros);
                estacionamento[foreing_id_carros].ano = set_ano(estacionamento, foreing_id_carros);
                printf("%d\n", estacionamento[foreing_id_carros].ano);
                printf("%s", estacionamento[foreing_id_carros].placa);
            break;
            case 2:
                printf("oi\n");
            break;
        }
    }
}
