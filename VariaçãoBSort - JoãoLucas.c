#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "bibliotecaSort.h"

void bsort(int v[], int n)
{
	int i,j;
	bool fezTroca = false;
	do{
		fezTroca = false;
		
		for(i=1;i<n;i++){
			
			for(j=0;j<(n-i);j++){
				
				if(v[j]>v[j+1]){
					
					troca(&v[j],&v[j+1]);
					
					fezTroca = true;
				}
			}
		}
	}while(fezTroca); //Enquanto fezTroca for true
}



int main(){
	int *vet, n,i;
	printf("Tamanho do vetor:");
	scanf("%d",&n);
	vet = malloc(sizeof(int)*n);
	geraVet(vet,n);
	printVetor(vet,n);
	bsort(vet,n);
	printf("Vetor ordenado:\n");
	printVetor(vet,n);
}
