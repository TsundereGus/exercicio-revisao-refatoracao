#include "Engenheiro.hpp"

void Engenheiro::print(double hTrab){
  std::cout << "Nome: " << this->getNome() << std::endl;
  std::cout << "Salario Mes: " << this->pagamentoMes(hTrab) << std::endl;
  std::cout << "Projetos: " << getProjetos() << std::endl;  
  std::cout << std::endl;
}

void Engenheiro::collectData(string collNome, double collSalario, int collProjetos, double collHTrab){
  setNome(collNome);
  setSalarioHora(collSalario);
  setProjetos(collProjetos);
  print(collHTrab);
}