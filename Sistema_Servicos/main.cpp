#include <iostream>
#include "especialidade.h"
#include "profissional.h"
#include "servico.h"
#include "tarefa.h"
#include "tipo.h"

using namespace std;

int main() {
    profis pes1;
    pes1.ler();
    pes1.imprimir();

    cout<< "\nNome:  " << pes1.getNome() << endl;
    cout<< "\nEspecialidade:  " << pes1.getEspecialidade() << endl;

    profis pes2(25, "Ana", "Abril", 2);
    pes2.imprimir();

    pes2.setId(14);
    pes2.setNome("Igor");
    pes2.setNascimento("Maio");
    pes2.setEspecialidade(4);

    pes2.imprimir();

    serv ser1;
    ser1.ler();
    ser1.imprimir();

    cout<< "\nId servico 1:  " << ser1.getId() << endl;

    serv ser2(1, 4, 6, 48.0, 15.25, 'S');
    ser2.imprimir();

    ser2.setHorasTrab(50.0);
    ser2.setTarefa(40);
    ser2.imprimir();

    espec espec1;
    espec1.ler();
    espec1.imprimir();

    cout<< "\nDescricao:  " << espec1.getDescricao() << endl;

    espec espes2;
    espes2.imprimir();

    espes2.setId(458);
    espes2.setQuantidade(10);
    espes2.setDescricao("Contabilidade");

    espes2.imprimir();

    tarefa tarefa1;
    tarefa1.ler();
    tarefa1.imprimir();

    cout<< "\nTipo:  " << tarefa1.getTipo() << endl;

    tarefa tarefa2;
    tarefa2.imprimir();

    tarefa2.setId(888);
    tarefa2.setDescricao("Arrumar a lampada");
    tarefa2.serTipo(2);
    tarefa2.setQtdeTrab(4);
    tarefa2.setValorHr(30.50);

    tarefa2.imprimir();

    tipo tipo1;
    tipo1.ler();
    tipo1.imprimir();

    cout<< "\nDescricao:  " << tipo1.getDescricao() << endl;

    tipo tipo2(41, "Leve");

    tipo2.setId(49);
    tipo2.setDescricao("Pesado");
    tipo2.imprimir();


    return 0;
}
