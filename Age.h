/*
 * Autores:Dayana Herrera Gallego. cod: 1556221
 * 		   Cristian A. Ospina Pelaez. cod: 1663740
 *         David Bocanegra Hidalgo. cod: 1663833
 * Descripcion: Punto 1 / Pactica 3
 * Fecha de creacion: 05 / 05 / 2017
 * Fecha de ultima modificacion: 05 / 05 / 2017
 */

#include <iostream>

#ifndef AGE_H
#define AGE_H

using namespace std;

class Age {
	private:
		int numero;
		int siglo;
		bool biciesto;
		
	public:
		Age(int numeroIn1, int sigloIn, bool biciestoIn);
		~Age();
		
        int getNumero();
		int getSiglo();
		bool getBiciesto();
		
		void setNumero(int numeroIn1);
		void setSiglo(int sigloIn);
		void setBiciesto(bool biciestoIn);
		
};
#endif
