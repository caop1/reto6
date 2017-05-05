/*
 * Nombre: Empleados
 * Descripción: programa orientado a objetos...
 * Autores: Cristian Ospina
 * 			Dayana Herrera
 * 			David Bocanegra 1663833
*/

#ifndef EJECUTIVO_H
#define EJECUTIVO_H

#include "Empleados.h"

class Ejecutivo : public Empleados{
	
	private:
		int empleadosaCargo;
		int numeroOficina;
	
	public:
		Ejecutivo(int empleadosaCargo, int numeroOficina);
		~Ejecutivo();
		
		int getEmpleadosaCargo();
		void setEmpleadosaCargo(int empleadosaCargo);
		int getNumeroOficina();
		void setgetNumeroOficina(int numeroOficina);
		
	
};
#endif
