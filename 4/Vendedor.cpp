#include "Funcionario.cpp"

class Vendedor:public Funcionario {
	private:
		float comissao_de_vendas;
	public:
		Vendedor(string nome, int matricula, float salario_base, float comissao_de_vendas) : Funcionario(nome, matricula, salario_base) {
			this->comissao_de_vendas = comissao_de_vendas;
		}
		float calcularSalario() {
			return salario_base + comissao_de_vendas;
		}
};
