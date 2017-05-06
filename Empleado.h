/*
 * Autores: Dayana Herrera Gallego. cod: 1556221
 * 		   Cristian A. Ospina Pelaez. cod: 1663740
 *         Juan David Bocanegra Hidalgo. cod: 16
 * Descripcion: Punto 2 / Pactica 3
 * Fecha de creacion: 05 / 05 / 2017
 * Fecha de ultima modificacion: 05 / 05 / 2017
 */
 
 // se crea clase Empleado
 
 #ifndef EMPLEADO_H
 #define EMPLEADO_H
 
#include <string>

using std::string; 
 
 class Empleado{
 
		protected:
			string nombre;
			int edad;
			double salario;
			
		public:
			Empleado(string nombreIn, int edadIn, double salarioIn);
			~Empleado();
			
			string getNombre();
			int getEdad();
			double getSalario();
			
			void setNombre();
			void setEdad();
			void setSalario(double salarioIn);

};

#endif
