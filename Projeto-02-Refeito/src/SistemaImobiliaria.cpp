#include "SistemaImobiliaria.h"
#include "Endereco.h"
#include "Imovel.h"
#include <iostream>
#include "Apartamento.h"
#include "Casa.h"
#include "Terreno.h"
#include <vector>
#include <cstdio>
#include "Flat.h"
#include "Studio.h"

std::vector<Casa> cas;
std::vector<Apartamento> ap;
std::vector<Terreno> ter;
std::vector<Flat> fl;
std::vector<Studio> st;

SistemaImobiliaria::SistemaImobiliaria()
{
    //ctor
}

void SistemaImobiliaria::cadastraImovel(){
    int o, i;
    int numPavimentos;
    int numQuartos;
    double areaTerreno;
    double areaConstruida;
    std::string logradouro;
    int numero;
    std::string bairro;
    std::string cidade;
    std::string cep;
    int tipoImovel = 0;
    int tipoOferta;
    contadorCasa = 0;
    double valor;

    //Casa *cas;
    std::cout<<"----------------Cadastro de imoveis.----------------\n";
    std::cout<<"Qual imovel deseja cadastrar? Digite 0 para CASA, 1 para APARTAMENTO, 2 para TERRENO, 3 para FLAT ou 4 para STUDIO.\n";
    std::cin>>o;
    std::cout<<"Digite a quantidade de imoveis a ser cadastrada.";
    std::cin>>quant;
    if (o == 0){
        for (i = 0; i < quant; i++){
            std::cout<<"Casa 0"<<i<<std::endl;
            std::cout<<"Quantos pavimentos?\n";
            std::cin>>numPavimentos;
            std::cout<<"Quantos quartos?\n";
            std::cin>>numQuartos;
            std::cout<<"Qual a area do terreno?\n";
            std::cin>>areaTerreno;
            std::cout<<"Qual a area construida?\n";
            std::cin>>areaConstruida;
            std::cout<<"Qual o logradouro?\n";
            setbuf(stdin,NULL);
            std::getline(std::cin, logradouro);
            std::cout<<"Qual o bairro?\n";
            setbuf(stdin,NULL);
            std::getline(std::cin, bairro);
            std::cout<<"Qual a cidade?\n";
            setbuf(stdin,NULL);
            std::getline(std::cin, cidade);
            std::cout<<"Qual o cep?\n";
            setbuf(stdin,NULL);
            std::getline(std::cin, cep);
            std::cout<<"O imovel esta para venda ou aluguel? Digite 1 para venda ou 0 para aluguel.\n";
            std::cin>>tipoOferta;
            std::cout<<"Qual o valor do imovel?\n";
            std::cin>>valor;
            std::cout<<"Qual o numero do imovel?\n";
            std::cin>>numero;
            Endereco ObjetoEndereco(logradouro, numero, bairro, cidade, cep);
            Imovel ObjetoImovel(tipoImovel, tipoOferta, valor);

            //cas = new Casa[quant];
            //std::vector<Casa> vec;
            //vec.reserve(quant);
            //vec.push_back(Casa(params));
            //vec.push_back(Casa(other_params));
            //std::vector<Casa> cas;
            cas.push_back(Casa(numPavimentos, numQuartos, areaTerreno, areaConstruida, ObjetoImovel, ObjetoEndereco));
            cas.reserve(100);
            //std::cout<<cas[0].composicaoMultipla1.bairro;
            //cas.push_back(Casa(2));
            contadorCasa++;

        }

    }else if (o == 1){
        int tipoImovel = 1;
        std::string posicao;
        double valorCondominio;
        int vagasGaragem;
        double area;
        contadorApartamento = 0;
        for (i = 0; i < quant; i++){
            std::cout<<"Apartamento 0"<<i<<std::endl;
            std::cout<<"Qual a posicao?\n";
            setbuf(stdin,NULL);
            std::getline(std::cin, posicao);
            std::cout<<"Quantas vagas de garagem?\n";
            std::cin>>vagasGaragem;
            std::cout<<"Qual o numero de quartos?\n";
            std::cin>>numQuartos;
            std::cout<<"Qual o valor do condominio?\n";
            std::cin>>valorCondominio;
            std::cout<<"Qual a area?\n";
            std::cin>>area;
            std::cout<<"Qual o bairro?\n";
            setbuf(stdin,NULL);
            std::getline(std::cin, bairro);
            std::cout<<"Qual a cidade?\n";
            setbuf(stdin,NULL);
            std::getline(std::cin, cidade);
            std::cout<<"Qual o cep?\n";
            setbuf(stdin,NULL);
            std::getline(std::cin, cep);
            std::cout<<"O imovel esta para venda ou aluguel? Digite 1 para venda ou 0 para aluguel.\n";
            std::cin>>tipoOferta;
            std::cout<<"Qual o valor do imovel?\n";
            std::cin>>valor;
            std::cout<<"Qual o numero do imovel?\n";
            std::cin>>numero;
            Endereco ObjetoEndereco(logradouro, numero, bairro, cidade, cep);
            Imovel ObjetoImovel(tipoImovel, tipoOferta, valor);
            //std::vector<Apartamento> ap;
            ap.push_back(Apartamento(posicao, numQuartos, valorCondominio, vagasGaragem, area, ObjetoImovel, ObjetoEndereco));
            contadorApartamento++;
        }
    }else if(o == 2){
        int tipoImovel = 2;
        for (i = 0; i < quant; i++){
            std::cout<<"Terreno 0"<<i<<std::endl;
            double area;
            contadorTerreno = 0;
            std::cout<<"Qual a area?\n";
            std::cin>>area;
            std::cout<<"Qual o bairro?\n";
            setbuf(stdin,NULL);
            std::getline(std::cin, bairro);
            std::cout<<"Qual a cidade?\n";
            setbuf(stdin,NULL);
            std::getline(std::cin, cidade);
            std::cout<<"Qual o cep?\n";
            setbuf(stdin,NULL);
            std::getline(std::cin, cep);
            std::cout<<"O imovel esta para venda ou aluguel? Digite 1 para venda ou 0 para aluguel.\n";
            std::cin>>tipoOferta;
            std::cout<<"Qual o valor do imovel?\n";
            std::cin>>valor;
            std::cout<<"Qual o numero do imovel?\n";
            std::cin>>numero;
            Endereco ObjetoEndereco(logradouro, numero, bairro, cidade, cep);
            Imovel ObjetoImovel(tipoImovel, tipoOferta, valor);
            //std::vector<Terreno> ter;
            ter.push_back(Terreno(area, ObjetoImovel, ObjetoEndereco));
            contadorTerreno++;
        }

    }else if (o == 3){
        int tipoImovel = 3;
        double areaFlat;
        double valorCondominio;
        bool ar;
        bool internetETV;
        bool servicosLavanderia;
        bool limpeza;
        bool recepcao24h;
        std::string posicao;
        int vagasGaragem;
        double area;
        contadorFlat = 0;
        for (i = 0; i < quant; i++){
            std::cout<<"Flat 0"<<i<<std::endl;
            std::cout<<"Qual a posicao?\n";
            setbuf(stdin,NULL);
            std::getline(std::cin, posicao);
            std::cout<<"Quantas vagas de garagem?\n";
            std::cin>>vagasGaragem;
            std::cout<<"Qual o numero de quartos?\n";
            std::cin>>numQuartos;
            std::cout<<"Qual o valor do condominio?\n";
            std::cin>>valorCondominio;
            std::cout<<"Qual a area?\n";
            std::cin>>area;
            std::cout<<"Qual o bairro?\n";
            setbuf(stdin,NULL);
            std::getline(std::cin, bairro);
            std::cout<<"Qual a cidade?\n";
            setbuf(stdin,NULL);
            std::getline(std::cin, cidade);
            std::cout<<"Qual o cep?\n";
            setbuf(stdin,NULL);
            std::getline(std::cin, cep);
            std::cout<<"O imovel esta para venda ou aluguel? Digite 1 para venda ou 0 para aluguel.\n";
            std::cin>>tipoOferta;
            std::cout<<"Qual a area do flat?\n";
            std::cin>>areaFlat;
            std::cout<<"Qual o valor do condominio?\n";
            std::cin>>valorCondominio;
            std::cout<<"Possui ar condicionado? Digite 1 para sim e 0 para nao.\n";
            std::cin>>ar;
            std::cout<<"Possui servicos de internet e TV? Digite 1 para sim e 0 para nao.\n";
            std::cin>>internetETV;
            std::cout<<"Possui servicos de lavanderia? Digite 1 para sim e 0 para nao.\n";
            std::cin>>servicosLavanderia;
            std::cout<<"Possui servicos de limpeza? Digite 1 para sim e 0 para nao.\n";
            std::cin>>limpeza;
            std::cout<<"Possui recepcao 24h?? Digite 1 para sim e 0 para nao.\n";
            std::cin>>recepcao24h;
            Endereco ObjetoEndereco(logradouro, numero, bairro, cidade, cep);
            Imovel ObjetoImovel(tipoImovel, tipoOferta, valor);
            Apartamento ObjetoApartamento(posicao, numQuartos, valorCondominio, vagasGaragem, area, ObjetoImovel, ObjetoEndereco);
            //std::vector<Apartamento> ap;
            fl.push_back(Flat(areaFlat, valorCondominio, ar, internetETV, servicosLavanderia, limpeza, recepcao24h, ObjetoApartamento));
            contadorFlat++;
        }
    }else if (o == 4){
        int tipoImovel = 4;
        double areaStudio;
        double valorCondominio;
        bool ar;
        bool internetETV;
        bool servicosLavanderia;
        bool limpeza;
        bool recepcao24h;
        std::string posicao;
        int vagasGaragem;
        double area;
        contadorStudio = 0;
        for (i = 0; i < quant; i++){
            std::cout<<"Studio 0"<<i<<std::endl;
            std::cout<<"Qual a posicao?\n";
            setbuf(stdin,NULL);
            std::getline(std::cin, posicao);
            std::cout<<"Quantas vagas de garagem?\n";
            std::cin>>vagasGaragem;
            std::cout<<"Qual o numero de quartos?\n";
            std::cin>>numQuartos;
            std::cout<<"Qual o valor do condominio?\n";
            std::cin>>valorCondominio;
            std::cout<<"Qual a area?\n";
            std::cin>>area;
            std::cout<<"Qual o bairro?\n";
            setbuf(stdin,NULL);
            std::getline(std::cin, bairro);
            std::cout<<"Qual a cidade?\n";
            setbuf(stdin,NULL);
            std::getline(std::cin, cidade);
            std::cout<<"Qual o cep?\n";
            setbuf(stdin,NULL);
            std::getline(std::cin, cep);
            std::cout<<"O imovel esta para venda ou aluguel? Digite 1 para venda ou 0 para aluguel.\n";
            std::cin>>tipoOferta;
            std::cout<<"Qual a area do studio?\n";
            std::cin>>areaStudio;
            std::cout<<"Qual o valor do condominio?\n";
            std::cin>>valorCondominio;
            std::cout<<"Possui ar condicionado? Digite 1 para sim e 0 para nao.\n";
            std::cin>>ar;
            std::cout<<"Possui servicos de internet e TV? Digite 1 para sim e 0 para nao.\n";
            std::cin>>internetETV;
            std::cout<<"Possui servicos de lavanderia? Digite 1 para sim e 0 para nao.\n";
            std::cin>>servicosLavanderia;
            std::cout<<"Possui servicos de limpeza? Digite 1 para sim e 0 para nao.\n";
            std::cin>>limpeza;
            std::cout<<"Possui recepcao 24h?? Digite 1 para sim e 0 para nao.\n";
            std::cin>>recepcao24h;
            Endereco ObjetoEndereco(logradouro, numero, bairro, cidade, cep);
            Imovel ObjetoImovel(tipoImovel, tipoOferta, valor);
            Apartamento ObjetoApartamento(posicao, numQuartos, valorCondominio, vagasGaragem, area, ObjetoImovel, ObjetoEndereco);
            //std::vector<Apartamento> ap;
            st.push_back(Studio(areaStudio, valorCondominio, ar, internetETV, servicosLavanderia, limpeza, recepcao24h, ObjetoApartamento));
            contadorStudio++;
        }
    }
}
void SistemaImobiliaria::getimoveis(){
    int contadorcas = 0;
    int contadorap = 0;
    int contadorter = 0;
    int contadorF = 0;
    int contadorS = 0;
    int i;
    std::cout<<"----------------Listagem de imoveis.----------------";
    for (i = 0; i < quant; i++){
        if (contadorCasa > 0){
            contadorcas++;
        }else if (contadorApartamento > 0){
            contadorap++;
        }else if (contadorTerreno > 0){
            contadorter++;
        }else if (contadorFlat > 0){
            contadorF++;
        }else if (contadorStudio > 0){
            contadorS++;
        }
    }
        std::cout<<"Existem "<<contadorcas<<" casas disponiveis.\n";
        std::cout<<"Existem "<<contadorap<<" apartamentos disponiveis.\n";
        std::cout<<"Existem "<<contadorter<<" terrenos disponiveis.\n";
        std::cout<<"Existem "<<contadorF<<" flats disponiveis.\n";
        std::cout<<"Existem "<<contadorS<<" studios disponiveis.\n";
}

