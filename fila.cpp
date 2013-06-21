#include "fila.h"
#include <iostream>

using namespace std;
void    fila::inserejobnafila(job* jobfila)
{
    if(numerojobsfila==0 && numerojobsfila<1000)
    {   inicio=0;
        fim=0;
        numerojobsfila++;
        filadejobs[0]=jobfila;
    }

    if(numerojobsfila>0 && numerojobsfila<1000)
    {   fim=(fim+1)%1000;
        filadejobs[fim]=jobfila;
        numerojobsfila++;
    }

    if(numerojobsfila>=1000)
        cout<< "Fila cheia"<<endl;

}


job* fila::removejobfila()
{   int prov=inicio;
    if(numerojobsfila==0)
    {cout << "Underflow"<<endl;
     return NULL;
    }

    else
    {inicio=(inicio+1)%1000;

    }


return filadejobs[prov];
}



fila::fila()
{numerojobsfila=0;
inicio=-1;
fim=-1;



}

bool fila::filavazia()
{ if(numerojobsfila==0)
    return false;
  else
    return true;

}
