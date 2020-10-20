#ifndef VENDEDOR_H
#define VENDEDOR_H

#include "Empregado.hpp"

class Vendedor : public Empregado {
    private:
        double quotaMensalVendas = 0;
    public:
        void setQuotaMensalVendas(double salH){
            quotaMensalVendas = salH;
        }

        double getQuotaMensalVendas(){
            return quotaMensalVendas;
        }
        double quotaTotalAnual();
        void collectData(string collNome, double collSalario, int collQuota, double collPrint);
        void print(double hTrab) override;
};

#endif