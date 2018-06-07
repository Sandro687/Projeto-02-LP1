#ifndef STUDIO_H
#define STUDIO_H
#include <string>
#include "Endereco.h"
#include "Imovel.h"
#include "Apartamento.h"
#include <iostream>

class Studio
{
    public:
        //Studio();
        //virtual ~Studio();
        Studio(double areaStudio, double valorCondominio, bool ar, bool internetETV, bool servicosLavanderia, bool limpeza, bool recepcao24h, /*Imovel i, Endereco e,*/ Apartamento a);
        virtual ~Studio();
        double areaStudio;
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

#endif // STUDIO_H
