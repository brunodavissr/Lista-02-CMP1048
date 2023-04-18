#include <iostream>

using namespace std;

class ContaBancaria {
	protected:
		int numero_conta;
		float saldo;
	public:
		ContaBancaria(int numero_conta, float saldo) {
			this->numero_conta = numero_conta;
			this->saldo = saldo;
		}
		virtual void sacar(float saque) {
			if(saque <= saldo) {
				saldo -= saque;
				cout << "Saque de " << saque << " realizado com sucesso\n";
 			}
 			else
 				cout << "Valor de saque superior ao saldo\n";
		}
		virtual void depositar(float deposito) {
			saldo += deposito;
		}
};
