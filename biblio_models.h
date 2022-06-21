char linha[100] = "________________________________________________________";
char vertical = '|';

int printa_menu(int escolha){
        printf("BEM VINDO AO ESTACIONAMENTO EUSTACIO\n");
        printf("%s\n", linha);
        printf("-Para cadastrar um novo carro estacionado digite = 1!!\n");
        printf("-Para relatar a saida de um carro digite = 2 !!\n");
        printf("-Para sair do sistema digite = 0 !!\n");
        printf("\nEscolha=");
        scanf("%d", &escolha);
        return escolha;
}
