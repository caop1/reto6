/*
 * Autores:Dayana Herrera Gallego. cod: 1556221
 * 		   Cristian A. Ospina Pelaez. cod: 1663740
 *         Juan David Bocanegra Hidalgo. cod: 16
 * Descripcion: Punto 2 / Pactica 3
 * Fecha de creacion: 05 / 05 / 2017
 * Fecha de ultima modificacion: 05 / 05 / 2017
 */

 #ifndef EMPLEADOOFICINA_H
 #define EMPLEADOOFICINA_H
 
 #include "EmpleadoAsistente.h"

#include <string>

using std::string;

// se crea las clase Empleado de oficina

 class EmpleadoOficina:public EmpleadoAsistente{

		private:
			string nombreJefe;
			string descripcionLaboral;

		public:
			EmpleadoOficina(string nombreIn, int edadIn, double salarioIn,
                   string seccionTrabajoIn, string asociacionSindicalIn, string nombreJefeIn, string descripcionLaboralIn);
			~EmpleadoOficina();

			string getNombreJefe();
			string getDescripcionLaboral();

};

#endif
