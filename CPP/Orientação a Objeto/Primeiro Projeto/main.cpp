#include <iostream>
#include "class/roda.h"
#include "class/produto.h"

int main()
{
  // Classe Roda
  Roda roda("Roda Relampago Mcqueen", 5);
  /*
  std::cout << roda.getNome() << "\n";
  std::cout << roda.getAro() << "\n";

  std::cout << "\nAlterando 'roda (nome e aro)' usando Metodo: \n\n";
  roda.setNome("Roda Relampago Mcqueen v2");
  roda.setAro(6);

  std::cout << roda.getNome() << "\n";
  std::cout << roda.getAro() << "\n";
  */

  // Classe Produto
  Produto produto("Biscoito", 1.90, 3.0, 120);
  /*
  std::cout << produto.getNome() << "\n";
  std::cout << produto.getCusto() << "\n";
  std::cout << produto.getPreco() << "\n";
  std::cout << produto.getEstoque() << "\n";

  std::cout << "\nAlterando 'produto (nome, custo, preco e estoque)' usando Metodo: \n\n";
  produto.setNome("Cookie");
  produto.setCusto(3.0);
  produto.setPreco(5.8);
  produto.setEstoque(99);

  std::cout << produto.getNome() << "\n";
  std::cout << produto.getCusto() << "\n";
  std::cout << produto.getPreco() << "\n";
  std::cout << produto.getEstoque() << "\n";
  */

  return 0;
}