#include <iostream>

using namespace std;

class Funcionario {
	protected:
		string nome;
		int matricula;
		float salario_base;
	public:
		Funcionario(string nome, int matricula, float salario_base) {
			this->nome = nome;
			this->matricula = matricula;
			this->salario_base = salario_base;
		}
};
