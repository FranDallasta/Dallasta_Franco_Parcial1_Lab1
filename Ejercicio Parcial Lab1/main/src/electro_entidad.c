/*
 * electro_entidad.c
 *
 *  Created on: 22 oct. 2020
 *      Author: Franco
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fecha_entidad.h"
#include "marca_entidad.h"
#include "electro_entidad.h"
#include "servicio_entidad.h"
#include "reparacion_entidad.h"

#define LLENO 1
#define VACIO 0



est_electro cargarElectrodomestico(int i)
{
	est_electro aparato;
	aparato.id_electro = i ;
	printf("Ingrese la serie del electrodomestico: ");
	scanf("%d", &aparato.serie_electro);
	printf("Ingrese la marca por id electrodomestico (1000 a 1004): ");
	do{
	scanf("%d", &aparato.id_marca_electro) ;
	}while(!(aparato.id_marca_electro >=1000 && aparato.id_marca_electro <= 1005));
	printf("Ingrese el anio de fabricacion: ");
	do{
	scanf("%d", &aparato.anio_electro);
	}while(!(aparato.anio_electro>= 1990 && aparato.anio_electro<=2020));
	aparato.isEmpty = LLENO;
	return aparato;
}

void mostrarElectrodomestico(est_electro aparato)
{
	printf("\nLa id es  %d", aparato.id_electro);
	printf("\nEL numero de serie es  %d", aparato.serie_electro);
	printf("\nLa marca del producto es %d", aparato.id_marca_electro);
	printf("\nEl anio de fabricacion es %d", aparato.anio_electro);

}

int iniciarlizarElectros (est_electro array[], int LARGO)
{
	int retorno = -1;
	int i;
	if(array != NULL && LARGO >= 0)
	{
		for(i=0;i<LARGO;i++)
		{
			array[i].isEmpty = VACIO;
			retorno = 0;
		}
	}
	return retorno;
}

int buscarEmptyElectro (est_electro array[], int LARGO, int* posicion)
{
	int retorno =-1;
	int i;
	if(array != NULL && LARGO >= 0)
	{
		for(i=0; i<LARGO; i++)
		{
			if(array[i].isEmpty == VACIO){
			retorno = 0;
			*posicion = i;
			break;
			}
		}
	}
	return retorno;
}

int cargarElectrodomesticos(est_electro array[], int LARGO, int* i)
{
	int retorno = -1;
	int posicion = 0;

	if(array != NULL && LARGO >= 0)
	{
		if(buscarEmptyElectro(array, LARGO, &posicion)==0) //Hacer busar empty e inicializar el array de electros
		{
			array[posicion] =cargarElectrodomestico(*i);
			*i = *i +1;
			retorno = 0;
		}
		else
		{
			printf("No hay lugar");
			retorno = -1;
		}
	}
	return retorno;
}

int mostrarElectrodomesticos(est_electro array[], int LARGO)
{
	int i;
	int retorno = -1;
	if(array != NULL && LARGO >= 0)
	{
		for (i=0; i<LARGO; i++)
		{
			if(array[i].isEmpty != VACIO)
			{
				mostrarElectrodomestico(array[i]);
				retorno = 0;
			}
		}
	}
	return retorno;
}

int eliminarElectrodomesticos(est_electro array[], int LARGO,  int pedirId)
{
	int j;
	int retorno =-1;

	for(j = 0; j <LARGO; j++)
	{
		if(array[j].isEmpty==LLENO && array[j].id_electro == pedirId)
		{
			array[j].isEmpty= VACIO;
			break;
		}
	}

		return retorno;
}

int modificarElectrodomesticos(est_electro array[], int LARGO,  int pedirId)
{
	int auxSerie;
	int auxIDModelo;
	int opcion;
	int retorno = -1;
	int lugar =0;
	int j;

	for(j = 0; j <LARGO; j++)
	{
		if(array[j].id_electro == pedirId)
		{
			lugar = j;
			break;
		}
	}

	if(array != NULL)
	{
		do{
			system("cls");
		printf("\n 1) Modificar el modelo (por ID)");
		printf("\n 2) Modificar la serie");
		printf("\n 3) SALIR ");
		printf("\n Ingrese una opcion: ");
		scanf("%d", &opcion);

			switch (opcion)
			{
				case 1:
					printf("Ingrese el anio del electrodomestico: ");
					scanf("%d", &auxIDModelo);
					array[lugar].anio_electro= auxIDModelo ;
				break;
				case 2:
					printf("Ingrese la nueva serie del electrodomestico: ");
					scanf("%d", &auxSerie);
					array[lugar].serie_electro= auxSerie ;
				break;
				case 3:
				break;
			}
		}while(opcion != 3);
		retorno = 0;
	}
	return retorno;
}
