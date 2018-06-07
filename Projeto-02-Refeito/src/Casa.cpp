#include "Casa.h"
#include "Endereco.h"
#include "Imovel.h"
#include "SistemaImobiliaria.h"
#include <iostream>

Casa::Casa(int numPavimentos, int numQuartos, double areaTerreno, double areaConstruida, Imovel i, Endereco e)
: numPavimentos(numPavimentos), numQuartos(numQuartos), areaTerreno(areaTerreno), areaConstruida(areaConstruida), composicaoMultipla(i), composicaoMultipla1(e)
{
    //ctor
}
//Casa::Casa(){}

void Casa::dadosCasa(){
    std::cout<<"Insira os dados da casa.\n";
    std::cout<<"Numero de pavimentos: ";
    std::cin>>numPavimentos;
    std::cout<<"\nNumero de quartos: ";
    std::cin>>numQuartos;
    std::cout<<"\nArea do terreno: ";
    std::cin>>areaTerreno;
    std::cout<<"\nArea construida: ";
    std::cin>>areaConstruida;
}

Casa::~Casa()
{
    //dtor
}
