/*
 * ABM.h
 *
 *  Created on: Oct 15, 2020
 *      Author: FRANCO
 */

#ifndef ABM_H_
#define ABM_H_

#endif /* ABM_H_ */


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
