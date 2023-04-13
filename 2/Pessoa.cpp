#include <iostream>

using namespace std;

class Pessoa {
    protected:
        string nome;
        string endereco;
        string telefone;
    public:
        Pessoa(string nome, string endereco, string telefone) {
            this->nome = nome;
            this->endereco = endereco;
            this->telefone = telefone;
        }

        virtual void exibir_dados() {
            cout << "Nome: " << nome << endl;
            cout << "Endereco: " << endereco << endl;
            cout << "Telefone: " << telefone << endl; 
        }
};