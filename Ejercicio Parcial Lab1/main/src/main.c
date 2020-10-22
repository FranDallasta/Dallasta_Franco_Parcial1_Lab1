/*
 ============================================================================
 Name        : main.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "entidades.h"
#include "ABM.h"

int main(void) {

	char opcion;
	int id_electrodomestico = 1;
	int id_baja;
	int id_reparacion = 1;
	est_marca arrayMarcas[5];
	cargarMarcas(arrayMarcas);

	est_servicio arrayServicio[4];
	cargarServicio (arrayServicio);

	est_electro arrayElectrodomesticos[10];
	iniciarlizarElectros (arrayElectrodomesticos, 10);

	est_reparacion arrayReparaciones[10];
	inicializarReparaciones (arrayReparaciones, 10);

do{
	printf("Ingrese una opcion: ");
	printf("\na) Dar de alta un electrodomestico ");
	printf("\nb) Modificar un elctrodomestico ");
	printf("\nc) Dar de baja un electrodomestico ");
	printf("\nd) Listar los electrodomesticos ");
	printf("\ne) Listar las marcas ");
	printf("\nf) Listar los servicios ");
	printf("\ng) Dar de alta las reparaciones ");
	printf("\nh) Listar las reparaciones ");
	printf("\ni) SALIR ");
	printf("\nOpcion seleccionada: ");
	fflush(stdin);
	scanf("%c", &opcion);
	switch(opcion)
	{
		case 'a':
			cargarElectrodomesticos(arrayElectrodomesticos, 10, &id_electrodomestico);
			break;
		case 'b':
			printf("Ingrese la id del electrodomestico a modificar: ");
			scanf("%d", & id_baja);
			modificarElectrodomesticos(arrayElectrodomesticos, 10,id_baja);
			system("pause");
			break;
		case 'c':
			printf("Ingrese la id del electrodomestico a dar de baja: ");
			scanf("%d", & id_baja);
			eliminarElectrodomesticos(arrayElectrodomesticos, 10, id_baja);
			system("pause");
			break;
		case 'd':
			mostrarElectrodomesticos(arrayElectrodomesticos, 10);
			system("pause");
			break;
		case 'e'://Marcas
			mostrarMarcas(arrayMarcas,5);
			system("pause");
			break;
		case 'f'://Servicios
			mostrarServicios (arrayServicio, 4);
			system("pause");
			break;
		case 'g':
			cargarReparaciones(arrayReparaciones, 10, &id_reparacion);
			break;
		case 'h':
			mostrarReparaciones(arrayReparaciones, 10);
			system("pause");
			break;
		case 'i':
			printf("Saliendo del programa\n");\
			system("pause");
			break;
		default:
			printf("Opcion Incorrecta\n");
			system("pause");
			break;
	}
	system("cls");
  }while(opcion !='i');
	return EXIT_SUCCESS;
}
