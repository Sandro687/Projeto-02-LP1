#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include <string>
#include "Endereco.h"
#include "Imovel.h"

class Apartamento
{
    public:
        Apartamento(std::string posicao, int numQuartos, double valorCondominio, int vagasGaragem, double area, Imovel i, Endereco e);
        virtual ~Apartamento();
        std::string posicao;
        int numQuartos;
        double valorCondominio;
        int vagasGaragem;
        double area;
        void dadosApartamento();
        Imovel composicaoMultipla;     //Composicao: apartamento possui
        Endereco composicaoMultipla1;   //atributos de imovel que tambem possui os atributos de endereco.
    protected:

    private:
};

#endif // APARTAMENTO_H
