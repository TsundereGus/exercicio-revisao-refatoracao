#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include "Empregado.hpp"

class Engenheiro : public Empregado {
    private:
	    int projetos = 0;   
    public:
    /*projetos do engenheiro*/
    void setProjetos(int enP){
        projetos = enP;
    }

    int getProjetos(){
        return projetos;
    }    

    void collectData(string collNome, double collSalario, int collProjetos, double collHTrab) override;
    void print(double hTrab) override;
};

#endif