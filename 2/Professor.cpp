#include "Pessoa.cpp"

class Professor:public Pessoa {
    private:
        string disciplina;
    public:
        Professor(string nome, string endereco, string telefone, string disciplina) : Pessoa(nome, endereco, telefone) {
            this->disciplina = disciplina;
        }
        void exibir_dados() override {
            Pessoa::exibir_dados();
            cout << "Disciplina: " << disciplina << endl;
        }
};