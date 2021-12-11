#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

//Criando o Objeto

struct Product {
    float valor;
    int cod;
    char nome[100];
    int validade;
    int estoque;
}produto[100];


//Construindo o Primeiro Objeto

/*constrProd1() {
    system("cls");
    struct Product produto1;
    produto1.valor = 20.50;
    produto1.cod = 1;
    //produto1.nome[100] = 'PRODUTO1';  //Alguém faz essa do nome
    produto1.validade = 2023;
    produto1.estoque = 76;
    printf(" O codigo escolhido foi o %d\n Validade do produto: %d\n Quantidade em estoque: %d", produto1.cod, produto1.validade, produto1.estoque);
    return produto1.valor;
}
 


//Construindo o Segundo Objeto
    constrProd2() {
    system("cls");
    struct Product produto2;
    produto2.valor = 64.50;
    produto2.cod = 2;
    //produto2.nome[100] = 'PRODUTO2';
    produto2.validade = 2022;
    produto2.estoque = 87;
    printf(" O codigo escolhido foi o %d\n Validade do produto: %d\n Quantidade em estoque: %d", produto2.cod, produto2.validade, produto2.estoque);
    
}*/



//Parte de recebimento de informações de produtos.

alimentaEstoque() {
    int resposta, acc = 1;
	printf("---------Ola, bem vindo ao controle de estoque---------\n");
        do{
        printf("Digite o Id do produto\n");
        scanf("%d",&produto[acc].cod);
        printf("Informe o valor do produto:\n");
        scanf("%f", &produto[acc].valor);
        //printf("Informe o nome do produto:\n");
        //fgets(produto[acc].nome,100,stdin);
        printf("Informe o ano de validade:\n");
        scanf("%d", &produto[acc].validade);
        printf("Informe a quantidade em estoque:\n");
        scanf("%d",&produto[acc].estoque); 
        printf("Obrigdo por alimentar o sistema.\n");
        printf("Gostaria de inserir outro produto?\n");
	    printf("1 - SIM\n");
	    printf("Qualquer numero - SAIR\n");
        scanf("%d",&resposta);
        acc++;
        } while (resposta == 1);
        menu();
	}//
	


obterInformacoes()  {
    int escolha, opcMenu, i = 0 ;
    int sizeArr = sizeof(produto)/sizeof(produto[0]);
    printf("Digite o codigo do produto\n");
    scanf("%d", &escolha);
    do {
            while(i < sizeArr) {
                if(produto[escolha].cod == produto[i].cod) {
                    printf("Quantidade em estoque: %d\n", produto[i].estoque);
                    //printf(produto[escolha].nome);
                    printf("Ano de validade: %d\n", produto[i].validade);
                    printf("Valor do produto: %f\n", produto[i].valor);
                    printf("Deseja obter informacoes sobre outro produto?\n");
                    printf("1 - Sim\n");
                    //system('cls')
                    } else printf("Produto nao cadastrado\n");
                    i++;
                }
    
        printf("Deseja obter informacoes de outro produto?\n");
        printf("1 - Sim\n");
        printf("Qualquer outro numero - Sair\n");
        printf(">> ");
        scanf("%d", &opcMenu);
    }while(opcMenu == 1);
           
}




//Função Controlar Estoque

controlarEstoque() {
    system("cls");
    int id;
    printf("1 - Alimentar o sistema\n");
    printf("2 - Obter informacoes de produto\n");
    printf(">> ");
    scanf("%d", &id);
    switch(id) {
        case 1: alimentaEstoque();
                break;
        case 2: obterInformacoes();
                break;      
        default:
            break;
    }
    
    
    
    
    
    
}




//A definir ainda...

caixaMercado() {
    float subTotal;
    int continuar, id;
    printf("Digite o Id do produto\n");
    scanf("%d", &id);
   /* do{
        printf("Digite o Id do produto\n");
        switch(id) {
        case 1: subTotal += ;
                break; 
        case 2: subTotal += ;
                break;    
        }
    } while(id != 0);*/
    printf("O total foi de %f", &subTotal);
}




//Função Menu

menu() {
    int escolha;
    printf("1 - Caixa de mercado\n");
    printf("2 - Controle de Estoque\n");
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
    default:
        printf("Sistema invalido\n");
        break;
    }
}

//Função Main

main() {
    printf("OLA USUARIO, POR FAVOR ESCOLHA O SISTEMA A SER UTILIZADO\n\n");
    _sleep(1000);
    menu();
}