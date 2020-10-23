/*
 * marca_entidad.c
 *
 *  Created on: 22 oct. 2020
 *      Author: Franco
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "marca_entidad.h"

est_marca cargarMarca() //carga la marca
{
	est_marca compania;
	printf("Ingrese el numero de id de la marca (1000 a 1005): ");
	do{
	scanf("%d", &compania.id_marca);
	}while(!(compania.id_marca>= 1000 && compania.id_marca <= 1005));
	printf("Ingrese la descripcion de la marca: ");
	fflush(stdin);
	gets(compania.desc_marca);
	return compania;
}

void mostrarMarca(est_marca compania)
{
	printf("\nLa id es  %d", compania.id_marca);
	printf("\nLa id es  %s", compania.desc_marca);
}

void cargarMarcas(est_marca array[])
{
	//Harcodeo las marcas en cuestion en un array auxiliar
	est_marca aux[] = {
			{1, "Wirpool"},
			{2, "Sony"},
			{3, "Liliana"},
			{4, "Gafa"},
			{5, "Philips"}
	};
	int i;
	int j;

	for(i =0; i < 5; i++)
	{
		j = 1000 + i; //Las id de marca comienzan en 1000
		array[i].id_marca = j;
		strcpy(array[i].desc_marca,aux[i].desc_marca);
	}
}

void mostrarMarcas(est_marca arrayMarcas[], int LARGO)
{
	for(int i = 0; i <LARGO; i++)
				{
					printf("\nLa marca numero %d es %s",arrayMarcas[i].id_marca, arrayMarcas[i].desc_marca);
				}
}
