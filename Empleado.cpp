/*
 * Autores: Dayana Herrera Gallego. cod: 1556221
 * 		   Cristian A. Ospina Pelaez. cod: 1663740
 *         Juan David Bocanegra Hidalgo. cod: 16
 * Descripcion: Punto 2 / Pactica 3
 * Fecha de creacion: 05 / 05 / 2017
 * Fecha de ultima modificacion: 05 / 05 / 2017
 */
 
#include "Empleado.h"

Empleado::Empleado(string nombreIn, int edadIn, double salarioIn){
	nombre = nombreIn;
	salario = salarioIn;
	edad = edadIn;
}

Empleado::~Empleado(){
	
}

string Empleado::getNombre(){
		return nombre;
}

int Empleado::getEdad(){
		return edad;
}

double Empleado::getSalario(){
	return salario;
}



