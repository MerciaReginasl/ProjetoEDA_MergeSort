#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void merge(int * arr, int l_esq, int meio, int l_dir) { 
    int i, j, k; 
    int n1 = meio - l_esq + 1; 
    int n2 =  l_dir - meio; 
    
  
    // Arrays tempor�rios
    int * L = (int *) malloc(n1*sizeof(int));
	int * R = (int *) malloc(n2*sizeof(int)); 
  
    //insere dados  temporariamente em  L [] e R [] 
    for (i = 0; i < n1; i++) 
        L[i] = arr[l_esq + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[meio + 1+ j]; 
  
    //Mescla os arrays tempor�rios de volta em arr
    i = 0;       // �ndice inicial do primeiro subarray 
    j = 0;       // �ndice inicial do segundo 
    k = l_esq;   //�ndice inicial do subarray mesclado
    while (i < n1 && j < n2){ 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        }else{ 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    //insere os elementos restantes de L [], se houver  
    while (i < n1){ 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    //insere os elementos restantes de R [], se houver
    while (j < n2) { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  

void mergeSort(int * arr, int l_esq, int l_dir) 
{ 
    if (l_esq < l_dir){ 
       
        int meio = l_esq+(l_dir-l_esq)/2; 
  
        mergeSort(arr, l_esq, meio); 
        mergeSort(arr, meio+1, l_dir); 
  
        merge(arr, l_esq, meio, l_dir); 
    } 
} 

void printArray(int  * A, int tam){ 
    int i; 
    for (i=0; i < tam; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
}   

int main() {

	srand(time(NULL)); 
	int tam_lista;
	printf("Entre com o numero de valores a serem gerados: \n");
	scanf("%d", &tam_lista);
	int i;
	int * arr=(int *) malloc(tam_lista * sizeof (int));
 //	int arr[] =  {9, 6, 3, 5, 1, 0, 4, 7, 8, 7, 15};
    int arr_size = tam_lista;//sizeof(arr)/sizeof(arr[0]); 
	for(i=0;i<tam_lista;i++){ 
		arr[i]=rand()%100;             //inser��o dos valores no vetor.
	}
    printf("lista n�o ordenada \n"); 
    printArray(arr, arr_size); 
  
    mergeSort(arr, 0, arr_size - 1); 
  
    printf("\n\nlista  ordenada \n"); 
    printArray(arr, arr_size); 
    return 0;
}

 


