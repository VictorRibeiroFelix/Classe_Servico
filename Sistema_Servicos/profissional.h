#include <iostream>

using namespace std;

class profis{
private:
    int id;
    string nome;
    string nascimento;
    int especialidade;

public:
    profis();
    profis(int, string, string, int);

    int getId() {return  this->id;}
    string getNome() {return this->nome;}
    string getNascimento() {return this->nascimento;}
    int getEspecialidade() {return this->especialidade;}

    void setId(int id) {this->id = id;}
    void setNome(string nome) {this->nome = nome;}
    void setNascimento(string nascimento) {this->nascimento = nascimento;}
    void setEspecialidade(int especialidade) {this->especialidade = especialidade;}

    void ler();
    void imprimir();
};

profis::profis() {
    this->id = 0;
    this->nome = "";
    this->nascimento = "";
    this->especialidade = 0;
}

profis::profis(int id, string nome, string nascimento, int especialidade) {
    this->id = id;
    this->nome = nome;
    this->nascimento = nascimento;
    this->especialidade = especialidade;
}

void profis::ler() {
    cout << "\nLer Profissional\n";
    cout << "ID: ";
    cin >> id;
    cout << "Nome: ";
    cin >> nome;
    cout << "Nascimento: ";
    cin >> nascimento;
    cout << "Especialidade: ";
    cin >> especialidade;
}

void profis::imprimir() {
    cout << "\nImprimir Profissional\n";
    cout << "Id: " << id << endl;
    cout << "Nome: " << nome << endl;
    cout << "Nascimento: " << nascimento << endl;
    cout << "Especialidade: " << especialidade << endl;
}