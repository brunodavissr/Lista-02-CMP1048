#include "ContaBancaria.cpp"

class ContaCorrente:public ContaBancaria {
	private:
		float limite_cheque_especial;
		float saldo_cheque_especial;
	public:
		ContaCorrente(int numero_conta, float saldo, float limite_cheque_especial, float saldo_cheque_especial) : ContaBancaria(numero_conta, saldo) {
			this->limite_cheque_especial = limite_cheque_especial;
			this->saldo_cheque_especial = saldo_cheque_especial;
		}
		void sacar(float saque) override {
			if(saque <= saldo) {
				saldo -= saque;
				cout << "Saque de " << saque << " realizado com sucesso\n";
			}
			else if(saque <= saldo + saldo_cheque_especial) {
				saldo_cheque_especial -= (saque - saldo);
				saldo = 0;
				cout << "Saque de " << saque << " realizado com sucesso\n";
			}
			else
 				cout << "Valor de saque superior ao saldo\n";
		}
		void depositar(float deposito) override {
			if(saldo_cheque_especial < limite_cheque_especial) {
				float necessario = limite_cheque_especial - saldo_cheque_especial;
				if(deposito >= necessario) {
					saldo_cheque_especial += necessario;
					deposito -= necessario;
				}
				else {
					saldo_cheque_especial += deposito;
					deposito = 0;
				}
			}
			saldo += deposito;
		}
};
