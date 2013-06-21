#ifndef CPU_H_INCLUDED
#define CPU_H_INCLUDED
#include "job.h"
#include "fila.h"

class cpu

{

private:
fila* filadecpu;
bool ocupado;
job* jobusandocpu;


public:
cpu();




};





#endif // CPU_H_INCLUDED
