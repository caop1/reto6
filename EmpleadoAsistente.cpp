/*
 * Autores: Dayana Herrera Gallego. cod: 1556221
 * 		   Cristian A. Ospina Pelaez. cod: 1663740
 *         Juan David Bocanegra Hidalgo. cod: 16
 * Descripcion: Punto 2 / Pactica 3
 * Fecha de creacion: 05 / 05 / 2017
 * Fecha de ultima modificacion: 05 / 05 / 2017
 */

#include "EmpleadoAsistente.h"

EmpleadoAsistente::EmpleadoAsistente(string nombreIn, int edadIn, double salarioIn,
                                     string seccionTrabajoIn, string asociacionSindicalIn
                                     ):Empleado(nombreIn, edadIn, salarioIn){
	nombre = nombreIn;
	salario = salarioIn;
	edad = edadIn;
	seccionTrabajo = seccionTrabajoIn;
    asociacionSindical = asociacionSindicalIn;
}

EmpleadoAsistente::~EmpleadoAsistente(){

}

string EmpleadoAsistente::getSeccionTrabajo(){
		return seccionTrabajo;
}

string EmpleadoAsistente::getAsociacionSindical(){
		return asociacionSindical;
}
