#ifndef AGENDADOR_H_INCLUDED
#define AGENDADOR_H_INCLUDED
#include "cpu.h"
#include "memoria.h"
#include "disco.h"
#include "job.h"


class agendador
{
private:
cpu*        processador;
memoria*    mem;
disco*      disc;
job*        listajobsativos[20];
int         tempototal;
int         tempoatual;
int         njobsativos;


public:
void criajobs();
agendador(int temptotal);
void imprimeagendador();
void iniciasimulacao();


};

#endif // AGENDADOR_H_INCLUDED
