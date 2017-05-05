/*
 * Nombre: Empleados
 * Descripción: programa orientado a objetos...
 * Autores: Cristian Ospina
 * 			Dayana Herrera
 * 			David Bocanegra 1663833
*/

#include "Ejecutivo.h"


Ejecutivo::Ejecutivo(int empleadosaCargo, int numeroOficina):Empleados(nombre, edad, salario){
	
		this->empleadosaCargo = empleadosaCargo;
		this->numeroOficina = numeroOficina;
	
}
	

Ejecutivo::~Ejecutivo(){
			
}
		
	
int Ejecutivo::getEmpleadosaCargo(){
	
		return empleadosaCargo;
	
}


void Ejecutivo::setEmpleadosaCargo(int empleadosaCargo){
	
		this->empleadosaCargo = empleadosaCargo;
	
}


int Ejecutivo::getNumeroOficina(){
	
		return numeroOficina;

}


void Ejecutivo::setgetNumeroOficina(int numeroOficina){
	
		this->numeroOficina = numeroOficina;
	
}
