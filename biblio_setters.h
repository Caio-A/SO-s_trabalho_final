typedef struct {
    int ano;
    char placa[8] ;
    char modelo[20];
    char marca[15];
    int id;
    char cor[10];
}Carro;

Carro estacionamento[30];

//setters de carros
int set_ano(Carro estacionamento[], int foreign_id_carros){
    estacionamento[foreign_id_carros].ano = 1990;
    return estacionamento[foreign_id_carros].ano;
}

int set_id(Carro estacionamento[], int foreign_id_carros){
    estacionamento[foreign_id_carros].id = foreign_id_carros;
    return estacionamento[foreign_id_carros].id;
}

char set_placa(Carro estacionamento[], int foreign_id_carros){
    char placa[8];
    printf("Digite a placa do veiculo = ");
    scanf("%s", &placa);
    return placa;

}

