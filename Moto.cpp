#include "Veiculo.cpp"

class Moto : public Veiculo {
  string tipo_moto;
  int peso_moto;

public:
  Moto(string tipo_moto, int peso_moto) {
    this->tipo_moto = tipo_moto;
    this->peso_moto = peso_moto;
  }
  string get_tipo_moto() { return tipo_moto; }
  void set_tipo_moto(string tipo_moto) { this->tipo_moto = tipo_moto; }

  int get_peso_moto() { return peso_moto; }
  void set_peso_moto(int peso_moto) { this->peso_moto = peso_moto; }

  void exibir_dados() {
    cout << "Tipo moto: " << tipo_moto << endl;
    cout << "Peso moto: " << peso_moto << endl;
  }
};
