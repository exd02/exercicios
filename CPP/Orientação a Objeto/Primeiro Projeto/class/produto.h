#pragma once

class Produto
{
private:
  std::string nome;
  float custo;
  float preco;
  int estoque;
public:
  /* Construtor */
  Produto(std::string nome, float custo, float preco, int estoque);

  /* Retorna o parâmetro 'std::string nome' */
  std::string getNome();

  /* Retorna o parâmetro 'float custo' */
  float getCusto();

  /* Retorna o parâmetro 'float preco' */
  float getPreco();

  /* Retorna o parâmetro 'int estoque' */
  int getEstoque();

  /* Altera o parâmetro 'std::string nome' */
  void setNome(std::string nome);

  /* Altera o parâmetro 'float custo' */
  void setCusto(float custo);

  /* Altera o parâmetro 'float preco' */
  void setPreco(float preco);

  /* Altera o parâmetro 'int estoque' */
  void setEstoque(int estoque);
};

Produto::Produto(std::string nome="", float custo=0.0, float preco=0.0, int estoque=0)
{
  this->nome = nome;
  this->custo = custo;
  this->preco = preco;
  this->estoque = estoque;
}

std::string Produto::getNome() {
  return nome;
}

float Produto::getCusto() {
  return custo;
}

float Produto::getPreco() {
  return preco;
}

int Produto::getEstoque() {
  return estoque;
}

void Produto::setNome(std::string nome) {
  this->nome = nome;
}

void Produto::setCusto(float custo) {
  this->custo = custo;
}

void Produto::setPreco(float preco) {
  this->preco = preco;
}

void Produto::setEstoque(int estoque) {
  this->estoque = estoque;
}