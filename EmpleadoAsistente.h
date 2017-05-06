/*
 * Autores: Dayana Herrera Gallego. cod: 1556221
 * 		   Cristian A. Ospina Pelaez. cod: 1663740
 *         Juan David Bocanegra Hidalgo. cod: 16
 * Descripcion: Punto 2 / Pactica 3
 * Fecha de creacion: 05 / 05 / 2017
 * Fecha de ultima modificacion: 05 / 05 / 2017
 */

 #ifndef EMPLEADOASISTENTE_H
 #define EMPLEADOASISTENTE_H
 #include "Empleado.h"

#include <string>

using std::string;

// se crea las clase Empleado Asistente

 class EmpleadoAsistente:public Empleado{

		protected:
			string seccionTrabajo;
			string asociacionSindical;

		public:
			EmpleadoAsistente(string nombreIn, int edadIn, double salarioIn,
                     string seccionTrabajoIn, string asociacionSindicalIn);
			~EmpleadoAsistente();

			string getSeccionTrabajo();
			string getAsociacionSindical();

};

#endif
