#include "Terreno.h"
#include "Endereco.h"
#include "Imovel.h"
#include <iostream>

Terreno::Terreno(double area, Imovel i, Endereco e)
: area(area), composicaoMultipla(i), composicaoMultipla1(e)
{

    //ctor
}

void Terreno::dadosTerreno(){
    std::cout<<"\nArea do terreno: ";
    std::cin>>area;
}

Terreno::~Terreno()
{
    //dtor
}
