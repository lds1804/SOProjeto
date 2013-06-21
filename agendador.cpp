#include "agendador.h"



void agendador::criajobs()
{
    job* novojob=new job(200,300,4,0);
    listajobsativos[0]=novojob;


    njobsativos=1;

}


agendador::agendador(int temptotal)
{   processador=new cpu();
    mem=new memoria();
    tempototal=0;
    tempoatual=0;
    njobsativos=0;

}

void agendador::iniciasimulacao()
{

}

void agendador::imprimeagendador()
{  // cout<<"Memoria "<<mem->




}
