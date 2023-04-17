#include "Funcionario.cpp"

class Gerente:public Funcionario {
	private:
		float porcentagem_participacao_nos_lucros;
	public:
		Gerente(string nome, int matricula, float salario_base, float porcentagem_participacao_nos_lucros) : Funcionario(nome, matricula, salario_base) {
			this->porcentagem_participacao_nos_lucros = porcentagem_participacao_nos_lucros;
		}
		float calcularSalario() {
			return salario_base + (porcentagem_participacao_nos_lucros/100.0 * salario_base);
		}
};
