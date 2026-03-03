//João Lucas de Lima Souza

/* Algoritmo P de embaralhamento (Knuth)
Arquivo: KnuthP.c
Data: 27/02/26 14:24  
Descrição: O algoritmo P gera uma permutação de um sequência de números 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Max 51

void embaralhar(unsigned char V[], int);


int main(){
	
	unsigned char A[Max] = {1,2,3,4,5,6,7};
	int i, j;

	
	for(i = 0; i < Max; i++) {
		A[i] = i + 1; 
	}
	
	printf("\n lista de numeros\n");
	printf("\n");
	for(j=0;j<Max;j++) printf(" %4d ",A[j]);	

	srand((int) time(NULL));
	embaralhar(A,Max);
	
	printf("\n");
	printf("\n lista A embaralhada \n");
	printf("\n");
	for(i=0;i<Max;i++) printf(" %4d ",A[i]); 	

	printf("\n");
	return 0;
}

void embaralhar(unsigned char V[], int Q){	// Q é o tamanho da lista de números
//	algoritmo P de embaralhamento (Knuth)	
	int n,ult,aux,k;
	ult = Q-1;
	for(n=ult-1; n>0; n--){
		k = rand() % n;				// gera um número na faixa de 0 até n-1
		aux=V[n]; V[n]=V[k]; V[k]=aux;		
	}	
}

	
	
	
	
	
