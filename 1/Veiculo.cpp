#include <iostream>

using namespace std;

class Veiculo {
protected:
  string marca;
  string modelo;
  int ano;

public:
  string get_marca() { return marca; }
  void set_marca(string marca) { this->marca = marca; }

  string get_modelo() { return modelo; }
  void set_modelo(string modelo) { this->modelo = modelo; }

  int get_ano() { return ano; }
  void set_ano(int ano) { this->ano = ano; }

  void exibir_dados() {
    cout << "Marca: " << marca << endl;
    cout << "Modelo: " << modelo << endl;
    cout << "Ano: " << ano << endl;
  }
};