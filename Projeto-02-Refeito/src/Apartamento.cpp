#include "Apartamento.h"
#include "Endereco.h"
#include "Imovel.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

Apartamento::Apartamento(std::string posicao, int numQuartos, double valorCondominio, int vagasGaragem, double area, Imovel i, Endereco e)
: posicao(posicao), numQuartos(numQuartos), valorCondominio(valorCondominio), vagasGaragem(vagasGaragem), area(area), composicaoMultipla(i), composicaoMultipla1(e)
{
    //this->posicao = posicao;
    //this->numQuartos = numQuartos;
    //this->valorCondominio = valorCondominio;
    //this->vagasGaragem = vagasGaragem;
    //this->area = area;
    //this->composicaoMultipla = i;
    //tipoImovel = 1;

    //ctor
}

//void Apartamento::dadosApartamento(){
//    std::cout<<"Insira os dados do apartamento.\n";
//    std::cout<<"Posicao: ";
//    std::getline(std::cin, posicao); //cin nao detecta espacos, faz-se necessario o uso do getline
//    std::cout<<"\nNumero de quartos: ";
//    std::cin>>numQuartos;
//    std::cout<<"\nValor do condominio: ";
//    std::cin>>valorCondominio;
//    std::cout<<"\nNumero de vagas de garagem: ";
//    std::cin>>vagasGaragem;
//    std::cout<<"\nArea do apartamento: ";
//    std::cin>>area;
//}

Apartamento::~Apartamento()
{
    //dtor
}
