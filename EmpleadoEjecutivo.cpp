/*
 * Autores: Dayana Herrera Gallego. cod: 1556221
 * 		   Cristian A. Ospina Pelaez. cod: 1663740
 *         Juan David Bocanegra Hidalgo. cod: 16
 * Descripcion: Punto 2 / Pactica 3
 * Fecha de creacion: 05 / 05 / 2017
 * Fecha de ultima modificacion: 05 / 05 / 2017
 */

#include "EmpleadoEjecutivo.h"

EmpleadoEjecutivo::EmpleadoEjecutivo(string nombreIn, int edadIn, double salarioIn,
                        int numEmpleadosCargoIn, int numOficinaIn):Empleado(nombreIn, edadIn, salarioIn){
	nombre = nombreIn;
	salario = salarioIn;
	edad = edadIn;
	numEmpleadosCargo = numEmpleadosCargoIn;
	numOficina = numOficinaIn;
}

EmpleadoEjecutivo::~EmpleadoEjecutivo(){

}

int EmpleadoEjecutivo::getNumEmpleadosCargo(){
		return numEmpleadosCargo;
}

int EmpleadoEjecutivo::getNumOficina(){
		return numOficina;
}




