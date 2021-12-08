#include <stdio.h>
#include <stdlib.h>

struct Product1 {
    
};



controlarEstoque() {

     printf("Digite o Id do produto\n");
     

 }





caixaMercado() {
    float subTotal;
    printf("Digite o Id do produto\n");
    

}





menu() {
    int escolha;
    printf("1 - Caixa de mercado");
    printf("2 - Controle de Estoque");
    switch (escolha)
    {
    case 1:
        caixaMercado();
        break;
    case 2:
        controlarEstoque();
        break;
    default:
        break;
    }
}

main() {
    printf("Olá usuário, por favor escolha o sistema a ser utilizado\n");
    menu();
}