void SistemaImobiliaria::getDescricaoImoveis(){
    int i;
    std::cout<<"----------------Descricao de imoveis.----------------\n";
    for (i = 0; i < quant; i++){
        if (contadorCasa > 0){
            std::cout<<"----------------Casa 0"<<i<<"----------------\n";
            //std::vector<Casa> cas;
            std::cout<<"Logradouro: "<<cas[i].composicaoMultipla1.logradouro<<std::endl;
            std::cout<<"Numero: "<<cas[i].composicaoMultipla1.numero<<std::endl;
            std::cout<<"Bairro: "<<cas[i].composicaoMultipla1.bairro<<std::endl;
            std::cout<<"Cidade: "<<cas[i].composicaoMultipla1.cidade<<std::endl;
            std::cout<<"CEP: "<<cas[i].composicaoMultipla1.cep<<std::endl;
            std::cout<<"Valor: "<<cas[i].composicaoMultipla.valor<<std::endl;
            if(cas[i].composicaoMultipla.tipoOferta == 1){
                std::cout<<"O imovel esta disponivel para aluguel.\n";
            }else{
                std::cout<<"O imovel esta disponivel para venda.\n";
            }
                std::cout<<"Numero de pavimentos: "<<cas[i].numPavimentos<<std::endl;
                std::cout<<"Numero de quartos: "<<cas[i].numQuartos<<std::endl;
                std::cout<<"Area do terreno: "<<cas[i].areaTerreno<<std::endl;
                std::cout<<"Area construida: "<<cas[i].areaConstruida<<std::endl;

        }if (contadorApartamento > 0){
            std::cout<<"----------------Apartamento 0"<<i<<"----------------\n";
            //std::vector<Casa> cas;
            std::cout<<"Logradouro: "<<ap[i].composicaoMultipla1.logradouro<<std::endl;
            std::cout<<"Numero: "<<ap[i].composicaoMultipla1.numero<<std::endl;
            std::cout<<"Bairro: "<<ap[i].composicaoMultipla1.bairro<<std::endl;
            std::cout<<"Cidade: "<<ap[i].composicaoMultipla1.cidade<<std::endl;
            std::cout<<"CEP: "<<ap[i].composicaoMultipla1.cep<<std::endl;
            std::cout<<"Valor: "<<ap[i].composicaoMultipla.valor<<std::endl;
            if(ap[i].composicaoMultipla.tipoOferta == 1){
                std::cout<<"O imovel esta disponivel para aluguel.\n";
            }else{
                std::cout<<"O imovel esta disponivel para venda.\n";
            }
                std::cout<<"Posicao: "<<ap[i].posicao<<std::endl;
                std::cout<<"Numero de quartos: "<<ap[i].numQuartos<<std::endl;
                std::cout<<"Valor do condominio: "<<ap[i].valorCondominio<<std::endl;
                std::cout<<"Vagas na garagem: "<<ap[i].vagasGaragem<<std::endl;
                std::cout<<"Area: "<<ap[i].area<<std::endl;

        }if (contadorTerreno > 0){
            std::cout<<"----------------Terreno 0"<<i<<"----------------\n";
            //std::vector<Casa> cas;
            std::cout<<"Logradouro: "<<ter[i].composicaoMultipla1.logradouro<<std::endl;
            std::cout<<"Numero: "<<ter[i].composicaoMultipla1.numero<<std::endl;
            std::cout<<"Bairro: "<<ter[i].composicaoMultipla1.bairro<<std::endl;
            std::cout<<"Cidade: "<<ter[i].composicaoMultipla1.cidade<<std::endl;
            std::cout<<"CEP: "<<ter[i].composicaoMultipla1.cep<<std::endl;
            std::cout<<"Valor: "<<ter[i].composicaoMultipla.valor<<std::endl;
            if(ter[i].composicaoMultipla.tipoOferta == 1){
                std::cout<<"O imovel esta disponivel para aluguel.\n";
            }else{
                std::cout<<"O imovel esta disponivel para venda.\n";
            }
                std::cout<<"Area: "<<ter[i].area<<std::endl;
        }if (contadorFlat > 0){
            std::cout<<"----------------Flat 0"<<i<<"----------------\n";
            //std::vector<Casa> cas;
            std::cout<<"Logradouro: "<<fl[i].composicaoMultipla2.composicaoMultipla1.logradouro<<std::endl;
            std::cout<<"Numero: "<<fl[i].composicaoMultipla2.composicaoMultipla1.numero<<std::endl;
            std::cout<<"Bairro: "<<fl[i].composicaoMultipla2.composicaoMultipla1.bairro<<std::endl;
            std::cout<<"Cidade: "<<fl[i].composicaoMultipla2.composicaoMultipla1.cidade<<std::endl;
            std::cout<<"CEP: "<<fl[i].composicaoMultipla2.composicaoMultipla1.cep<<std::endl;
            std::cout<<"Valor: "<<fl[i].composicaoMultipla2.composicaoMultipla.valor<<std::endl;
            if(fl[i].composicaoMultipla2.composicaoMultipla.tipoOferta == 1){
                std::cout<<"O imovel esta disponivel para aluguel.\n";
            }else{
                std::cout<<"O imovel esta disponivel para venda.\n";
            }
                std::cout<<"Posicao: "<<fl[i].composicaoMultipla2.posicao<<std::endl;
                std::cout<<"Numero de quartos: "<<fl[i].composicaoMultipla2.numQuartos<<std::endl;
                std::cout<<"Valor do condominio: "<<fl[i].valorCondominio<<std::endl;
                std::cout<<"Vagas na garagem: "<<fl[i].composicaoMultipla2.vagasGaragem<<std::endl;
                std::cout<<"Area: "<<fl[i].areaFlat<<std::endl;
                std::cout<<"Possui:\n";
                if (fl[i].ar == 1){
                    std::cout<<"Ar condicionado.\n";
                }if (fl[i].internetETV == 1){
                    std::cout<<"Servicos de internet e TV.\n";
                }if (fl[i].servicosLavanderia == 1){
                    std::cout<<"Servicos de lavanderia.\n";
                }if (fl[i].limpeza == 1){
                    std::cout<<"Servicos de limpeza.\n";
                }if (fl[i].recepcao24h == 1){
                    std::cout<<"Recepcao 24h.\n";
                }
            }if (contadorStudio > 0){
            std::cout<<"----------------Studio 0"<<i<<"----------------\n";
            //std::vector<Casa> cas;
            std::cout<<"Logradouro: "<<st[i].composicaoMultipla2.composicaoMultipla1.logradouro<<std::endl;
            std::cout<<"Numero: "<<st[i].composicaoMultipla2.composicaoMultipla1.numero<<std::endl;
            std::cout<<"Bairro: "<<st[i].composicaoMultipla2.composicaoMultipla1.bairro<<std::endl;
            std::cout<<"Cidade: "<<st[i].composicaoMultipla2.composicaoMultipla1.cidade<<std::endl;
            std::cout<<"CEP: "<<st[i].composicaoMultipla2.composicaoMultipla1.cep<<std::endl;
            std::cout<<"Valor: "<<st[i].composicaoMultipla2.composicaoMultipla.valor<<std::endl;
            if(st[i].composicaoMultipla2.composicaoMultipla.tipoOferta == 1){
                std::cout<<"O imovel esta disponivel para aluguel.\n";
            }else{
                std::cout<<"O imovel esta disponivel para venda.\n";
            }
                std::cout<<"Posicao: "<<st[i].composicaoMultipla2.posicao<<std::endl;
                std::cout<<"Numero de quartos: "<<st[i].composicaoMultipla2.numQuartos<<std::endl;
                std::cout<<"Valor do condominio: "<<st[i].valorCondominio<<std::endl;
                std::cout<<"Vagas na garagem: "<<st[i].composicaoMultipla2.vagasGaragem<<std::endl;
                std::cout<<"Area: "<<st[i].areaStudio<<std::endl;
                std::cout<<"Possui:\n";
                if (st[i].ar == 1){
                    std::cout<<"Ar condicionado.\n";
                }if (st[i].internetETV == 1){
                    std::cout<<"Servicos de internet e TV.\n";
                }if (st[i].servicosLavanderia == 1){
                    std::cout<<"Servicos de lavanderia.\n";
                }if (st[i].limpeza == 1){
                    std::cout<<"Servicos de limpeza.\n";
                }if (st[i].recepcao24h == 1){
                    std::cout<<"Recepcao 24h.\n";
            }
        }
    }
}

