//DATA.CPP
#include "Data.h"

using namespace std;

int main(){
    Data d1;
    d1.ler();
    d1.imprimir();

    Data d2(10, 4, 2013);
    d2.imprimir();

    cout << "\n\nPrimeira Leitura "<<" Dia "<< d1.getDia() << " Mes "<< d1.getMes() << " Ano "<< d1.getAno() << endl;

    d2.setDia(20);
    d2.setAno(2014);
    d2.imprimir();
};
