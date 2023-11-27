#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct Pessoa{
    char nome[50];
    int idade;
    int id;
    struct Pessoa *prox; //ponteiro que armazena o endereco da proxima pessoa
}Pessoa;

//funcao para criar um novo registro
Pessoa* criarPessoa(){
    Pessoa *novaPessoa = (Pessoa*)malloc(sizeof(Pessoa));
    if(novaPessoa == NULL){
        printf("Erro de alocacao de memoria");
        exit(EXIT_FAILURE);
    }
    novaPessoa->prox = NULL;
    return novaPessoa;
}

Pessoa* cadastrar(Pessoa *lista){
    srand(time(NULL));
    Pessoa *novaPessoa = criarPessoa();
    novaPessoa->id = rand() % 100;
    printf("Digite o nome: ");
    fflush(stdin);
    fgets(novaPessoa->nome, sizeof(novaPessoa->nome), stdin);
    printf("Digite a idade: ");
    scanf("%d", &novaPessoa->idade);
    //verificar se a lista é nula
    if(lista == NULL){
        return novaPessoa;
    }else{
        Pessoa *atual = lista;
        while(atual->prox != NULL){
            atual = atual->prox;
            //sai da repeticao quando encontrar o elemento que aponta para NULL
        }
        atual->prox = novaPessoa;
        return lista;//atualizar a lista
    }
}
void mostrarLista(Pessoa *lista){
    Pessoa *atual = lista;
    if(lista == NULL){
        printf("\nLista nula");
        return;
    }else{
    while(atual != NULL){
        printf("\nNome: %s", atual->nome);
        printf("\nIdade: %d", atual->idade);
        printf("\nID: %d", atual->id);
        printf("\n");
        atual = atual->prox;
    }
    }
}
void buscarPessoa(Pessoa *lista, int idBusca){
    Pessoa *atual = lista;
    while(atual != NULL){
        if(atual->id == idBusca){
            printf("\nNome: %s", atual->nome);
            printf("\nIdade: %d", atual->idade);
            printf("\nID: %d", atual->id);
            return atual;
        }
        atual = atual->prox;
    }
    printf("Pessoa nao encontrada");
    return NULL;
}
void alterar(Pessoa *pessoa){
    printf("Digite o novo nome");
    fflush(stdin);
    fgets(pesssoa->nome, sizeof(pessoa->nome),stdin);
    fflush(stdin);
    printf("Digite a nova idade");
    fflush(stdin);
    scanf("%d",&pessoa->idade); 
}
Pessoa* excluir(Pessoa *lista, int idBusca){
    Pessoa *atual = lista;
    Pessoa *anterior = NULL;

    while(atual != NULL && atual->id != idBusca){
        atual = atual->prox;
        anterior = atual;
    } 
    if(atual != NULL){
        if(anterior != NULL){
            //exclusao alguem depois de maria
            anterior->prox = atual->prox;
        }else{
            //excluir a maria (primeiro da lista)
            lista = atual->prox;
        }
        free(atual);
        printf("Removido com sucesso");
    }else{
        printf("Pessoa nao encontrada");
    }
    return lista;
}
void liberarLista(Pesso *lista){
    Pessoa *atual = lista;
    Pessoa *prox;

    while(atual != NULL){
        prox = atual->prox;
        free(atual);
        atual = prox;
    }
}
int main(){
    int opcao;
    int idBusca;
    Pessoa *encontrada;//armazena a pessoa encontrada para excluir
    Pessoa *lista = criarListaVazia(); // sempre vai ser o primeiro da lista
    
    do{
        printf("\nDigite 1 para cadastrar");
        printf("\nDigite 2 para mostrar");
        printf("\nDigite 3 para buscar");
        printf("\nDigite 4 para alterar");
        printf("\nDigite 5 para excluir");
        printf("\nDigite 0 para sair");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
            lista = cadastrar(lista);
            break;
            case 2:
            mostrarLista(lista);
            break;
            case 3:
            printf("Digite o id para busca");
            scanf("%d", &idBusca);
            encontrada = buscarPessoa(lista, idBusca);
            break;
            case 4:
            printf("Digite o id para alteracao");
            scanf("%d", &idBusca);
            encontrada = buscarPessoa(lista, idBusca);
            if(encontrada != NULL){
                alterar(encontrada);
            }
            break;
            case 5:
             printf("Digite o id para exclusao");
            scanf("%d", &idBusca);
            lista = excluir(lista, idBusca);
            break;
        }
    }while(opcao != 0);
    
    liberarLista(lista);

    return 0;
}