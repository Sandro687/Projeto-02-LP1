#include <iostream>
#include <stdlib.h>
#include <string>
#include "Apartamento.h"
#include "Endereco.h"
#include "Casa.h"
#include "SistemaImobiliaria.h"
#include "Flat.h"
#include "Studio.h"
using namespace std;

SistemaImobiliaria sistema;
void menu(){
    int op;
    //Apartamento ap("posicao", 0, 0, 0, 0);
    //ap.dadosApartamento();
    //Endereco ObjetoEndereco("logradouro", 0, "bairro", "cidade", "cep");
    //Imovel ObjetoImovel(0, 400);
    //Imovel im(1, 1, ObjetoEndereco);
    //Apartamento ap("posicao", 0, 0, 0, 0, ObjetoImovel, ObjetoEndereco);
    //Casa cas(999, 0, 0, 0, ObjetoImovel, ObjetoEndereco);
    //cout<<ap.composicaoMultipla1.logradouro;
    //cout<<cas.composicaoMultipla.valor;
    //sistema.cadastraImovel();
    //sistema.getDescricaoImoveis();
    cout<<"----------------Menu----------------\n";
    cout<<"Digite 1 para cadastrar imoveis.\n";
    cout<<"Digite 2 para consultar todos os imoveis disponiveis.\n";
    cout<<"Digite 3 para consultar a descricao de todos os imoveis.\n";
    cout<<"Digite 4 para consultar imoveis para vender por tipo.\n";
    cout<<"Digite 5 para consultar imoveis para alugar por tipo.\n";
    cout<<"Digite 6 para consultar imoveis para alugar por bairro.\n";
    cout<<"Digite 7 para consultar imoveis para vender por bairro.\n";
    cout<<"Digite 8 para consultar imoveis disponiveis por cidade.\n";
    cout<<"Digite 0 para sair.\n";
    cin>>op;
    switch(op){
        case 1:
            sistema.cadastraImovel();
            cout<<"Aperte ENTER para continuar.\n";
            cin.get();
            system("clear");
            menu();
            break;
        case 2:
            sistema.getimoveis();
            cout<<"Aperte ENTER para continuar.\n";
            cin.get();
            system("clear");
            menu();
            break;
        case 3:
            sistema.getDescricaoImoveis();
            cout<<"Aperte ENTER para continuar.\n";
            cin.get();
            system("clear");
            menu();
            break;
        case 4:
            sistema.getImoveisVenderPorTipo();
            cout<<"Aperte ENTER para continuar.\n";
            cin.get();
            system("clear");
            menu();
            break;
        case 5:
            sistema.getImoveisAlugarPorTipo();
            cout<<"Aperte ENTER para continuar.\n";
            cin.get();
            system("clear");
            menu();
            break;
        case 6:
            sistema.getImoveisParaAlugarPorBairro();
            cout<<"Aperte ENTER para continuar.\n";
            cin.get();
            system("clear");
            menu();
            break;
        case 7:
            sistema.getImoveisParaVenderPorBairro();
            cout<<"Aperte ENTER para continuar.\n";
            cin.get();
            system("clear");
            menu();
            break;
        case 8:
            sistema.getImovelPorCidade();
            cout<<"Aperte ENTER para continuar.\n";
            cin.get();
            system("clear");
            menu();
            break;
        case 0:
            cout<<"Programa encerrado.\n";
            break;

    }
}
int main(){
    menu();
}
