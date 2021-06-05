/*
	Name: SelectionSort.cpp
	Author: luiz.ribeiro
	Date: 12/05/21 10:52
	Description: Faz a ordena��o dos elementos de um vetor utilizando o m�todo da Sele��o do primeiro elemento
*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h> // Arquivo que possibilita a localiza��o de programas.

/*
 *
 */

main()
{
	//Declara��o de vari�veis
	
	
	//IN�CIO
	setlocale(LC_ALL,""); // Configura a localidade do programa para a localidade padr�o do sistema operacional, assim, nesse caso, possibilitando o uso de acentos da l�ngua portuguesa.
	//Inicializando Vari�veis
	
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
