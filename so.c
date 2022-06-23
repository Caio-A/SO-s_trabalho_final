#include<stdio.h>
#include"biblio_setters.h"
#include"biblio_models.h"



main(){
    int i = 1;

    int id = 0;

    esvazia_estacionamento(foreing_id_carros);

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
                id = verifica_id(id, foreing_id_carros);
                estacionamento[foreing_id_carros[id]].id = set_id(estacionamento, foreing_id_carros, id);
                set_placa(estacionamento, foreing_id_carros, id);
                estacionamento[foreing_id_carros[id]].ano = set_ano(estacionamento, foreing_id_carros, id);
                printf("ano = %d\n", estacionamento[foreing_id_carros[id]].ano);
                printf("placa = %s\n", estacionamento[foreing_id_carros[id]].placa);
            break;
            case 2:
                printf("oi\n");
            break;
        }
    }
}
