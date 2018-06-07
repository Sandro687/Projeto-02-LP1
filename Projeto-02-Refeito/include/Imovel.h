#ifndef IMOVEL_H
#define IMOVEL_H
#include "Endereco.h"


class Imovel
{
    public:
        Imovel(int tipoImovel, int tipoOferta, double valor);//, Endereco e);
        virtual ~Imovel();
        int IMOVEL_PARA_VENDER();
        int IMOVEL_PARA_ALUGAR();
        double getValor();
        double setValor();
        int getTipoOferta(int);
        int setTipoOferta(int);
        //getEndereco(void);
        int tipoImovel;
        int tipoOferta;
        double valor;
        //Endereco enderecoImovel; //Composicao. Imovel recebera atributos de endereco.

    private:
};

#endif // IMOVEL_H
