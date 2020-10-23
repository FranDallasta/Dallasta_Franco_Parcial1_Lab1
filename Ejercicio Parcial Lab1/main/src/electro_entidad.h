/*
 * electro_entidad.h
 *
 *  Created on: 22 oct. 2020
 *      Author: Franco
 */

#ifndef ELECTRO_ENTIDAD_H_
#define ELECTRO_ENTIDAD_H_

typedef struct{
		int id_electro;
		int serie_electro;
		int id_marca_electro;
		int anio_electro;
		int isEmpty;
	} est_electro;

#endif /* ELECTRO_ENTIDAD_H_ */

/*
* \brief Permite cargar un Electrodometico.
* \param  tipo de dato int.
* \return un tipo de dato est_electro.
*/
est_electro cargarElectrodomestico(int i);

/*
* \brief  Permite mostrar un Electrodometico.
* \param  tipo de dato est_electro.
* \return void.
*/
void mostrarElectrodomestico(est_electro aparato);
