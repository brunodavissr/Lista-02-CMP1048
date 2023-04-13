#include "Veiculo.cpp"

class Carro : public Veiculo {
private:
  int numero_portas;
  int capacidade_porta_malas;
  int capacidade_passageiros;

public:
  Carro(int numero_portas, int capacidade_porta_malas,
        int capacidade_passageiros) {
    this->numero_portas = numero_portas;
    this->capacidade_porta_malas = capacidade_porta_malas;
    this->capacidade_passageiros = capacidade_passageiros;
  }
  int get_numero_portas() { return numero_portas; }
  void set_numero_portas(int numero_portas) {
    this->numero_portas = numero_portas;
  }

  int get_capacidade_porta_malas() { return capacidade_porta_malas; }
  void set_capacidade_porta_malas(int capacidade_porta_malas) {
    this->capacidade_porta_malas = capacidade_porta_malas;
  }

  int get_capacidade_passageiros() { return capacidade_passageiros; }
  void set_capacidade_passageiros(int capacidade_passageiros) {
    this->capacidade_passageiros = capacidade_passageiros;
  }

  void exibir_dados() {
    cout << "Numero portas: " << numero_portas << endl;
    cout << "Capacidade porta malas: " << capacidade_porta_malas << endl;
    cout << "Capacidade passageiros: " << capacidade_passageiros << endl;
  }
};