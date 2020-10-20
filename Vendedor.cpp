#include "Vendedor.hpp"

#define MESES_DO_ANO 12

double Vendedor::quotaTotalAnual() {
	return getQuotaMensalVendas() * MESES_DO_ANO;
}

void Vendedor::print(double hTrab){
	std::cout << "Nome: " << this->getNome() << std::endl;
  	std::cout << "Salario Mes: " << this->pagamentoMes(hTrab) << std::endl;
  	std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl; 
  	std::cout << std::endl;
}

void Vendedor::collectData(string collNome, double collSalario, int collProjetos, double collHTrab){
  setNome(collNome);
  setSalarioHora(collSalario);
  setQuotaMensalVendas(collProjetos);
  print(collHTrab);
}
