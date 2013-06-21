#include "job.h"

job::job(int tempproc,int quantmemoria,int nentsai,int ident)
{   tempodeprocessamento=tempproc;
    quantidadememoria=quantmemoria;
    numerodeentradassaidas=nentsai;
    intervaloes=tempproc/nentsai;
    id=ident;



}

int job::gettempodeprocessamento()
{return tempodeprocessamento;
}

int job::getquantmemoria()
{return quantidadememoria;

}
int job::getnumeroes()
{
    return numerodeentradassaidas;
}

int job::getintervaloes()
{

return intervaloes;
}
int job::getid()
{return id;

}
