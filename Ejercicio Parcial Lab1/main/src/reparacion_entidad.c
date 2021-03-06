/*
 * reparacion_entidad.c
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

est_reparacion cargarReparacion(int i)
{
	est_reparacion reparacion;
	reparacion.id_reparacion = i;
	printf("Ingrese la serie del producto: ");
	scanf("%d", &reparacion.serie_reparacion); //validar
	printf("Ingrese la id del servicio (20000 a 20003): ");
	scanf("%d", &reparacion.servicio_reparacion); //validar
	printf("Ingrese la fecha de la reparacion: ");
	reparacion.fecha_reparacion = cargarFecha();
	reparacion.isEmpty = LLENO;
	return reparacion;
}

void mostrarReparacion(est_reparacion reparacion)
{
	printf("\nLa id de la reparacion es:  %d", reparacion.id_reparacion );
	printf("\nEl numero de serie es de la reparacion es:  %d", reparacion.serie_reparacion) ;
	printf("\nLa marca de la reparacion es:  %d", reparacion.servicio_reparacion);
	//fecha
	mostrarFecha(reparacion.fecha_reparacion);
}

int inicializarReparaciones (est_reparacion array[], int LARGO)
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

int buscarEmptyReparaciones (est_reparacion array[], int LARGO, int* posicionRep)
{
	int retorno =-1;
		int i;
		if(array != NULL && LARGO >= 0)
		{
			for(i=0; i<LARGO; i++)
			{
				if(array[i].isEmpty == VACIO){
				retorno = 0;
				*posicionRep = i;
				break;
				}
			}
		}
		return retorno;
}

int cargarReparaciones(est_reparacion array[], int LARGO, int* i)
{
	int retorno = -1;
	int posicionRep = 0;

	if(array != NULL && LARGO >= 0)
	{
		if(buscarEmptyReparaciones(array, LARGO, &posicionRep)==0) //Hacer busar empty e inicializar el array de electros
		{
			array[posicionRep] = cargarReparacion(*i);
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

int mostrarReparaciones(est_reparacion array[], int LARGO)
{
	int i;
		int retorno = -1;
		if(array != NULL && LARGO >= 0)
		{
			for (i=0; i<LARGO; i++)
			{
				if(array[i].isEmpty != VACIO)
				{
					mostrarReparacion(array[i]);
					retorno = 0;
				}
			}
		}
		return retorno;
}
