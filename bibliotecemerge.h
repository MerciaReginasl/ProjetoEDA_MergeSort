#include<stdio.h> 
#include<stdlib.h> 
#include<time.h>
#include <stdbool.h>

/* Estrutura para um no */
struct no 
{ 
    long int dado; 
    struct no *prox; 
}; 
  
/* Função para inserir um no no início de uma lista encadeada */
void inserirnocomecoEnc(struct no **inicio_ref,long int dado); 
  
/* Função para realizar o mergeSort e  ordenar a lista encadeada dada */
void mergeSortEnc(struct no *inicio); 
  
/* Função para trocar os dados de dois nós (a e b)de uma lista encadeada*/
void trocalistenc(struct no *a, struct no *b); 
  
/* Função para printar os nos na lista encadeada */
void printListEnc(struct no *inicio
// função pra trocar lista sequencial

bool trocaSeq(long int *xp, long int *yp);

// A funcao para implementar o mergesort na lista sequencial
bool mergeSortSeq(long int vetor[], long int n);

// Função para printar o vetor com lista sequencial
bool printVetorSec(long int vetor[], long int size);
