//DATA.H
#include <iostream>

using namespace std;

class Data {
 private:
    int dia;
    int mes;
    int ano;

 public:
    Data();
    Data(int, int, int);

    int getDia();
    int getMes();
    int getAno();

    void setDia (int dia){ this-> dia = dia; };
    void setMes (int mes){ this-> mes = mes; };
    void setAno (int ano){ this-> ano = ano; };

    void ler();
    void imprimir();
};

Data::Data(){
    this -> dia = 0;
    this -> mes = 0;
    this -> ano = 0;
};

Data::Data(int dia, int mes, int ano){
    this -> dia = dia;
    this -> mes = mes;
    this -> ano = ano;
}

int Data::getDia(){
    return this -> dia;
}
int Data::getMes(){
    return this -> mes;
}
int Data::getAno(){
    return this -> ano;
}

void Data:: ler(){
    cout << "\nDia: ";
    cin >> dia;
    cout << "\nMes: ";
    cin >> mes;
    cout << "\nAno: ";
    cin >> ano;
}

void Data::imprimir(){
    cout << "\nDia " << dia;
    cout << " Mes " << mes;
    cout << " Ano " << ano;

}


