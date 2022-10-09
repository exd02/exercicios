#include <iostream>
#include <string>
#include "cliente.h"
#include "listaCliente.h"

int main() {
  
  // lista.addCliente();
  // cliente buscado = lista.buscaPorCpf("123.456.789-10");
  // buscado.printarClienteCurto();

  listaCliente lista(100);
  lista.addClientesAleatorios(10);
  lista.printHead(5);

  return 0;
}