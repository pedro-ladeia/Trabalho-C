#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

// Criando o Objeto

typedef struct
{
    float valor;
    int cod;
    // char nome[100];
    int validade;
    int estoque;
} Product;

Product produtos[10];

// Parte de recebimento de informações de produtos.

alimentaEstoque()
{
    int resposta, acc = 0;
    printf("---------Ola, bem vindo ao controle de estoque---------\n");
    do
    {
        printf("Digite o Id do produto\n");
        scanf("%d", &produtos[acc].cod);
        printf("Informe o valor do produto:\n");
        scanf("%f", &produtos[acc].valor);
        // printf("Informe o nome do produto:\n");
        // fgets(produto[acc].nome,100,stdin);
        printf("Informe o ano de validade:\n");
        scanf("%d", &produtos[acc].validade);
        printf("Informe a quantidade em estoque:\n");
        scanf("%d", &produtos[acc].estoque);
        printf("Obrigdo por alimentar o sistema.\n");
        printf("Gostaria de inserir outro produto?\n");
        printf("1 - SIM\n");
        printf("Qualquer numero - SAIR\n");
        scanf("%d", &resposta);
        acc++;
    } while (resposta == 1);
    menu();
} //

obterInformacoes()
{
    int codEscolhido, opcMenu, i;
    do
    {
        printf("Digite o codigo do produto\n");
        scanf("%d", &codEscolhido);
        for (i = 0; i < 10; i++)
        {
            if (codEscolhido == produtos[i].cod)
            {
                printf("Quantidade em estoque: %d\n", produtos[i].estoque);
                // printf(produto[escolha].nome);
                printf("Ano de validade: %d\n", produtos[i].validade);
                printf("Valor do produto: %.2f\n\n\n", produtos[i].valor);
            }
        }
        printf("Deseja obter informacoes de outro produto?\n");
        printf("1 - Sim\n");
        printf("Qualquer outro numero - Sair\n");
        printf(">> ");
        scanf("%d", &opcMenu);
    } while (opcMenu == 1);
    menu();
}

// Função Controlar Estoque

controlarEstoque()
{
    system("cls");
    int id;
    printf("1 - Alimentar o sistema\n");
    printf("2 - Obter informacoes de produto\n");
    printf(">> ");
    scanf("%d", &id);
    switch (id)
    {
    case 1:
        alimentaEstoque();
        break;
    case 2:
        obterInformacoes();
        break;
    default:
        break;
    }
}

// A definir ainda...

caixaMercado()
{
    system("cls");
    float subTotal = 0;
    int opcMenu, codEscolhido, i;
    do
    {
        printf("Digite o Id do produto\n");
        scanf("%d", &codEscolhido);
        system("cls");
        printf("** LENDO CODIGO DE BARRAS **\n");
        _sleep(1300);
        system("cls");
        for (i = 0; i < 10; i++)
        {
            if (codEscolhido == produtos[i].cod)
            {
                subTotal += produtos[i].valor;
                printf("Subtotal = %.2f\n", subTotal);
            }
        }
        printf("Deseja adcionar outro produto?\n");
        printf("1 - Sim\n");
        printf("Qualquer outro numero - Sair\n");
        printf(">> ");
        scanf("%d", &opcMenu);
    } while (opcMenu == 1);
    printf("O total foi de %.2f", &subTotal);
}

// Função Menu

menu()
{
    int escolha;
    printf("1 - Caixa de mercado\n");
    printf("2 - Controle de Estoque\n");
    printf("3 - Sair\n");
    printf(">> ");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 1:
        caixaMercado();
        break;
    case 2:
        controlarEstoque();
        break;
    case 3:
        exit;
    default:
        printf("Sistema invalido\n");
        break;
    }
}

// Função Main

main()
{
    printf("OLA USUARIO, POR FAVOR ESCOLHA O SISTEMA A SER UTILIZADO\n\n");
    _sleep(1000);
    menu();
}