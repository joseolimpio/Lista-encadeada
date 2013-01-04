/*
30/12/2012
*/

#include <stdio.h>
#include <stdlib.h>
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


void initlista(Lista*L,int tamMax)
{
     antes = -1;
     depois = -1;
     L->tamMax = tamMax;
     L->fim = -1;

}


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

int buscaElemento(Lista *L, float elemento)
{
    int posicao;
    for(posicao = 0; posicao < MAX; posicao++){
        if(L->V[posicao].dado == elemento)
        return elemento;
    }
    return -1;
}



int main(int argc, char** argv)
{
    Lista L0, L1;
    int i = 0;
    bool OK;
    initlista(&L0,30);
    initlista(&L1,10);

    do {
      float n = rand() % 50;
        OK = insereElemento(&L0,n,i);
		if (!OK) break;
    	i++;
    } while (i < 30);

    printf("\n");
    printf("\n");
    printf("usando essa porra");
    printf("\n");
    printf("tamanho lista 0 %i",L0.tamMax);
    printf("\n");
    printf("fim 0 %i",L0.fim);
    printf("\n");
    printf("tamanho lista 1 %i",L1.tamMax);
    printf("\n");
    printf("fim 1 %i",L1.fim);
    printf("\n");
    printf("L0");
    printf("\n");
    imprimeLista(&L0);
    printf("\n");
    printf("\n");
   // printf("");
    printf("\n");
   // imprimeLista(&L1);
    printf("\n");

}
