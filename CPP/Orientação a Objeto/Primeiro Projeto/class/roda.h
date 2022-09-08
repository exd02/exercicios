#pragma once

class Roda {
private:
  int aro;
  std::string nome;
public:
  /* Construtor */
  Roda(std::string nome, int aro);

  /* Retorna o parâmetro 'std::string nome' */
  std::string getNome();

  /* Retorna o parâmetro 'int aro' */
  int getAro();

  /* Alterar o parâmetro 'std::string nome' */
  void setNome(std::string nome);

  /* Alterar o parâmetro 'int aro' */
  void setAro(int aro);
  
  /* Funçao do tipo void que printa todos os dados da Roda */
  void PrintRoda();
};

Roda::Roda(std::string nome="", int aro=0) {
  this->nome = nome;
  this->aro = aro;
}

std::string Roda::getNome() {
  return nome;
}

int Roda::getAro() {
  return aro;
}

void Roda::setNome(std::string nome) {
  this->nome = nome;
}

void Roda::setAro(int aro) {
  this->aro = aro;
}

void Roda::PrintRoda() {
  std::cout << nome << " (Aro " << aro << ")" << "\n";
}