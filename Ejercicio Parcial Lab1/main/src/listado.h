/*
 * listado.h
 *
 *  Created on: 22 oct. 2020
 *      Author: Franco
 */

#ifndef LISTADO_H_
#define LISTADO_H_



#endif /* LISTADO_H_ */

/*
* \brief  Crea el menu para mostrar informes .
* \param  array tipo de dato est_electro
* \param  tipo de dato int.
* \param  array tipo de dato est_reparacion.
* \return void.
*/
void informar (est_electro array[], int LARGO_eletro, est_reparacion arrayReparaciones[], int LARGO_rep);

/*
* \brief  Muestra los electrodomestiocs del anio 2020
* \param  array tipo de dato est_electro
* \param  tipo de dato int.
* \return int.
*/
int mostrarElectros2020(est_electro array[], int LARGO_eletro);

/*
* \brief  Muestra los electrodomestiocs del anio 2020
* \param  array tipo de dato est_electro
* \param  tipo de dato int.
* \param  tipo de dato int.
* \return int.
*/
int mostrarElectrosMarca(est_electro array[],int LARGO_eletro, int marcaSelec);

/*
* \brief  Muestra el electrodomestico y sus reparaciones
* \param  array tipo de dato est_electro
* \param  tipo de dato int.
* \param  array tipo de dato est_reparacion
* \param  tipo de dato int.
* \param  tipo de dato int.
* \return int.
*/
int mostrarElectrodomesticoReparado(est_electro aparato[], int LARGO_eletro, est_reparacion arrayReparaciones[], int LARGO_rep, int electroSelec);

/*
* \brief  Muestra los electrodomestiocs que fueron reparados
* \param  array tipo de dato est_electro
* \param  tipo de dato int.
* \param  array tipo de dato est_reparacion
* \param  tipo de dato int.
* \return int.
*/
int mostrarElectrodomesticoSinReparado(est_electro aparato[], int LARGO_eletro, est_reparacion arrayReparaciones[], int LARGO_rep);
