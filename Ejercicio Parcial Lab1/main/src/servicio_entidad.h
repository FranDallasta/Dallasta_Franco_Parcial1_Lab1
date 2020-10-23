/*
 * servicio_entidad.h
 *
 *  Created on: 22 oct. 2020
 *      Author: Franco
 */

#ifndef SERVICIO_ENTIDAD_H_
#define SERVICIO_ENTIDAD_H_

typedef struct{
		int id_servicio; // empieza en 20.000
		char desc_servicio [25];
		int precio_servicio;
	}est_servicio;

#endif /* SERVICIO_ENTIDAD_H_ */

/*
* \brief  Permite cargar un Servicio.
* \param  tipo de dato est_servicio.
* \return void.
*/
void cargarServicio (est_servicio array[]);

/*
* \brief  Permite mostrar las marcas
* \param  tipo de dato est_servicio .
* \param  tipo de dato int.
* \return void.
*/
void mostrarServicios (est_servicio array[], int LARGO);
