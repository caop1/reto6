/*
 * Nombre: Empleados
 * Descripción: programa orientado a objetos...
 * Autores: Cristian Ospina
 * 			Dayana Herrera
 * 			David Bocanegra 1663833
*/

#include "Empleados.h"

Empleados::Empleados(string nombre, int edad, double salario){
	
		this->nombre = nombre;
		this->edad = edad;
		this->salario = salario;
	
}

Empleados::~Empleados(){
	
			
}

string Empleados::getNombre(){
	
		return nombre;
	
}
		

void Empleados::setNombre(string nombre){
	
		this->nombre = nombre;
	
}


int Empleados::getEdad(){

	    return edad;
	
}

void Empleados::setEdad(int edad){
	
		this->edad = edad;
			
}


double Empleados::getSalario(){
	
		return salario;
	
}


void Empleados::setSalario(double salario){
	
		this->salario = salario;

}
