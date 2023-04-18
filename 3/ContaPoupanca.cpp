#include "ContaBancaria.cpp"

class ContaPoupanca:public ContaBancaria {
	private:
		float taxa_de_juros;
	public:
		ContaPoupanca(int numero_conta, float saldo, float taxa_de_juros) : ContaBancaria(numero_conta, saldo) {
			this->taxa_de_juros = taxa_de_juros;
		}
		void sacar(float saque) override {
			if(saque <= saldo) {
				saldo -= saque;
				cout << "Saque de " << saque << " realizado com sucesso\n";
 			}
 			else
 				cout << "Valor de saque superior ao saldo\n";
		}
		void depositar(float deposito) override {
			saldo += deposito - (taxa_de_juros/100.0 * deposito);
		}
};
