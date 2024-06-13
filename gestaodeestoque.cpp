#include <stdio.h>
#include <conio.h> // ADICIONA O GETCH
#include <windows.h> // COR DE TEXTO

//https://www.youtube.com/watch?v=-SgbvUL2UVc&list=PLpaKFn4Q4GMOBAeqC1S5_Fna_Y5XaOQS2&index=19
//AULA 6 / 6.1 / 7 E 8 FOI NECESSARIO PRA FAZER O CONNTEUDO
//LIVRO USADO: Linguagem C - Completa e Descomplicada de André Backes


// MAXIMO DE DADOS QUE PODEM SER CADASTRADOS POR QUESTOES DE DESEMPENHO
#define MAX_PRODUTOS 100
#define MAX_VENDAS 100

// Estrutura DE ARMAZENAMENTO / 
typedef struct { // TYPEDEF RENOMEIA O IDENTIFICADOR
    char nome[50]; // Nome do produto
    double preco; // Preço do produto
    int quantidade; // Quantidade em estoque
} Produto; // CADA PRODUTO VAI TER ESSA ESTRUTURA DE DADO

// vamos armazenar aqui
Produto produtos[MAX_PRODUTOS]; // Produtos
Produto vendas[MAX_VENDAS]; // Vendas

// ZERAR
int numProdutos = 0;
int numVendas = 0;

