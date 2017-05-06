/*
 * Autores:Dayana Herrera Gallego. cod: 1556221
 * 		   Cristian A. Ospina Pelaez. cod: 1663740
 *         David Bocanegra Hidalgo. cod: 1663833
 * Descripcion: Punto 1 / Pactica 3
 * Fecha de creacion: 05 / 05 / 2017
 * Fecha de ultima modificacion: 05 / 05 / 2017
 */

#include <string>
#include <iostream>
#ifndef MES_H
#define MES_H

using namespace std;

class Mes {
	private:
		string nombre;
		int numero;
		
	public:
		Mes(string nom, int num);
		~Mes();
		
		string getNombre();
		int getNumero();
		
		void setNombre(string nom);
		void setNumero(int num);
	
	
	
};
#endif
