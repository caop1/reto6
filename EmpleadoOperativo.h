/*
 * Autores:Dayana Herrera Gallego. cod: 1556221
 * 		   Cristian A. Ospina Pelaez. cod: 1663740
 *         Juan David Bocanegra Hidalgo. cod: 16
 * Descripcion: Punto 2 / Pactica 3
 * Fecha de creacion: 05 / 05 / 2017
 * Fecha de ultima modificacion: 05 / 05 / 2017
 */

 #ifndef EMPLEADOOPERATIVO_H
 #define EMPLEADOOPERATIVO_H
 #include "EmpleadoAsistente.h"

#include <string>

using std::string;

// se crea las clase Empleado operativo

 class EmpleadoOperativo:public EmpleadoAsistente{

		private:
			string descripcionActividad;

		public:
			EmpleadoOperativo(string nombreIn, int edadIn, double salarioIn,
                   string seccionTrabajoIn, string asociacionSindicalIn, string descripcionActividadIn);
			~EmpleadoOperativo();

			string getDescripcionActividad();

};

#endif
