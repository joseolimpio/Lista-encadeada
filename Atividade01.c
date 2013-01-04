/*
30/12/2012
*/

#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"




int main(int argc, char** argv) {

Lista L0, L1;
bool OK;
int i = 0,
  n;

//    initLista L0 com 30 elementos;
        initlista(L0,30);
        imprimeLista L0
        imprimeLista(L0);
//    imprimeListaTotal L0;

//    initLista L1 com 10 elementos;
        initlista(L1,10);
//    imprimeLista L1;
        imprimeLista(L1);
//    imprimeListaTotal L1;



    do {
    	float n = rand() % 50;
        OK = insereElemento(L0,n,i);
		if (!OK)
    		break;
    	i++;
    } while (i < 30);



    do {
    	float n = rand() % 50;
        OK = insereElemento(L1,n,i)
		if (!OK)
    		break;
    	i++;
    } while (i < 10);


    imprimeLista(L0);
    imprimeLista(L1);

	n = tamLista(L0);

    for (i = 0 ; i < n ; i++)
//		OK = removeElemento L0
    	if (OK)
    		printf("Remocao %f OK\n", (float)i);
    	else
    		printf("Remocao %f nao OK\n", (float)i);

	n = tamLista(L1);

    for (i = 0 ; i < n ; i++)
//		OK = removeElemento L1
    	if (OK)
    		printf("Remocao %f OK\n", (float)i);
    	else
    		printf("Remocao %f nao OK\n", (float)i);

//    imprimeLista L0;
//    imprimeLista L1;

}



