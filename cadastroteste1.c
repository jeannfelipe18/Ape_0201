#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define TAM 1000

typedef struct {
    char nome[80];
    int idade;
    int id;
    int status;
    char sexo[15];
    char email[50];
    double altura;
    int vacina;
    char endereco[100];
} Aluno;

void cadastrar(Aluno a[], int indice) {
    a[indice].id = rand();
    fflush(stdin);
    printf("\nDigite o nome completo do aluno: ");
    fflush(stdin);
    fgets(a[indice].nome, sizeof(a[indice].nome), stdin);
    fflush(stdin);
    printf("Digite a idade do aluno: ");
    scanf("%d", &a[indice].idade);
    fflush(stdin);
    printf("Digite o email do aluno: ");
    fflush(stdin);
    fgets(a[indice].email, sizeof(a[indice].email), stdin);
    if (strchr(a[indice].email, '@') == NULL) {
        printf("Erro: E-mail inválido. O caractere '@' é obrigatório.\n");
        return;
    }
    printf("Digite o endereço do aluno: ");
    fflush(stdin);
    fgets(a[indice].endereco, sizeof(a[indice].endereco), stdin);
    printf("Digite o sexo do aluno: ");
    fflush(stdin);
    fgets(a[indice].sexo, sizeof(a[indice].sexo), stdin);
    if (a[indice].sexo == masculino || a[indice].sexo == feminino || a[indice].sexo == indiferente) {
        printf("Erro: Sexo inválido. Coloque masculino, feminino ou indiferente\n");
        return;
    printf("Digite a altura do aluno (entre 1 e 2 m): ");
    scanf("%lf", &a[indice].altura);
    fflush(stdin);
    if (a[indice].altura < 1 || a[indice].altura > 2) {
        printf("Erro: Altura inválida. Aceite valores entre 1 e 2 metros.\n");
        return;
    }
    printf("Vacina (1 para sim, 0 para não): ");
    scanf("%d", &a[indice].vacina);
    fflush(stdin);
    printf("\n\n");
}

void imprimir(Aluno a[], int totalCadastro) {
    if (totalCadastro == 0) {
        printf("\n\nnao existem alunos cadastrados");
    } else {
        for (int i = 0; i < totalCadastro; i++) {
            printf("\nId: %d", a[i].id);
            printf("\nNome: %s", a[i].nome);
            printf("\nIdade: %d", a[i].idade);
            printf("\nAltura: %lf", a[i].altura);
            printf("\nEmail: %s", a[i].email);
            printf("\nSexo: %s", a[i].sexo);
            printf("\nEndereço: %s", a[i].endereco);
            printf("\nVacinou: %d", a[i].vacina);
            a[i].status == 1 ? printf("\nStatus : Ativo") : printf("\nStatus : Inativo");
            printf("\n\n");
        }
    }
}

void buscarRegistro(Aluno a[], int totalCadastro) {
    char email[50];
    printf("Digite o e-mail do usuário a ser buscado: ");
    scanf("%s", email);

    for (int i = 0; i < totalCadastro; i++) {
        if (strcmp(a[i].email, email) == 0) {
            printf("Usuário encontrado:\n");
            printf("ID: %d\n", a[i].id);
            printf("Nome: %s\n", a[i].nome);
            printf("Idade: %d\n", a[i].idade);
            printf("Email: %s\n", a[i].email);
            printf("Sexo: %s\n", a[i].sexo);
            printf("Endereço: %s\n", a[i].endereco);
            printf("Altura: %.2lf\n", a[i].altura);
            printf("Vacina: %d\n", a[i].vacina);
            return;
        }
    }
    printf("\nRegistro nao encontrado na lista");
    return;
}

void alterarRegistro(Aluno a[], int totalCadastro, char buscarEmail[]) {
    int opcaoEscolhida;
    if (totalCadastro == 0) {
        printf("Lista vazia");
        return;
    } else {
        for (int i = 0; i < totalCadastro; i++) {
            if (strcmp(a[i].email, buscarEmail) == 0) {
                printf("\nNome: %s ", a[i].nome);
                printf("\nIdade: %d ", a[i].idade);
                printf("Email: %s\n", a[i].email);
                printf("Sexo: %s\n", a[i].sexo);
                printf("Endereço: %s\n", a[i].endereco);
                printf("Altura: %.2lf\n", a[i].altura);
                printf("Vacina: %d\n", a[i].vacina);
                a[i].status == 1 ? printf("\nStatus : Ativo") : printf("\nStatus : Inativo");

                printf("\nAlterar os dados: ");

                printf("Digite 1 para alterar o nome, Digite 2 para alterar a idade, Digite 3 para alterar o email ou Digite 4 para alterar o sexo, Digite 5 para alterar o endereço, Digite 6 para alterar a altura, Digite 7 para alterar a vacina, Digite 8 para alterar o status, Digite 9 para alterar todos os campos");
                scanf("%d", &opcaoEscolhida);
                switch (opcaoEscolhida) {
                case 1:
                    printf("Alteracao do nome: ");
                    fflush(stdin);
                    fgets(a[i].nome, sizeof(a[i].nome), stdin);
                    fflush(stdin);
                    break;
                case 2:
                    printf("Alteracao da idade: ");
                    fflush(stdin);
                    scanf("%d", &a[i].idade);
                    fflush(stdin);
                    break;
                case 3:
                    printf("Alteracao de email: ");
                    fflush(stdin);
                    scanf("%s", a[i].email);
                    fflush(stdin);
                    break;
                case 4:
                    printf("Alteracao de sexo: ");
                    fflush(stdin);
                    fgets(a[i].sexo, sizeof(a[i].sexo), stdin);
                    fflush(stdin);
                    break;
                case 5:
                    printf("Alteracao de endereço: ");
                    fflush(stdin);
                    fgets(a[i].endereco, sizeof(a[i].endereco), stdin);
                    fflush(stdin);
                    break;
                case 6:
                    printf("Alteracao da altura: ");
                    fflush(stdin);
                    scanf("%lf", &a[i].altura);
                    fflush(stdin);
                    break;
                case 7:
                    printf("Alteracao da vacina: ");
                    fflush(stdin);
                    scanf("%d", &a[i].vacina);
                    fflush(stdin);
                    break;
                case 8:
                    printf("Alteracao do status: 1 - Ativo / 0 - Inativo");
                    fflush(stdin);
                    scanf("%d", &a[i].status);
                    fflush(stdin);
                    break;
                case 9:
                    printf("Alteracao do nome: ");
                    fflush(stdin);
                    fgets(a[i].nome, sizeof(a[i].nome), stdin);
                    fflush(stdin);
                    printf("Alteracao da idade: ");
                    scanf("%d", &a[i].idade);
                    fflush(stdin);
                    printf("Alteracao do status: 1 - Ativo / 0 - Inativo");
                    fflush(stdin);
                    scanf("%d", &a[i].status);
                    fflush(stdin);
                }
            }
        }
    }
}

int excluirRegistro(Aluno a[], int totalCadastro, char buscarEmail[]) {
    int achou;
    for (int i = 0; i < totalCadastro; i++) {
        if (strcmp(a[i].email, buscarEmail) == 0) {
            // registro encontrado
            // exclusão
            for (int j = i; j < totalCadastro - 1; j++) {
                a[j] = a[j + 1];
            }
            achou = 1;
            printf("\nExcluido com sucesso");
            return achou;
        }
    }
    achou = 0;
    return achou;
}

int main() {
    Aluno a[TAM];
    int opcao, totalCadastro = 0;
    char buscarEmail[50];

    do {
        printf("\nDigite 1 para cadastrar");
        printf("\nDigite 2 para imprimir os cadastros");
        printf("\nDigite 3 para buscar um cadastro");
        printf("\nDigite 4 para alterar um cadastro");
        printf("\nDigite 5 para excluir um cadastro");
        printf("\nDigite 0 para encerrar o programa");
        scanf("%d", &opcao);
        switch (opcao) {
        case 1:
            // cadastra
            if (totalCadastro < TAM) {
                cadastrar(a, totalCadastro);
                totalCadastro++;
            } else {
                printf("\n\nLimite maximo de cadastro atingido");
            }
            break;
        case 2:
            // mostra todos os cadastros
            imprimir(a, totalCadastro);
            break;
        case 3:
            // buscar
            printf("Digite o email para buscar: ");
            scanf("%s", buscarEmail);
            buscarRegistro(a, totalCadastro);
            break;
        case 4:
            // alterar
            printf("Digite o email para alterar: ");
            scanf("%s", buscarEmail);
            alterarRegistro(a, totalCadastro, buscarEmail);
            break;
        case 5:
            // excluir
            printf("Digite o email para excluir: ");
            scanf("%s", buscarEmail);
            if (totalCadastro == 0) {
                printf("Lista vazia");
            } else {
                int res = excluirRegistro(a, totalCadastro, buscarEmail);
                if (res == 1) {
                    totalCadastro--;
                } else {
                    printf("Não foi possivel excluir - aluno nao encontrado");
                }
            }

            break;
        }
    } while (opcao != 0);

    return 0;
}