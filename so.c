#include<stdio.h>
#include"biblio_setters.h"
#include"biblio_models.h"
#include <time.h>



main(){
    int i = 1;
    int id = 0;

    esvazia_estacionamento(foreing_id_carros);

    while(i == 1){

        int escolha;

        escolha = printa_menu(escolha);
        switch(escolha)
        {
            case 0:
                i = 0;
            break;
            case 1:
                system("CLS");
                id = verifica_id(id, foreing_id_carros);
                faz_registro(estacionamento,foreing_id_carros,id);
            break;
            case 2:
                printf("oi\n");
            break;
        }
    }
}
