#ifndef TERRENO_H
#define TERRENO_H
#include "Endereco.h"
#include "Imovel.h"


class Terreno
{
    public:
        Terreno(double area, Imovel i, Endereco e);
        virtual ~Terreno();
        double area;
        Imovel composicaoMultipla;     //Composicao: apartamento possui
        Endereco composicaoMultipla1;   //atributos de imovel que tambem possui os atributos de endereco.
        void dadosTerreno();
    protected:

    private:
};

#endif // TERRENO_H
