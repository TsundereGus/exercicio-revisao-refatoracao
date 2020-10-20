#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

using namespace std;

class Empregado {
	
  private:
    double salarioHora;  
    string nome;
  
  public:
    /*Nome do empregado*/
    void setNome(string nEmp){
      nome = nEmp;
    }

    string getNome(){
      return nome;
    }

    /*Salário por hora*/
    void setSalarioHora(double salH){
      salarioHora = salH;
    }

    double getSalarioHora(){
      return salarioHora;
    }

    /*quota mensal de vendas*/
    virtual void collectData(string collNome, double collSalario, int collQP, double collPrint) = 0;
    virtual void print(double hTrab) = 0;
    double pagamentoMes(double horasTrabalhadas);
};

#endif