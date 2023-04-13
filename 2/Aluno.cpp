#include "Pessoa.cpp"

class Aluno:public Pessoa {
    private:
        string turma;
    public:
        Aluno(string nome, string endereco, string telefone, string turma) : Pessoa(nome, endereco, telefone) {
            this->turma = turma;
        }
        void exibir_dados() override {
            Pessoa::exibir_dados();
            cout << "Turma: " << turma << endl;
        }
};