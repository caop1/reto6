/*
 * Nombre: Empleados
 * Descripción: programa orientado a objetos...
 * Autores: Cristian Ospina
 * 			Dayana Herrera
 * 			David Bocanegra 1663833
*/

#ifndef EMPLEADOS_H
#define EMPLEADOS_H

#include <string>
using std::string;

class Empleados{
	
	protected:
		string nombre;
		int edad;
		double salario;
								
	
	public:
		Empleados(string nombre, int edad, double salario);
		~Empleados();
		string getNombre();
		
		void setNombre(string nombre);
		int getEdad();
		void setEdad(int edad);
		double getSalario();
		void setSalario(double salario);
	
	
};
#endif
