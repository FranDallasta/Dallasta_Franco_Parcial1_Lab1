/*
 * servicio_entidad.c
 *
 *  Created on: 22 oct. 2020
 *      Author: Franco
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "servicio_entidad.h"

void cargarServicio (est_servicio array[])
{
	est_servicio aux[] = {
			{1, "Garantia", 250},
			{2, "Repuestos", 400},
			{3, "Mantenimiento", 500},
			{4, "Refaccion", 600}
	};
	int i;
	int j;
	for(i =0; i < 4; i++)
		{
			j = 20000 + i;
			array[i].id_servicio = j;
			strcpy(array[i].desc_servicio,aux[i].desc_servicio);
			array[i].precio_servicio = aux[i].precio_servicio;
		}
}

void mostrarServicios (est_servicio array[], int LARGO)
{
	for(int j =0; j < LARGO; j++)
				{
					printf("\nEl servicio de %s (id) %d tiene un precio de $%d ",array[j].desc_servicio, array[j].id_servicio, array[j].precio_servicio);
				}
}
