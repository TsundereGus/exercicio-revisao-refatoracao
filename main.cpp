#include "Empregado.cpp"
#include "Engenheiro.cpp"
#include "Vendedor.cpp"

int main() {

  Engenheiro eng1;
  eng1.collectData("Joao Snow", 35, 3, 9.5);
  
  Engenheiro eng2;
  eng2.collectData("Daniela Targaryen", 30, 1, 8);
  
  Engenheiro eng3;
  eng3.collectData("BrunoStark", 30, 2, 8);

  Vendedor vend1;
  vend1.collectData("TonhoLannister", 20, 5000, 6);

  Vendedor vend2;
  vend2.collectData("Jose Mormont", 25, 3000, 8);
  
  Vendedor vend3;
  vend3.collectData("Sonia Stark", 30, 4000, 8);

  return 0;	
}
