#include "Veiculo.cpp"

class Caminhao : public Veiculo {
private:
  int capacidade_carga;
  int comprimento_carroceria;
  int altura_veiculo;

public:
  Caminhao(int capacidade_carga, int comprimento_carroceria,
           int altura_veiculo) {
    this->capacidade_carga = capacidade_carga;
    this->comprimento_carroceria = comprimento_carroceria;
    this->altura_veiculo = altura_veiculo;
  }
  int get_capacidade_carga() { return capacidade_carga; }
  void set_capacidade_carga(int capacidade_carga) {
    this->capacidade_carga = capacidade_carga;
  }

  int get_comprimento_carroceria() { return comprimento_carroceria; }
  void set_comprimento_carroceria(int comprimento_carroceria) {
    this->comprimento_carroceria = comprimento_carroceria;
  }

  int get_altura_veiculo() { return altura_veiculo; }
  void set_altura_veiculo(int altura_veiculo) {
    this->altura_veiculo = altura_veiculo;
  }
  void exibir_dados() {
    cout << "Capacidade carga: " << capacidade_carga << endl;
    cout << "Comprimento carroceria: " << comprimento_carroceria << endl;
    cout << "Altura veiculo: " << altura_veiculo << endl;
  }
};
