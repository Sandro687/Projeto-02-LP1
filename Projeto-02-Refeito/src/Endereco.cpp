#include "Endereco.h"

Endereco::Endereco(std::string logradouro, int numero, std::string bairro, std::string cidade, std::string cep)
{
    this->logradouro = logradouro;
    this->numero = numero;
    this->bairro = bairro;
    this->cidade = cidade;
    this->cep = cep;
    //ctor
}

Endereco::~Endereco()
{
    //dtor
}
