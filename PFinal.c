#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Criando o Objeto

struct Product {
    float valor;
    int cod;
    char nome[100];
    int validade;
    int estoque;
};


//Construindo o Primeiro Objeto

constrProd1() {
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
    
}

//Função Obter todos os dados

allData() {

}


//Função Controlar Estoque
// A função menu chama esta função que através do Switch chama a função criadora do objeto que printa as informações necessárias
controlarEstoque() {
    system("cls");
    int id;
    printf("Digite o codigo do produto para obter informaçoes\n");
    scanf("%d", &id);
    switch(id) {
        case 1: constrProd1();
                break;
        case 2: constrProd2();
                break;      
        default:
            break;
    }
    
    /*
    Parte de recebimento de informações de produtos.
    
    int x,1,2,r;

	printf("---------Olá,bem vindo ao controle e estoque.---------")
	
	for (x=0;x<5;x){
		printf("Digite o Id do produto\n");
    scanf("%d",%produto[x].id);
    printf("\nInforme o valor do produto:");
    scanf("%f", &produto[x].valor);
    printf("Informe o nome do produto:");
    fgets(produto[x].nome,100,stdin);
    printf("Informe a validade:");
    scanf("%d", &produto[x].validade);
    printf("Informe o estoque:")
    scanf("%d",%produto[x].estoque);
	}
	
	printf("Gostaria de inserir outro produto?");
	printf("1 = SIM");
	printf("2 = NÃO");
	scanf("%d",&r);
	if(r=1){
		do{
		for (x=0;x<5;x){
			printf("Digite o Id do produto\n");
    		scanf("%d",%produto[x].id);
    		printf("\nInforme o valor do produto:");
    		scanf("%f", &produto[x].valor);
    		printf("Informe o nome do produto:");
    		fgets(produto[x].nome,100,stdin);
    		printf("Informe a validade:");
    		scanf("%d", &produto[x].validade);
    		printf("Informe o estoque:")
    		scanf("%d",%produto[x].estoque);
		}
		
	}while(r=1);
	}else{
		("Obrigdo por alimentar o sistema.");
	}
	
    
    */
    
    
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
    printf("3 - Obter todas as informações\n");
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
        allData();    
    default:
        printf("Sistema invalido\n");
        break;
    }
}

//Função Main

main() {
    printf("OLA USUARIO, POR FAVOR ESCOLHA O SISTEMA A SER UTILIZADO\n\n");
    menu();
}
