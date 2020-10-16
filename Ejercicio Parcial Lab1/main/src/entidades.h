/*
 * entidades.h
 *
 *  Created on: Oct 14, 2020
 *      Author: FRANCO
 */
#ifndef ENTIDADES_H_
#define ENTIDADES_H_

typedef struct{
		int dia;
		int mes;
		int anio;
	}est_fecha;

typedef struct{
		int id_marca; // comienza en 1000
		char desc_marca [20];
}est_marca;

typedef struct{
		int id_electro;
		int serie_electro;
		int id_marca_electro;
		int anio_electro;
		int isEmpty;
	} est_electro;

typedef struct{
		int id_servicio; // empieza en 20.000
		char desc_servicio [25];
		int precio_servicio;
	}est_servicio;

typedef struct{
		int id_reparacion;  // autoincremental ==> es automatico, sube solo
		est_electro serie_reparacion;
		est_servicio servicio_reparacion; // id del servicio
		est_fecha fecha_reparacion; // dia mes  anio
	}est_reparacion;

#endif /* ENTIDADES_H_ */

est_fecha cargarFecha();
void mostrarFecha(est_fecha fecha);
est_marca cargarMarca();
void mostrarMarca(est_marca compania);
est_electro cargarElectrodomestico(int i);
void mostrarElectrodomestico(est_electro aparato);
void cargarMarcas(est_marca array[]);
void cargarServicio (est_servicio array[]);
void mostrarMarcas(est_marca arrayMarcas[], int LARGO);
void mostrarServicios (est_servicio array[], int LARGO);
