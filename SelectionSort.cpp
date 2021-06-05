/*
	Name: SelectionSort.cpp
	Author: luiz.ribeiro
	Date: 12/05/21 10:52
	Description: Faz a ordenação dos elementos de um vetor utilizando o método da Seleção do primeiro elemento
*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h> // Arquivo que possibilita a localização de programas.

/*
 *
 */

main()
{
	//Declaração de variáveis
	
	
	//INÍCIO
	setlocale(LC_ALL,""); // Configura a localidade do programa para a localidade padrão do sistema operacional, assim, nesse caso, possibilitando o uso de acentos da língua portuguesa.
	//Inicializando Variáveis
	
	//Desenvolvimento do Algoritmo
	
	int vet[10] = {63, 4, 17, -2, 95, 5, 21, 10, 35, 44};
	int i, j, menor, troca, tam;
	tam = 10;
	
	printf("\nVetor original:\n");
	for(i = 0; i < 10; i++)
		printf("%d\n", vet[i]);
		
	for(i = 0; i < tam; i++)
	{
		
		menor = i;
		
		for(j = i+1; j < tam; j++)
		{
			
			if(vet[j] < vet[menor])
				menor = j;
			
		}
		
		if(i != menor)
		{
			
			troca = vet[i];
			vet[i] = vet[menor];
			vet[menor] = troca;
			
		}
		
	}
	
	printf("\nVetor ordenado:\n");
	for(i = 0; i < 10; i++)
		printf("%d\n", vet[i]);
	
}//Fim
