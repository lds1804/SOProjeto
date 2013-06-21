#ifndef MEMORIA_H_INCLUDED
#define MEMORIA_H_INCLUDED
#include "job.h"
#include "fila.h"

class memoria
{

private:
fila*   filadememoria;
bool    cheio;
job*    jobsnamemoria[1000];
int     tamanhomemoria;
int     tamanhoutilizado;
int     numerodejobsmemoria;


public:
memoria();
bool gettamanhodememoria();
fila* getfiladememoria();
job*  getjobsnamemoria();





};


#endif // MEMORIA_H_INCLUDED
