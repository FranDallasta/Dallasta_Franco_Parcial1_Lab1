/*
 * marca_entidad.h
 *
 *  Created on: 22 oct. 2020
 *      Author: Franco
 */

#ifndef MARCA_ENTIDAD_H_
#define MARCA_ENTIDAD_H_

typedef struct{
		int id_marca; // comienza en 1000
		char desc_marca [20];
}est_marca;

#endif /* MARCA_ENTIDAD_H_ */

/*
* \brief Permite cargar una marca.
* \return un tipo de dato est_marca .
*/
est_marca cargarMarca();

/*
* \brief Permite mostrar una marca.
* \param  tipo de dato est_marca.
* \return un tipo de dato est_marca.
*/
void mostrarMarca(est_marca compania);

/*
* \brief  Permite cargar una Marca.
* \param  tipo de dato est_marca.
* \return void.
*/
void cargarMarcas(est_marca array[]);

/*
* \brief  Permite mostrar las marcas
* \param  tipo de dato est_marca.
* \param  tipo de dato int.
* \return void.
*/
void mostrarMarcas(est_marca arrayMarcas[], int LARGO);
