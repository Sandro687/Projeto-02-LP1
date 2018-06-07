#ifndef SISTEMAIMOBILIARIA_H
#define SISTEMAIMOBILIARIA_H
#include <string>
#include "Endereco.h"
#include "Imovel.h"
#include <iostream>

class SistemaImobiliaria
{
    public:
        SistemaImobiliaria();
        virtual ~SistemaImobiliaria();
        void cadastraImovel(/*Imovel*/);                //void
        void getimoveis();                              //list <imovel>
        void getDescricaoImoveis();                     //list <string>
        void getImoveisVenderPorTipo();                 //list <imovel>
        void getImoveisAlugarPorTipo();
        void getImoveisParaAlugarPorBairro();           //list <imovel>
        void getImoveisParaVenderPorBairro();           //list <imovel>
        void getImovelPorCidade();                      //list <imovel>
        int contadorCasa;
        int contadorApartamento;
        int contadorTerreno;
        int contadorFlat;
        int contadorStudio;
        int quant;

    protected:

    private:
};

#endif // SISTEMAIMOBILIARIA_H
