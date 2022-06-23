typedef struct {
    int ano;
    char placa[9] ;
    char modelo[20];
    char marca[15];
    int id;
    char cor[10];
}Carro;

Carro estacionamento[30];
int foreing_id_carros[30];

//setters de carros
int set_ano(Carro estacionamento[], int foreign_id_carros[], int id){
    printf("Informe o ano de fabricaçao do carro = ");
    scanf("%d", &estacionamento[foreign_id_carros[id]].ano);
    return estacionamento[foreign_id_carros[id]].ano;
}

int set_id(Carro estacionamento[], int foreign_id_carros[], int id){
    estacionamento[foreign_id_carros[id]].id = foreign_id_carros;
    return estacionamento[foreign_id_carros[id]].id;
}

void set_placa(Carro estacionamento[], int foreign_id_carros[], int id){
    char placa[9];
    printf("Digite a placa do veiculo = ");
    scanf("%s", &placa);
    int i;
    for(i = 0; i<= sizeof(placa); i++){
        estacionamento[foreign_id_carros[id]].placa[i] = placa[i];
    }
}

void set_marca(Carro estacionamento[], int foreign_id_carros[], int id){
    char marca[15];
    printf("Digite a placa do veiculo = ");
    scanf("%s", &marca);
    int i;
    for(i = 0; i<= sizeof(marca); i++){
        estacionamento[foreign_id_carros[id]].marca[i] = marca[i];
    }
}

//funçoes de verificaçao e rotina
void esvazia_estacionamento(int foreign_id_carros[]){
    int i;
    for(i = 0; i<=sizeof(foreign_id_carros); i++ ){
        foreign_id_carros[i] = 0;
    }
}

int verifica_id(int id, int foreign_id_carros[]){
    int i;
    for(i = 0; i<=sizeof(foreign_id_carros); i++ ){
        if(foreign_id_carros[i] =! 0){
            return foreign_id_carros[i];
            i = sizeof(foreign_id_carros) + 1;
        }
    }
}
