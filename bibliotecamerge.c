#include "bibliotecamerge.h"
#include<stdio.h> 
#include<stdlib.h> 
#include<time.h>
#include <stdbool.h>

//funcao que cria arquivo txt

bool criaarquivo (long int vetor[], long int n ){
  long int i;
  FILE *pont_arq; // cria variável ponteiro para o arquivo
  
  //abrindo o arquivo com tipo de abertura w
  pont_arq = fopen("numeros_random.txt", "w");
  
  //testando se o arquivo foi realmente criado
  if(pont_arq == NULL)
  {
  printf("\nErro na abertura do arquivo!\n");
  return false;
  }
  
  
  for (i = 0; i < n; i++) { 
 	fprintf(pont_arq, "%li ", vetor[i]); 
 }
  
  //usando fclose para fechar o arquivo
  fclose(pont_arq);
  
  printf("\nDados de vetor ordenado gravados com sucesso!\n");
  
  getch();
	
	return true;
}
	

//funcao para criar arquivo ordenado
bool criaarquivoordenado (long int vetor[], long int n ){
  long int i;
  FILE *pont_arq; // cria variável ponteiro para o arquivo
  
  //abrindo o arquivo com tipo de abertura w
  pont_arq = fopen("numeros_ordenados.txt", "w");
  
  //testando se o arquivo foi realmente criado
  if(pont_arq == NULL)
  {
  printf("\nErro na abertura do arquivo!\n");
  return false;
  }
  
  
  for (i = 0; i < n; i++) { 
 	fprintf(pont_arq, "%li ", vetor[i]); 
 }
  
  //usando fclose para fechar o arquivo
  fclose(pont_arq);
  
  printf("\nDados gravados com sucesso!\n");
  
  getch();
	
	return true;
}

// função pra trocar lista sequencial
bool trocaSeq(long int *xp, long int *yp)
{
    long int aux = *xp;
    *xp = *yp;
    *yp = aux;
    return true;
}


// A funcao para implementar o mergeSort na lista sequencial
bool mergeSortSeq(long int vetor[], long int n)
{
   long int i, 
   long int j;
   for (i = 0; i < n-1; i++)

       // O último elemento ja esta sendo analisado
       for (j = 0; j < n-i-1; j++)
           if (vetor[j] > vetor[j+1])
              trocaSeq (&vetor[j], &vetor[j+1]);
              return true;
}

// Função para printar o vetor com lista sequencial
bool printVetorSeq(long int vetor[], long int size)
{
    long int i;
    for (i=0; i < size; i++)
        printf("%ld ", vetor[i]);
        return true;
}

/*  Função para inserir um no no inicio de uma lista encadeada */
void inserirnoinicioEnc(struct no **inicio, long int dado) 
{ 
    struct no *ptr1 = (struct no*)malloc(sizeof(struct no)); 
    ptr1->dado = dado; 
    ptr1->prox = *inicio; 
    *inicio = ptr1; 
} 
  
/* Função para imprimir os dados da lista encadeada */
void printListEnc(struct no *comeco) 
{ 
    struct no *temp = comeco; 
    printf("\n"); 
    while (temp!=NULL) 
    { 
        printf("%ld ", temp->dado); 
        temp = temp->prox; 
    } 
} 
  
/* Função para realizar o mergeSort e  ordenar a lista encadeada dada */
void mergeSortEnc(struct no *comeco) 
{ 
    long int trocado, i; 
    struct no *ptr1; 
    struct no *lptr = NULL; 
  
    /* Checando se a lista esta vazia */
    if (comeco == NULL) 
        return; 
  
    do
    { 
        trocado = 0; 
        ptr1 = comeco; 
  
        while (ptr1->prox != lptr) 
        { 
            if (ptr1->dado > ptr1->prox->dado) 
            {  
                trocalistenc(ptr1, ptr1->prox); 
                trocado = 1; 
            } 
            ptr1 = ptr1->prox; 
        } 
        lptr = ptr1; 
    } 
    while (trocado); 
} 
  
/* Função para trocar os dados de dois  (a e b) de uma lista encadeada*/
void trocalistenc(struct no *a, struct no *b) 
{ 
    long int temp = a->dado; 
    a->dado = b->dado; 
    b->dado = temp; 
} 
