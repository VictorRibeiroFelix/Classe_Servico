#include <iostream>

using namespace std;

class tarefa{
  private:
    int id;
    string descricao;
    int tipo;
    float valorHr;
    int qtdeTrab;

  public:
    tarefa();
    tarefa(int, string, int, float, int);

    int getId() {return this->id;}
    string getDescricao() {return this->descricao;}
    int getTipo() {return this->tipo;}
    float getValorHr() {return this->valorHr;}
    int getQtdeTrab() {return this->qtdeTrab;}

    void setId(int id) {this->id = id;}
    void setDescricao(string descricao) {this->descricao = descricao;}
    void serTipo(int tipo) {this->tipo = tipo;}
    void setValorHr(float valorHr) {this->valorHr = valorHr;}
    void setQtdeTrab(int qtdeTrab) {this->qtdeTrab = qtdeTrab;}

    void ler();
    void imprimir();
};

tarefa::tarefa(){
    this->id = 0;
    this->descricao = " ";
    this->tipo = 0;
    this->valorHr = 0.0;
    this->qtdeTrab = 0;
}

tarefa::tarefa(int id, string descricao, int tipo, float valorHr, int qtdeTrab){
    this->id = id;
    this->descricao = descricao;
    this->tipo = tipo;
    this->valorHr = valorHr;
    this->qtdeTrab = qtdeTrab;
}

void tarefa::ler() {
    cout << "\nLer Tarefa\n";
    cout << "ID: ";
    cin >> id;
    cout << "Descricao: ";
    cin >> descricao;
    cout << "Tipo: ";
    cin >> tipo;
    cout << "Valor da Hora: ";
    cin >> valorHr;
    cout << "Quantidade Trabalho: ";
    cin >> qtdeTrab;
}

void tarefa::imprimir() {
    cout << "\nImprimir Tarefa\n";
    cout << "Id: " << id << endl;
    cout << "Descricao: " << descricao << endl;
    cout << "Tipo: " << tipo << endl;
    cout << "Valor da Hora: " << valorHr << endl;
    cout << "Quantidade Trabalho: " << qtdeTrab << endl;
}