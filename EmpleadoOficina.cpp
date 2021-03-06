/*
 * Autores: Dayana Herrera Gallego. cod: 1556221
 * 		   Cristian A. Ospina Pelaez. cod: 1663740
 *         Juan David Bocanegra Hidalgo. cod: 16
 * Descripcion: Punto 2 / Pactica 3
 * Fecha de creacion: 05 / 05 / 2017
 * Fecha de ultima modificacion: 05 / 05 / 2017
 */

#include "EmpleadoOficina.h"

EmpleadoOficina::EmpleadoOficina(string nombreIn, int edadIn, double salarioIn,
                   string seccionTrabajoIn, string asociacionSindicalIn,string nombreJefeIn, string descripcionLaboralIn
                   ):EmpleadoAsistente(nombre, edad, salario, seccionTrabajoIn, asociacionSindicalIn){
	nombre = nombreIn;
	salario = salarioIn;
	edad = edadIn;
	seccionTrabajo = seccionTrabajoIn;
    asociacionSindical = asociacionSindicalIn;
    nombreJefe = nombreJefeIn;
    descripcionLaboral = descripcionLaboralIn;
}

EmpleadoOficina::~EmpleadoOficina(){

}

string EmpleadoOficina::getNombreJefe(){
		return nombreJefe;
}

string EmpleadoOficina::getDescripcionLaboral(){
		return descripcionLaboral;
}
