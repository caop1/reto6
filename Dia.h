/*
 * Autores:Dayana Herrera Gallego. cod: 1556221
 * 		   Cristian A. Ospina Pelaez. cod: 1663740
 *         David Bocanegra Hidalgo. cod: 1663833
 * Descripcion: Punto 1 / Pactica 3
 * Fecha de creacion: 05 / 05 / 2017
 * Fecha de ultima modificacion: 05 / 05 / 2017
 */

#include <iostream>
#include <string>

#ifndef DIA_H
#define DIA_H

using namespace std;

class Dia {
	private:
		string nombre;
		int numero;
		
	public:
		Dia(string nombreIn, int numeroIn);
		~Dia();
		
		string getNombre();
		int getNumero();
		
		void setNombre(string nombreIn);
		void setNumero(int numeroIn);
	
};
#endif
