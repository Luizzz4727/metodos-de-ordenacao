/*
	Name: Quicksort.cpp
	Author: luiz.ribeiro
	Date: 19/05/21 09:23
	Description: Realizar a ordenação de dados por meio do Algoritmo do QuickSort
*/
#include <stdio.h>
//Prototipação
void quickSort(int *, int, int);
int particionar(int *, int, int);



int main()
{
	int vet[] = {7, 23, 11, 45, 92, 9, -5, 0, 31, 55};
	int i;
	
	
	
	puts("Vetor desordenado");
	for(i = 0; i < 10; i++)
		printf("%d, ", vet[i]);
	
	quickSort(vet, 0, 9);
	
	puts("\nVetor ORDENADO");
	for(i = 0; i < 10; i++)
		printf("%d, ", vet[i]);
}



void quickSort(int *V, int inicio, int fim)
{
	int pivo;
	if(fim > inicio)
	{
		pivo = particionar(V, inicio, fim);
		quickSort(V, inicio, pivo-1);
		quickSort(V,pivo+1, fim);
	
	}

}//fim da função quickSort



int particionar(int *V, int inicio, int fim)
{
	int esq, dir, pivo, aux;
	esq = inicio;
	dir = fim;
	pivo = V[inicio];
	
	while(esq < dir)
	{
		while(V[esq] <= pivo)
		esq++;
		while(V[dir] > pivo)
		dir--;

		if(esq < dir)
		{
			aux = V[esq];
			V[esq] = V[dir];
			V[dir] = aux;
		}
	}//fim do while
	
	V[inicio] = V[dir];
	V[dir] = pivo;
	return dir;	
}//fim da função particionar;
