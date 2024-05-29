#include <iostream>

using namespace std;

class serv{
private:
    int id;
    int profissional;
    int tarefa;
    float horasTrab;
    float vlrHora;
    char status;

public:
    serv();
    serv(int, int, int, float, float, char);

    int getId() {return  this->id;}
    int getProfissioanl() {return this->profissional;}
    int getTarefa() {return this->tarefa;}
    float getHorasTrab() {return this->horasTrab;}
    float getVlrHora() {return this->vlrHora;}
    char getStatus() {return this->status;}

    void setId(int id) {this->id = id;}
    void setProfissional(int profissional) {this->profissional = profissional;}
    void setTarefa(int tarefa) {this->tarefa = tarefa;}
    void setHorasTrab(float horasTrab) {this->horasTrab = horasTrab;}
    void setVlrHora(float vlrHora) {this->vlrHora = vlrHora;}
    void setStatus(char status) {this->status = status;}

    void ler();
    void imprimir();
};

serv::serv() {
    this->id = 0;
    this->profissional = 0;
    this->tarefa = 0;
    this->horasTrab = 0.0;
    this->vlrHora = 0.0;
    this->status = ' ';
}

serv::serv(int id, int profissional, int tarefa, float horasTrab, float vlrHora, char status) {
    this->id = id;
    this->profissional = profissional;
    this->tarefa = tarefa;
    this->horasTrab = horasTrab;
    this->vlrHora = vlrHora;
    this->status = status;
}

void serv::ler() {
    cout << "\nLer Servico\n";
    cout << "ID: ";
    cin >> id;
    cout << "Profissional: ";
    cin >> profissional;
    cout << "Tarefa: ";
    cin >> tarefa;
    cout << "Horas Trabalhadas: ";
    cin >> horasTrab;
    cout << "Valor da Hora: ";
    cin >> vlrHora;
    cout << "Status: ";
    cin >> status;
}

void serv::imprimir() {
    cout << "\nImprimir Servico\n";
    cout << "id: " << id << endl;
    cout << "Profissional: " << profissional << endl;
    cout << "Tarefa: " << tarefa << endl;
    cout << "Horas Trabalhadas: " << horasTrab << endl;
    cout << "Valor da Hora: " << vlrHora << endl;
    cout << "Status: " << status << endl;
}