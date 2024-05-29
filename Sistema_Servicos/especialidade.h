#include <iostream>

using namespace std;

class espec{
  private:
    int id;
    string descricao;
    int quantidade;

  public:
    espec();
    espec(int, string, int);

    int getId() {return  this->id;}
    string getDescricao() {return this->descricao;}
    int getQuantidade() {return this->quantidade;}

    void setId(int id) {this->id = id;}
    void setDescricao(string descricao) {this->descricao = descricao;}
    void setQuantidade(int quantidade) {this->quantidade = quantidade;}

    void ler();
    void imprimir();
};

espec::espec() {
    this->id = 0;
    this->descricao = "";
    this->quantidade = 0;
}

espec::espec(int id, string descricao, int quantidade) {
    this->id = id;
    this->descricao = descricao;
    this->quantidade = quantidade;
}

void espec::ler() {
    cout << "\nLer Especialidade\n";
    cout << "ID: ";
    cin >> id;
    cout << "Descricao: ";
    cin >> descricao;
    cout << "Quantidade: ";
    cin >> quantidade;
}

void espec::imprimir() {
    cout << "\nImprimir Especialidade\n";
    cout << "Id: " << id << endl;
    cout << "Descricao: " << descricao << endl;
    cout << "Quantidade: " << quantidade << endl;
}