/*
	Name: ShellSort.cpp
	Author: luiz.ribeiro
	Date: 26/05/21 10:20
	Description: Realizar a ordenação de dados por meio do método Shell Sort
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

// Sessão de Prototipação
void shellSort(int *, int);

int main()
{
	int vet[] = {7, 23, 11, 45, 92, 9, -5, 0, 31, 55, 83, 29, 104, 62, 15, -7};
	int i, tamanho;
	
	tamanho = sizeof(vet) / sizeof(int); // Calcula o tamanho do vetor

	puts("Vetor desordenado");
	for(i = 0; i < tamanho; i++)
		printf("%d, ", vet[i]);
	
	shellSort(vet, tamanho); // Invoca o método de ordenação Shell Sort
	
	puts("\nVetor ORDENADO");
	for(i = 0; i < tamanho; i++)
		printf("%d, ", vet[i]);
	
	
}

void shellSort(int *V, int tamanho)
{
	int i, j, valor;
	int h = 1;
	
	while(h < tamanho) // Encontrar o salto ideal
	{
		h = 3 * h + 1;
	}
	
	while(h > 0)
	{
		for(i = h; i < tamanho; i++)	
		{
			valor = V[i];
			j = i;
			while(j > h-1 && valor <= V[j-h])
			{
				V[j] = V[j - h];
				j = j - h;
			}
		V[j] = valor;
		}
	h = h/3;
	}
	
}// Fim do shellSort
