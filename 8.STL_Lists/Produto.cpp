#include <iostream>
#include <string>

#include "Produto.h"

using namespace std;

void Produto::cadastrarProduto(){
    cout<<"C�digo: ";
    cin>>_codigo;
    fflush(stdin);

    cout<<"Descri��o: ";
    getline(cin,_descricao);

    cout<<"Quantidade: ";
    cin>>_quantidade;
    fflush(stdin);

    cout<<"Pre�o: ";
    cin>>_preco;
    fflush(stdin);
}



