#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para representar as informações de um veículo
struct Veiculo {
    char proprietario[50];
    char combustivel[20];
    char modelo[50];
    char cor[20];
    char chassi[50];
    int ano;
    char placa[8];
    struct Veiculo *prox;
};

// Função para adicionar um veículo à lista
void adicionarVeiculo(struct Veiculo **lista, struct Veiculo *novoVeiculo) {
    novoVeiculo->prox = *lista;
    *lista = novoVeiculo;
}

// Função para listar proprietários cujos carros são do ano de 2010 ou posterior e que são movidos a diesel
void listarProprietariosAnoDiesel(struct Veiculo *lista) {
    while (lista != NULL) {
        if (lista->ano >= 2010 && strcmp(lista->combustivel, "diesel") == 0) {
            printf("Proprietario: %s\n", lista->proprietario);
        }
        lista = lista->prox;
    }
}

// Função para listar placas que começam com a letra J e terminam com 0, 2, 4 ou 7 e seus respectivos proprietários
void listarPlacasJ(struct Veiculo *lista) {
    while (lista != NULL) {
        if (lista->placa[0] == 'J' &&
            (lista->placa[7] == '0' || lista->placa[7] == '2' || lista->placa[7] == '4' || lista->placa[7] == '7')) {
            printf("Placa: %s, Proprietario: %s\n", lista->placa, lista->proprietario);
        }
        lista = lista->prox;
    }
}

// Função para listar modelo e cor dos veículos cujas placas possuem como segunda letra uma vogal
// e cuja soma dos valores numéricos é par
void listarModeloCorVogalSomaPar(struct Veiculo *lista) {
    while (lista != NULL) {
        char vogais[] = "aeiouAEIOU";
        if (strchr(vogais, lista->placa[1]) != NULL) {
            int soma = 0;
            for (int i = 0; i < 7; i++) {
                soma += lista->placa[i + 1] - '0';
            }
            if (soma % 2 == 0) {
                printf("Modelo: %s, Cor: %s\n", lista->modelo, lista->cor);
            }
        }
        lista = lista->prox;
    }
}

// Função para trocar o proprietário com o fornecimento do número do chassi
// apenas para carros com placas que não possuam nenhum dígito igual a zero
void trocarProprietarioSemZero(struct Veiculo *lista, const char *chassi, const char *novoProprietario) {
    while (lista != NULL) {
        if (strcmp(lista->chassi, chassi) == 0 && strpbrk(lista->placa, "0") == NULL) {
            strcpy(lista->proprietario, novoProprietario);
            printf("Proprietario trocado para %s\n", novoProprietario);
            return;
        }
        lista = lista->prox;
    }
    printf("Nenhum veículo com o chassi fornecido ou com dígito zero na placa encontrado.\n");
}

// Função para cadastrar um novo veículo
void cadastrarVeiculo(struct Veiculo **lista) {
    struct Veiculo *novoVeiculo = malloc(sizeof(struct Veiculo));

    printf("Informe o Proprietario: ");
    scanf("%s", novoVeiculo->proprietario);

    printf("Informe o Combustivel (álcool, diesel ou gasolina): ");
    scanf("%s", novoVeiculo->combustivel);

    printf("Informe o Modelo: ");
    scanf("%s", novoVeiculo->modelo);

    printf("Informe a Cor: ");
    scanf("%s", novoVeiculo->cor);

    printf("Informe o Número do chassi: ");
    scanf("%s", novoVeiculo->chassi);

    printf("Informe o Ano: ");
    scanf("%d", &novoVeiculo->ano);

    printf("Informe a Placa (três letras seguidas por quatro números): ");
    scanf("%s", novoVeiculo->placa);

    // Adiciona o novo veículo à lista
    adicionarVeiculo(lista, novoVeiculo);
}

// Função principal
int main() {
    struct Veiculo *listaVeiculos = NULL;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1 - Cadastrar veículo\n");
        printf("2 - Listar proprietários de carros a diesel do ano de 2010 ou posterior\n");
        printf("3 - Listar placas que começam com a letra J e terminam com 0, 2, 4 ou 7\n");
        printf("4 - Listar modelo e cor dos veículos com placas específicas\n");
        printf("5 - Trocar proprietário com fornecimento do número do chassi\n");
        printf("0 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarVeiculo(&listaVeiculos);
                break;
            case 2:
                listarProprietariosAnoDiesel(listaVeiculos);
                break;
            case 3:
                listarPlacasJ(listaVeiculos);
                break;
            case 4:
                listarModeloCorVogalSomaPar(listaVeiculos);
                break;
            case 5: {
                char chassiTroca[50];
                char novoProprietario[50];
                printf("Informe o número do chassi: ");
                scanf("%s", chassiTroca);
                printf("Informe o novo proprietario: ");
                scanf("%s", novoProprietario);
                trocarProprietarioSemZero(listaVeiculos, chassiTroca, novoProprietario);
                break;
            }
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 0);

    // Libere a memória alocada para os veículos
    while (listaVeiculos != NULL) {
        struct Veiculo *temp = listaVeiculos;
        listaVeiculos = listaVeiculos->prox;
        free(temp);
    }

    return 0;
}
