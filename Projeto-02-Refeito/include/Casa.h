#ifndef CASA_H
#define CASA_H
#include "Endereco.h"
#include "Imovel.h"
#include "SistemaImobiliaria.h"
#include <iostream>

class Casa
{
    public:
        Casa(int numPavimentos, int numQuartos, double areaTerreno, double areaConstruida, Imovel i, Endereco e);
        //Casa();
        virtual ~Casa();
        int numPavimentos;
        int numQuartos;
        double areaTerreno;
        double areaConstruida;
        void dadosCasa();
        Imovel composicaoMultipla;     //Composicao: apartamento possui
        Endereco composicaoMultipla1;   //atributos de imovel que tambem possui os atributos de endereco.

    protected:

    private:
};

#endif // CASA_H
