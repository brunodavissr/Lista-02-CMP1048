#include "Funcionario.cpp"

class Tecnico:public Funcionario {
	private:
		float bonus_projetos_concluidos;
	public:
		Tecnico(string nome, int matricula, float salario_base, float bonus_projetos_concluidos) : Funcionario(nome, matricula, salario_base) {
			this->bonus_projetos_concluidos = bonus_projetos_concluidos;
		}
		float calcularSalario() {
			return salario_base + bonus_projetos_concluidos;
		}
};
