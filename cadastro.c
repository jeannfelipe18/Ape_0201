#include<stdio.h>
#include<string.h>
#define TAM_LISTA 3
//declaração de registro
typedef struct{
    char nome[20];
    int idade;
    int id;
    int status;
}Pessoa;

void cadastrar(Pessoa p[], int indice){
    p[indice].status = 1; //ativo no momento cadastro
    p[indice].id = rand() % 100; //gerar id automatico
    fflush(stdin);
    printf("\nDigite o nome da pessoa: ");
    fflush(stdin);
    fgets(p[indice].nome, sizeof(p[indice].nome), stdin);
    fflush(stdin);
    printf("\nDigite a idade da pessoa: ");
    scanf("%d", &p[indice].idade);
}
void imprimirLista(Pessoa p[], int tamanhoLista){
    if(tamanhoLista == 0){
        printf("lista vazia");
    }else{
        for(int i = 0; i < tamanhoLista; i++){
            printf("Nome: %s", p[i].nome);
            printf("\nIdade: %d", p[i].idade);
            printf("\nID: %d", p[i].id);
            if(p[i].status == 1){
                printf("\nStatus: Ativo\n");
            }else{
                printf("\nStatus: Inativo\n");
            }
        }
    }
}
void buscar(Pessoa p[], int tamanhoLista, int id){
    if(tamanhoLista == 0){
        printf("Lista vazia");
    }else{
        for(int i = 0; i < tamanhoLista; i++){
            if(p[i].id == id){
                printf("Registro encontrado");
                printf("\nNome: %s", p[i].nome);
                printf("\nIdade: %d", p[i].idade);
                return;
            }
        }
    }
    printf("\nRegistro não existe na lista");
}

void alterar(Pessoa p[], int tamanhoLista, int id){
    if(tamanhoLista == 0){
        printf("Lista vazia");
        return;
    }else{
        for(int i = 0; i < tamanhoLista, i++){
            if(p[i].id == id){
                printf("Registro encontrado");
                printf("\nNome: %s", p[i].nome);
                printf("\nIdade: %d", p[i].idade);
                printf("\n");
                printf("\nDigite 1 para alterar nome");
                printf("\nDigite 2 para alterar idade");
                printf("\nDigite 3 para alterar status");
                scanf("%d", opcao);
                switch(opcao){
                    case 1:
                    printf("Alteracao do nome: ");
                    fgets(p[i].nome, sizeof(p[i].nome), stdin);
                    case 2:
                }
            }
        }
    }
}
main(){
    Pessoa p[TAM_LISTA];
    int totalCadastro = 0, opcao, buscaId;
    do{
        printf("\nDigite 1 para cadastrar");
        printf("\nDigite 2 para mostrar lista");
        printf("\nDigite 3 para buscar");
        printf("\nDigite 4 para alterar");
        printf("\nDigite 5 para excluir");
        printf("\nDigite 0 para sair do sistema\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 1: // cadastrar
              if(totalCadastro < TAM_LISTA){
                cadastrar(p, totalCadastro);
                totalCadastro++;
            }else{
                printf("Total de cadastros atingido");
            }
            break;
            case 2:
            //imprimir
            imprimirLista(p, totalCadastro);
            break;
            case 3:
            //buscar
            printf("Digite o ID para buscar");
            scanf("%d", &buscaId);
            buscar(p, totalCadastro, buscaId);
            break;
            case 4:
            //alterar
            printf("Digite o ID para buscar");
            scanf("%d", &buscaId);
            alterar(p, totalCadastro, buscaId);
            break;
            case 5:
            //excluir
        }
    }while(opcao != 0);
}