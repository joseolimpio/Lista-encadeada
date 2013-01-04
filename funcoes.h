#ifndef FUNCOES_H_INCLUDED
#define FUNCOES_H_INCLUDED
#define MAX 30

typedef struct { float dado;
                 int   prox;
               } Tno;

typedef struct {    Tno V[MAX];
                    int tamMax;
                    int prox;
                    int fim;
                  } Lista;


typedef enum { FALSE, TRUE } bool;

int antes;
int depois;

// ***********************************************
// ******  initLista                        ******
// ***********************************************

void initlista(Lista*L,int tamMax)
{
     antes = -1;
     depois = -1;
     L->tamMax = tamMax;
     L->fim = -1;

}
// ***********************************************
// ******  limpaLista                       ******
// ***********************************************


// ***********************************************
// ******  tamLista                         ******
// ***********************************************
int tamLista(Lista*L)
{
    int n = 0;

     n = L->fim+1;

     return n;

 }


// ***********************************************
// ******  imprimeLista                     ******
// ***********************************************
void imprimeLista(Lista *L){
    int posicao = 0;


            if((posicao != -1)&&(posicao < L->tamMax))
                {

                    while(posicao != -1)
                    {
                        printf("Dado[%f] - Posição[%i]\n",L->V[posicao].dado, posicao);
                        posicao = L->V[posicao].prox;
                    }
                }

}



// ***********************************************
// ******  imprimeListaTotal                ******
// ***********************************************


// ***********************************************
// ******  insereElemento                   ******
// ***********************************************
bool insereElemento(Lista*L, int elemento, int posicao)
{
    bool r = 0;
    antes = posicao-1;
    depois = posicao+1;
     if((antes > -1)&& (depois > -1) )
        {
            L->V[antes].prox = elemento;
            L->V[posicao].dado = elemento;
            L->V[depois].prox = elemento;
        r= 1;
        }
    return r;
}
// ***********************************************
// ******  buscaElemento                    ******
// ***********************************************
int buscaElemento(Lista *L, float elemento)
{
    int posicao;
    for(posicao = 0; posicao < MAX; posicao++){
        if(L->V[posicao].dado == elemento)
        return elemento;
    }
    return -1;
}


// ***********************************************
// ******  removeElemento                   ******
// ***********************************************


// ***********************************************
// ***********************************************
// ***********************************************



#endif // FUNCOES_H_INCLUDED
