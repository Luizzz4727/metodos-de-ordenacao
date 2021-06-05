/*
	Name: BubbleSort.cpp
	Author: luiz.ribeiro
	Date: 12/05/21 09:20
	Description: Fazer a ordenação dos dados de um vetor utilizando o algoritmo da bolha ou Bubble Sort
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
	
	int vet[10] = {63, 4, 17, -2, 95, 5, 21, 10, 35, 44};
	int n = 10;
	int continua, i, aux, fim, troca;
	fim = n;
	//INÍCIO
	setlocale(LC_ALL,""); // Configura a localidade do programa para a localidade padrão do sistema operacional, assim, nesse caso, possibilitando o uso de acentos da língua portuguesa.
	//Inicializando Variáveis
	troca = 0;
	//Desenvolvimento do Algoritmo
	printf("\nVetor original:\n");
	for(i = 0; i < 10; i++)
		printf("%d\n", vet[i]);
	do{
		continua = 0;
		for(i = 0; i < fim-1; i++)
		{
			if(vet[i] > vet[i+1])
			{
				
				aux = vet[i];
				vet[i] = vet[i+1];
				vet[i+1] = aux;
				continua = i;
				troca++;
			}
			
		}
		fim--;
		
	}while(continua != 0);
	
	
	printf("\nVetor ordenado:\n");
	for(i = 0; i < 10; i++)
		printf("%d\n", vet[i]);
	printf("\nFoi feito %d trocas!", troca);
	
}//Fim
