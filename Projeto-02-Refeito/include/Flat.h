#ifndef FLAT_H
#define FLAT_H
#include <string>
#include "Endereco.h"
#include "Imovel.h"
#include "Apartamento.h"


class Flat
{
    public:
        Flat(double areaFlat, double valorCondominio, bool ar, bool internetETV, bool servicosLavanderia, bool limpeza, bool recepcao24h, /*Imovel i, Endereco e,*/ Apartamento a);
        virtual ~Flat();
        double areaFlat;
        double valorCondominio;
        bool ar;
        bool internetETV;
        bool servicosLavanderia;
        bool limpeza;
        bool recepcao24h;
        //Imovel composicaoMultipla;     //Composicao: apartamento possui
        //Endereco composicaoMultipla1;   //atributos de imovel que tambem possui os atributos de endereco.
        Apartamento composicaoMultipla2;

    protected:

    private:
};

#endif // FLAT_H
