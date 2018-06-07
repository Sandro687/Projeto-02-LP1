#include "Studio.h"
#include <string>
#include "Endereco.h"
#include "Imovel.h"
#include "Apartamento.h"
#include <iostream>

//Studio::Studio()
//{
    //ctor
//}

//Studio::~Studio()
//{
    //dtor
//}


Studio::Studio(double areaStudio, double valorCondominio, bool ar, bool internetETV, bool servicosLavanderia, bool limpeza, bool recepcao24h, /*Imovel i, Endereco e,*/ Apartamento a)
: areaStudio(areaStudio), valorCondominio(valorCondominio), ar(ar), internetETV(internetETV), servicosLavanderia(servicosLavanderia), limpeza(limpeza), recepcao24h(recepcao24h), /*composicaoMultipla(i), composicaoMultipla1(e),*/ composicaoMultipla2(a)
{
}
Studio::~Studio()
{
    //dtor
}
