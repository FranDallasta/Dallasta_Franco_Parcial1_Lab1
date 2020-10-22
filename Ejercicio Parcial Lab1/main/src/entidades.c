/*
 * entidades.c
 *
 *  Created on: Oct 14, 2020
 *      Author: FRANCO
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "entidades.h"

#define LLENO 1
#define VACIO 0

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

//Reparaciones

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