int main() {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11); // Define a cor do texto para azul claro
    
    for (int i = 0; i < 80; i++) {
        printf("%c", 177);
    }
    printf("\n");
    for (int j = 0; j < 1; j++) {
        printf("%c", 177);
        for (int i = 0; i < 78; i++) {
            printf(" ");
        }
        printf("%c\n", 177);
    }
    printf("%c", 177);
    printf("                         SISTEMA DE GESTÃO DE PRODUTOS                        %c\n", 177);
    for (int j = 0; j < 1; j++) {
        printf("%c", 177);
        for (int i = 0; i < 78; i++) {
            printf(" ");
        }
        printf("%c\n", 177);
    }
    for (int i = 0; i < 80; i++) {
        printf("%c", 177);
    }
    printf("\nPressione qualquer tecla para continuar...\n");
    _getch(); // Espera o usuário pressionar uma tecla
    
    int opcao;
    int sair = 0;
    
    do {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10); // Verde

        for (int i = 0; i < 80; i++) {
            printf("%c", 177);
        }
        printf("\n");
        for (int j = 0; j < 1; j++) {
            printf("%c", 177);
            for (int i = 0; i < 78; i++) {
                printf(" ");
            }
            printf("%c\n", 177);
        }
        printf("%c", 177);
        printf("                            MENU PRINCIPAL                                    %c\n", 177);
        for (int j = 0; j < 1; j++) {
            printf("%c", 177);
            for (int i = 0; i < 78; i++) {
                printf(" ");
            }
            printf("%c\n", 177);
        }
        printf("%c", 177);
        printf("   1. Cadastro de Produto                                                     %c\n", 177);
        printf("%c", 177);
        printf("   2. Realizar Venda                                                          %c\n", 177);
        printf("%c", 177);
        printf("   3. Relatório de Produtos                                                   %c\n", 177);
        printf("%c", 177);
        printf("   4. Relatório de Vendas                                                     %c\n", 177);
        printf("%c", 177);
        printf("   5. Sair                                                                    %c\n", 177);
        for (int j = 0; j < 1; j++) {
            printf("%c", 177);
            for (int i = 0; i < 78; i++) {
                printf(" ");
            }
            printf("%c\n", 177);
        }
        for (int i = 0; i < 80; i++) {
            printf("%c", 177);
        }
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);
        fflush(stdin);
        
        getchar(); // Limpar o buffer do teclado
        
        switch (opcao) {
            case 1: {
                if (numProdutos >= MAX_PRODUTOS) {
                    printf("Limite de produtos cadastrados atingido.\n");
                    printf("Pressione qualquer tecla para voltar ao menu...\n");
                    _getch();
                    break;
                }
                
                system("cls"); //DONA DE CASA
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); // Rosa
                
                Produto novoProduto; // VAI CADASTRAR NOVO PRODUTO
                
                printf("Digite o nome do produto: ");
                scanf("%49s", novoProduto.nome);
                fflush(stdin);
                
                printf("Digite o preço: ");
                scanf("%lf", &novoProduto.preco);
                fflush(stdin);
                
                printf("Digite a quantidade em estoque: ");
                scanf("%d", &novoProduto.quantidade);
                fflush(stdin);
                
                getchar(); // Limpar o buffer do teclado
                
                produtos[numProdutos] = novoProduto;
                numProdutos++;
                
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14); // Define a cor do texto para amarelo
                
                for (int i = 0; i < 80; i++) {
                    printf("%c", 177);
                }
                printf("\n");
                for (int j = 0; j < 1; j++) {
                    printf("%c", 177);
                    for (int i = 0; i < 78; i++) {
                        printf(" ");
                    }
                    printf("%c\n", 177);
                }
                printf("%c", 177);
                printf("Cadastro de produto realizado com sucesso!                                ", 177);
                for (int j = 0; j < 1; j++) {
                    printf("%c", 177);
                    for (int i = 0; i < 78; i++) {
                        printf(" ");
                    }
                    printf("%c\n", 177);
                }
                for (int i = 0; i < 80; i++) {
                    printf("%c", 177);
                }
                printf("\n");
                for (int j = 0; j < 1; j++) {
                    printf("%c", 177);
                    for (int i = 0; i < 78; i++) {
                        printf(" ");
                    }
                    printf("%c\n", 177);
                }
            
                printf("\nPressione qualquer tecla para voltar ao menu...\n");
                _getch();
                break;
            }

            case 2: {
                if (numVendas >= MAX_VENDAS) {
                    printf("Limite de vendas atingido.\n");
                    printf("Pressione qualquer tecla para voltar ao menu...\n");
                    _getch();
                    break;
                }
                
                system("cls"); // DONA DE CASA
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); // Rosa
                
                Produto venda;
                printf("Digite o nome do produto vendido: ");
                scanf("%49s", venda.nome);
                printf("Digite a quantidade vendida: ");
                scanf("%d", &venda.quantidade);
                
                getchar(); // Limpar o buffer do teclado
                
                int index = -1;
                for (int i = 0; i < numProdutos; ++i) {
                    if (strcmp(produtos[i].nome, venda.nome) == 0) {
                        index = i;
                        break;
                    }
                }

                if (index != -1)  { // VERIFICA SE A ESTOQUE DESSE PRODUTO
                    Produto *produto = &produtos[index]; 
                    if (produto->quantidade >= venda.quantidade) { //VERIFICA SE TEM A QUANTIDADE QUE VAI SER VENDIDA
                        produto->quantidade -= venda.quantidade; //Reduzimos a quantidade no estoque
                        venda.preco = produto->preco * venda.quantidade; //PREÇO DA VENDA
                        vendas[numVendas] = venda; //REGISTRAR O ARRAY PARA REGISTRO
                        numVendas++; //CONTADOR DE VENDAR EX VENDA 1 / VENDA 2 / VENDA 3
                        printf("Venda realizada com sucesso!\n");
                    } else {
                        printf("Estoque insuficiente para realizar a venda!\n"); //SE A QUANTIDADE NAO FOI ACHADA
                    }
                } else {
                    printf("Produto não encontrado!\n"); // SE CASO NAO FOR ACHADA O PRODUTO. PROBLEMAS AQUI ------------------------------------------------
                }
                printf("Pressione qualquer tecla para voltar ao menu...\n");
                
                _getch();
                break;
            }
            case 3: {
                system("cls"); //DONA DE CASA
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); // Rosa
                
                printf("Relatório de Produtos Cadastrados:\n\n");
                
                for (int i = 0; i < numProdutos; ++i) {
                    Produto *produto = &produtos[i];
                    printf("Produto: %s\n", produto->nome);
                    printf("Preço: %.2f\n", produto->preco);
                    printf("Quantidade em estoque: %d\n\n", produto->quantidade);
                }
                printf("Pressione qualquer tecla para voltar ao menu...\n");
                _getch(); // Limpar o buffer do teclado
                
                break;
            }
            case 4: {
                system("cls"); //DONA DE CASA
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13); // Rosa
                
                printf("Relatório de Vendas Realizadas:\n\n");
                
                for (int i = 0; i < numVendas; ++i) {
                    Produto *venda = &vendas[i];
                    printf("Produto: %s\n", venda->nome);
                    printf("Quantidade vendida: %d\n", venda->quantidade);
                    printf("Valor total da venda: %.2f\n\n", venda->preco);
                }
                
                printf("Pressione qualquer tecla para voltar ao menu...\n");
                
                _getch(); // Limpar o buffer do teclado
                break;
            }
            case 5:
                sair = 1;
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                printf("Pressione qualquer tecla para voltar ao menu...\n");
                
                _getch(); // Limpar o buffer do teclado
                break;
        }
    } while (!sair);

    return 0;
}

