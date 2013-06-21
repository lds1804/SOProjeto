#ifndef JOB_H_INCLUDED
#define JOB_H_INCLUDED


class job {


private:
int tempodeprocessamento;
int quantidadememoria;
int numerodeentradassaidas;
int intervaloes;
int id;




public:
job(int tempproc,int quantmemoria,int nentsai,int ident);
int gettempodeprocessamento();
int getquantmemoria();
int getnumeroes();
int getintervaloes();
int getid();






};

#endif // JOB_H_INCLUDED