void SistemaImobiliaria::getImoveisVenderPorTipo(){
    int o, i;
    std::cout<<"Qual imovel sera procurado? Digite 0 para CASA, 1 para APARTAMENTO, 2 para TERRENO, 3 para FLAT ou 4 para STUDIO.\n";
    std::cin>>o;
    if (o == 0){
        std::cout<<"----------------Casas disponiveis para venda.----------------\n";
        for (i = 0; i < quant; i++){
            if(cas[i].composicaoMultipla.tipoOferta == 1){
                std::cout<<"A casa 0"<<i<<" Esta disponivel para venda.\n";
        }
    }
    }else if (o == 1){
        std::cout<<"----------------Apartamentos disponiveis para venda.----------------\n";
        for (i = 0; i < quant; i++){
            if(ap[i].composicaoMultipla.tipoOferta == 1){
                std::cout<<"O apartamento 0"<<i<<" Esta disponivel para venda.\n";

        }
    }
    }else if (o == 2){
        std::cout<<"----------------Terrenos disponiveis para venda.----------------\n";
        for (i = 0; i < quant; i++){
            if(ter[i].composicaoMultipla.tipoOferta == 1){
                std::cout<<"O terreno 0"<<i<<" Esta disponivel para venda.\n";
            }
        }
    }else if (o == 3){
        std::cout<<"----------------Flat disponiveis para venda.----------------\n";
        for (i = 0; i < quant; i++){
            if(fl[i].composicaoMultipla2.composicaoMultipla.tipoOferta == 1){
                std::cout<<"O flat 0"<<i<<" Esta disponivel para venda.\n";

            }
        }
    }else if (o == 4){
        std::cout<<"----------------Studios disponiveis para venda.----------------\n";
        for (i = 0; i < quant; i++){
            if(st[i].composicaoMultipla2.composicaoMultipla.tipoOferta == 1){
                std::cout<<"O studio 0"<<i<<" Esta disponivel para venda.\n";

            }
        }
    }
}
void SistemaImobiliaria::getImoveisAlugarPorTipo(){
    int o, i;
    std::cout<<"Qual imovel sera procurado? Digite 0 para CASA, 1 para APARTAMENTO, 2 para TERRENO, 3 para FLAT ou 4 para STUDIO.\n";
    std::cin>>o;
    if (o == 0){
        std::cout<<"----------------Casas disponiveis para aluguel.----------------\n";
        for (i = 0; i < quant; i++){
            if(cas[i].composicaoMultipla.tipoOferta == 0){
                std::cout<<"A casa 0"<<i<<" Esta disponivel para aluguel.\n";
        }
    }
    }else if (o == 1){
        std::cout<<"----------------Apartamentos disponiveis para aluguel.----------------\n";
        for (i = 0; i < quant; i++){
            if(ap[i].composicaoMultipla.tipoOferta == 0){
                std::cout<<"O apartamento 0"<<i<<" Esta disponivel para aluguel.\n";

        }
    }
    }else if (o == 2){
        std::cout<<"----------------Terrenos disponiveis para aluguel.----------------\n";
        for (i = 0; i < quant; i++){
            if(ter[i].composicaoMultipla.tipoOferta == 0){
                std::cout<<"O terreno 0"<<i<<" Esta disponivel para aluguel.\n";
            }
        }
    }else if (o == 3){
        std::cout<<"----------------Flat disponiveis para aluguel.----------------\n";
        for (i = 0; i < quant; i++){
            if(fl[i].composicaoMultipla2.composicaoMultipla.tipoOferta == 0){
                std::cout<<"O flat 0"<<i<<" Esta disponivel para aluguel.\n";

            }
        }
    }else if (o == 4){
        std::cout<<"----------------Studios disponiveis para aluguel.----------------\n";
        for (i = 0; i < quant; i++){
            if(st[i].composicaoMultipla2.composicaoMultipla.tipoOferta == 0){
                std::cout<<"O studio 0"<<i<<" Esta disponivel para aluguel.\n";

            }
        }
    }
}
void SistemaImobiliaria::getImoveisParaAlugarPorBairro(){
    std::string bairro;
    int i;
    std::cout<<"Qual o bairro a ser procurado?";
    setbuf(stdin,NULL);
    std::getline(std::cin, bairro);
    for(i = 0; i < quant; i++){
        if((bairro == cas[i].composicaoMultipla1.bairro)&&(cas[i].composicaoMultipla.tipoOferta == 0)){
            std::cout<<"A casa 0"<<i<<" localizado no bairro "<<bairro<< "esta disponivel para aluguel.\n";

        }if((bairro == ap[i].composicaoMultipla1.bairro)&&(ap[i].composicaoMultipla.tipoOferta == 0)){
            std::cout<<"O apartamento 0"<<i<<" localizado no bairro "<<bairro<< "esta disponivel para aluguel.\n";

        }if((bairro == ter[i].composicaoMultipla1.bairro)&&(ter[i].composicaoMultipla.tipoOferta == 0)){
            std::cout<<"O terreno 0"<<i<<" localizado no bairro "<<bairro<< "esta disponivel para aluguel.\n";

        }if((bairro == fl[i].composicaoMultipla2.composicaoMultipla1.bairro)&&(fl[i].composicaoMultipla2.composicaoMultipla.tipoOferta == 0)){
            std::cout<<"O flat 0"<<i<<" localizado no bairro "<<bairro<< "esta disponivel para aluguel.\n";

        }if((bairro == st[i].composicaoMultipla2.composicaoMultipla1.bairro)&&(st[i].composicaoMultipla2.composicaoMultipla.tipoOferta == 0)){
            std::cout<<"O studio 0"<<i<<" localizado no bairro "<<bairro<< "esta disponivel para aluguel.\n";

        }
    }
}
void SistemaImobiliaria::getImoveisParaVenderPorBairro(){
    std::string bairro;
    int i;
    std::cout<<"Qual o bairro a ser procurado?";
    setbuf(stdin,NULL);
    std::getline(std::cin, bairro);
    for(i = 0; i < quant; i++){
        if((bairro == cas[i].composicaoMultipla1.bairro)&&(cas[i].composicaoMultipla.tipoOferta == 1)){
            std::cout<<"A casa 0"<<i<<" localizado no bairro "<<bairro<< "esta disponivel para venda.\n";

        }if((bairro == ap[i].composicaoMultipla1.bairro)&&(ap[i].composicaoMultipla.tipoOferta == 1)){
            std::cout<<"O apartamento 0"<<i<<" localizado no bairro "<<bairro<< "esta disponivel para venda.\n";

        }if((bairro == ter[i].composicaoMultipla1.bairro)&&(ter[i].composicaoMultipla.tipoOferta == 1)){
            std::cout<<"O terreno 0"<<i<<" localizado no bairro "<<bairro<< "esta disponivel para venda.\n";

        }if((bairro == fl[i].composicaoMultipla2.composicaoMultipla1.bairro)&&(fl[i].composicaoMultipla2.composicaoMultipla.tipoOferta == 1)){
            std::cout<<"O flat 0"<<i<<" localizado no bairro "<<bairro<< "esta disponivel para venda.\n";

        }if((bairro == st[i].composicaoMultipla2.composicaoMultipla1.bairro)&&(st[i].composicaoMultipla2.composicaoMultipla.tipoOferta == 1)){
            std::cout<<"O studio 0"<<i<<" localizado no bairro "<<bairro<< "esta disponivel para venda.\n";

        }
    }
}
void SistemaImobiliaria::getImovelPorCidade(){
    std::string cidade;
    int i;
    std::cout<<"Qual a cidade a ser procurada?";
    setbuf(stdin,NULL);
    std::getline(std::cin, cidade);
    for(i = 0; i < quant; i++){
        if(cidade == cas[i].composicaoMultipla1.cidade){
            std::cout<<"A casa 0"<<i<<" localizada na cidade "<<cidade<< "esta disponivel.\n";

        }if(cidade == ap[i].composicaoMultipla1.cidade){
            std::cout<<"O apartamento 0"<<i<<" localizado na cidade "<<cidade<< "esta disponivel.\n";

        }if(cidade == ter[i].composicaoMultipla1.cidade){
            std::cout<<"O terreno 0"<<i<<" localizado na cidade "<<cidade<< "esta disponivel.\n";

        }if(cidade == fl[i].composicaoMultipla2.composicaoMultipla1.cidade){
            std::cout<<"O flat 0"<<i<<" localizado na cidade "<<cidade<< "esta disponivel.\n";

        }if(cidade == st[i].composicaoMultipla2.composicaoMultipla1.cidade){
            std::cout<<"O studio 0"<<i<<" localizado na cidade "<<cidade<< "esta disponivel.\n";

        }
    }

}
SistemaImobiliaria::~SistemaImobiliaria()
{
    //dtor
}
