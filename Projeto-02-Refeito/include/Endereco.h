#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>

class Endereco
{
    public:
        Endereco(std::string logradouro, int numero, std::string bairro, std::string cidade, std::string cep);
        virtual ~Endereco();
        std::string logradouro;
        int numero;
        std::string bairro;
        std::string cidade;
        std::string cep;

    protected:

    private:
};

#endif // ENDERECO_H
