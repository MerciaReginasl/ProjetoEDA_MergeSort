#ifndef ListaMergeSort
#define ListaMergeSort
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* Estrutura para um no */
struct no 
{ 
    long int dado; 
    struct no *prox; 
}; 



//*************** A interface de uso do TAD Lista Encadeada ***********//


void merge(int *arr, int l_esq, int meio, int l_dir);


void mergeSort(int *arr, int l_esq, int l_dir);


void printArray(int * A, int tam);

#endif
