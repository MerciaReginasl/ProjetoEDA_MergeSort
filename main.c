#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include<stdlib.h> 
#include "bibliotecamerge.h"



int main() {

	srand(time(NULL)); 
	int tam_lista;
	printf("Entre com o numero de valores a serem gerados: \n");
	scanf("%d", &tam_lista);
	int i;
	int * arr=(int *) malloc(tam_lista * sizeof (int));
 
    int arr_size = tam_lista;//sizeof(arr)/sizeof(arr[0]); 
	for(i=0;i<tam_lista;i++){ 
		arr[i]=rand()%10;             //inserção dos valores no vetor.
	}
   clock_t t;
    t = clock();
    
    printf("		lista não ordenada \n"); 
    printArray(arr, arr_size);
    
    t =clock() -t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    
    printf("\n Tempo gasto: %f ms.", time_taken);
    printf("\n*************************************************************************\n");
	 
	 
	clock_t t2;
    t2 = clock();
    
    mergeSort(arr, 0, arr_size - 1); // Chamando o merge sort
  
    printf("\n\n		lista  ordenada \n"); 
    printArray(arr, arr_size); 
    
    t2 =clock() -t2;
    
    double time_taken2 = ((double)t2)/CLOCKS_PER_SEC;   
    printf("\n Tempo gasto: %f ms.", time_taken2); 	     
    printf("\n**********************************************
