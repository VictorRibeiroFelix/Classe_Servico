#include <iostream>

using namespace std;

class tipo{
private:
    int id;
    string descricao;

public:
    tipo();
    tipo(int, string);

    int getId() {return  this->id;}
    string getDescricao() {return this->descricao;}

    void setId(int id) {this->id = id;}
    void setDescricao(string descricao) {this->descricao = descricao;}

    void ler();
    void imprimir();
};

tipo::tipo() {
    this->id = 0;
    this->descricao = "";
}

tipo::tipo(int id, string descricao) {
    this->id = id;
    this->descricao = descricao;
}

void tipo::ler() {
    cout << "\nLer Tipo\n";
    cout << "ID: ";
    cin >> id;
    cout << "Descricao: ";
    cin >> descricao;
}

void tipo::imprimir() {
    cout << "\nImprimir Tipo\n";
    cout << "Id: " << id << endl;
    cout << "Descricao: " << descricao << endl;
}