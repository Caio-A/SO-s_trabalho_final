typedef struct {
    int ano;
    char placa[9] ;
    char modelo[20];
    char marca[10];
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

void set_id(Carro estacionamento[], int foreign_id_carros[], int id){
    estacionamento[foreign_id_carros[id]].id = id;
    foreign_id_carros[id] = 1;
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
    printf("Digite a marca do veiculo = ");
    scanf("%s", &marca);
    int i;
    for(i = 0; i<= 10; i++){
        estacionamento[foreign_id_carros[id]].marca[i] = marca[i];
    }
}

void set_cor(Carro estacionamento[], int foreign_id_carros[], int id){
    char cor[10];
    printf("Digite a cor do veiculo = ");
    scanf("%s", &cor);
    int i;
    for(i = 0; i<= sizeof(cor); i++){
        estacionamento[foreign_id_carros[id]].cor[i] = cor[i];
    }
}

void set_modelo(Carro estacionamento[], int foreign_id_carros[], int id){
    char modelo[20];
    printf("Digite a modelo do veiculo = ");
    scanf("%s", &modelo);
    int i;
    for(i = 0; i<= sizeof(modelo); i++){
        estacionamento[foreign_id_carros[id]].modelo[i] = modelo[i];
    }
    printf("id = %d\n", id);
}



//funçoes de verificaçao e rotina
void esvazia_estacionamento(int foreign_id_carros[]){
    int i;
    for(i = 0; i<=29; i++ ){
        foreign_id_carros[i] = 0;
    }
}

int verifica_id(int id, int foreign_id_carros[]){
    int i;
    for(i = 0; i<=29; i++ ){
        if(foreign_id_carros[i] == 0){
            printf("id encontrado %d!!", i);
            getchar();
            getchar();
            return i;
            i = 30;
        }
    }
}

void faz_registro(Carro estacionamento[], int foreing_id_carros[], int id){
    system("CLS");

    set_id(estacionamento, foreing_id_carros, id);
    set_placa(estacionamento, foreing_id_carros, id);
    set_modelo(estacionamento, foreing_id_carros, id);
    set_marca(estacionamento, foreing_id_carros, id);
    set_cor(estacionamento, foreing_id_carros, id);
    estacionamento[foreing_id_carros[id]].ano = set_ano(estacionamento, foreing_id_carros, id);



    system("CLS");


    printf("CARRO CADASTRADO!!\n");
    printf("PLACA = %s\n", estacionamento[foreing_id_carros[id]].placa);
    printf("MODELO = %s\n", estacionamento[foreing_id_carros[id]].modelo);
    printf("MARCA = %s\n", estacionamento[foreing_id_carros[id]].marca);
    printf("COR = %s\n", estacionamento[foreing_id_carros[id]].cor);
    printf("ANO DE FABRICACAO = %d\n", estacionamento[foreing_id_carros[id]].ano);
    printf("VAGA NUM = %d\n", estacionamento[foreing_id_carros[id]].id);
    getchar();
    getchar();
}


                //printf("ano = %d\n", estacionamento[foreing_id_carros[id]].ano);
                //printf("placa = %s\n", estacionamento[foreing_id_carros[id]].placa);
