/*
	Name: MergeSort.cpp
	Author: luiz.ribeiro
	Date: 19/05/21 10:48
	Description: Realizar a ordenação de dados por meio do Algoritmo do MergeSort
*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h> // Arquivo que possibilita a localização de programas.

/*
 *
 */

// Sessão de Prototipação
void mergeSort(int *, int, int);
void merge(int *, int, int, int);

main()
{
	//Declaração de variáveis
	int vet[] = {7, 23, 11, 45, 92, 9, -5, 0, 31, 55};
	int i;
	int final;
	int tamanho;
	//INÍCIO
	setlocale(LC_ALL,""); // Configura a localidade do programa para a localidade padrão do sistema operacional, assim, nesse caso, possibilitando o uso de acentos da língua portuguesa.
	//Inicializando Variáveis
	
	//Desenvolvimento do Algoritmo
	
	tamanho = sizeof(vet)/sizeof(int); // para calcular o tamanho do vetor (estrutura)
	final = tamanho - 1;
	
	puts("Vetor desordenado");
	for(i = 0; i < tamanho; i++)
		printf("%d, ", vet[i]);
	
	mergeSort(vet, 0, final);
	
	puts("\nVetor ORDENADO");
	for(i = 0; i < tamanho; i++)
		printf("%d, ", vet[i]);
	
}//Fim

void mergeSort(int *V, int inicio, int fim)
{
	
	int meio;
	if(inicio < fim)
	{
	 	meio = (int) (inicio + fim)/2;
	 	mergeSort(V, inicio, meio);
	 	mergeSort(V, meio+1, fim);
	 	merge(V, inicio, meio, fim);
	}	

}

void merge(int *V, int inicio, int meio, int fim)
{
	
	int *temp, p1, p2, tamanho, i, j, k;
	int fim1 = 0;
	int fim2 = 0;
	tamanho = fim - inicio+1;
	p1 = inicio;
	p2 = meio + 1;
	temp = (int *) malloc(tamanho* sizeof(int));
	
	if(temp != NULL)
	{
		for(i = 0; i < tamanho; i++)
		{
			if(!fim1 && !fim2)
			{
				if(V[p1] < V[p2])
					temp[i] = V[p1++];
				else
					temp[i] = V[p2++];
				
				if(p1 > meio)
					fim1 = 1;
				
				if(p2 > fim)
					fim2 = 1;
			}
			else
			{
				if(!fim1)
					temp[i] = V[p1++];
				else
					temp[i] = V[p2++];
			}
		}
		
		for(j = 0, k = inicio; j < tamanho; j++, k++)
			V[k] = temp[j];
	}
	
}
