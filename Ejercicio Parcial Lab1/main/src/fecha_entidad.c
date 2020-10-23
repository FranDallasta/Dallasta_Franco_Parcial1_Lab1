/*
 * fecha_entidad.c
 *
 *  Created on: 22 oct. 2020
 *      Author: Franco
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fecha_entidad.h"

est_fecha cargarFecha() //carga y valida fecha
{
	est_fecha fecha;

	do{
		printf("\nIngrese el dia: ");
		scanf("%d", &fecha.dia);
	}while(!(fecha.dia>=1 && fecha.dia <=31));

	do{
		printf("Ingrese el mes: ");
		scanf("%d", &fecha.mes);
	}while(!(fecha.mes>= 1 && fecha.mes <=12));

	do{
		printf("Ingrese el anio: ");
			scanf("%d", &fecha.anio);
	}while(!(fecha.anio>=1990 && fecha.anio<=2020));

	return fecha;
}

void mostrarFecha(est_fecha fecha)
{
	printf("\nEl dia es  %d", fecha.dia);
	printf("\nEl mes es  %d", fecha.mes);
	printf("\nEl anio es  %d\n", fecha.anio);
}
