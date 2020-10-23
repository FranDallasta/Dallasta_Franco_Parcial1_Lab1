/*
 * reparacion_entidad.h
 *
 *  Created on: 22 oct. 2020
 *      Author: Franco
 */

#ifndef REPARACION_ENTIDAD_H_
#define REPARACION_ENTIDAD_H_

typedef struct{
		int id_reparacion;  // autoincremental ==> es automatico, sube solo
		int serie_reparacion;
		int servicio_reparacion; // id del servicio
		est_fecha fecha_reparacion; // dia mes  anio
		int isEmpty;
	}est_reparacion;

#endif /* REPARACION_ENTIDAD_H_ */

/*
* \brief  Permite cargar una reparacion.
* \param  tipo de dato int.
* \return tipo de dato est_reparacion.
*/
est_reparacion cargarReparacion(int i);

/*
* \brief  Permite mostrar una reparacion.
* \param  tipo de dato est_reparacion
* \return void.
*/
void mostrarReparacion(est_reparacion reparacion);

/*
* \brief  Permite inicializar un array tipo est_electro .
* \param  array tipo de dato est_electro.
* \param  tipo de dato int.
* \return un tipo de dato int.
*/
int iniciarlizarElectros (est_electro array[], int LARGO);

/*
* \brief  Permite buscar una posicion vacia en un array tipo est_electro .
* \param  array tipo de dato est_electro.
* \param  tipo de dato int.
* \param  tipo de dato int*.
* \return un tipo de dato int.
*/
int buscarEmptyElectro (est_electro array[], int LARGO, int* posicion);

/*
* \brief  Permite cargar un array tipo est_electro .
* \param  array tipo de dato est_electro.
* \param  tipo de dato int.
* \param  tipo de dato int*.
* \return un tipo de dato int.
*/
int cargarElectrodomesticos(est_electro array[], int LARGO, int* i);

/*
* \brief  Permite mostrar un array tipo est_electro .
* \param  array tipo de dato est_electro.
* \param  tipo de dato int.
* \return un tipo de dato int.
*/
int mostrarElectrodomesticos(est_electro array[], int LARGO);

/*
* \brief  Permite hacer una baja logica en una posicion de un array tipo est_electro .
* \param  array tipo de dato est_electro.
* \param  tipo de dato int.
* \param  tipo de dato int.
* \return un tipo de dato int.
*/
int eliminarElectrodomesticos(est_electro array[], int LARGO,  int pedirId);

/*
* \brief  Permite modificar una posicion de un array tipo est_electro .
* \param  array tipo de dato est_electro.
* \param  tipo de dato int.
* \param  tipo de dato int.
* \return un tipo de dato int.
*/
int modificarElectrodomesticos(est_electro array[], int LARGO,  int pedirId);

/*
* \brief  Permite inicializar un array tipo est_reparacion .
* \param  array tipo de dato est_reparacion.
* \param  tipo de dato int.
* \return un tipo de dato int.
*/
int inicializarReparaciones (est_reparacion array[], int LARGO);

/*
* \brief  Permite buscar una posicion vacia en un array tipo est_reparacion.
* \param  array tipo de dato est_reparacion.
* \param  tipo de dato int.
* \param  tipo de dato int*.
* \return un tipo de dato int.
*/
int buscarEmptyReparaciones (est_reparacion array[], int LARGO, int* posicionRep);

/*
* \brief  Permite cargar un array tipo est_reparacion.
* \param  array tipo de dato est_reparacion.
* \param  tipo de dato int.
* \param  tipo de dato int*.
* \return un tipo de dato int.
*/
int cargarReparaciones(est_reparacion array[], int LARGO, int* i);

/*
* \brief  Permite mostrar un array tipo est_reparacion.
* \param  array tipo de dato est_reparacion.
* \param  tipo de dato int.
* \return un tipo de dato int.
*/
int mostrarReparaciones(est_reparacion array[], int LARGO);
