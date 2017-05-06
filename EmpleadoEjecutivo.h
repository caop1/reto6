/*
 * Autores: Dayana Herrera Gallego. cod: 1556221
 * 		   Cristian A. Ospina Pelaez. cod: 1663740
 *         Juan David Bocanegra Hidalgo. cod: 16
 * Descripcion: Punto 2 / Pactica 3
 * Fecha de creacion: 05 / 05 / 2017
 * Fecha de ultima modificacion: 05 / 05 / 2017
 */

 #ifndef EMPLEADOEJECUTIVO_H
 #define EMPLEADOEJECUTIVO_H
 #include "Empleado.h"

#include <string>

using std::string;

// se crea las clase Empleado Ejecutivo

 class EmpleadoEjecutivo:public Empleado{

		private:
			int numEmpleadosCargo;
			int numOficina;

		public:
			EmpleadoEjecutivo(string nombreIn, int edadIn, double salarioIn,
                     int numEmpleadosCargoIn, int numOficinaIn);
			~EmpleadoEjecutivo();

			int getNumEmpleadosCargo();
			int getNumOficina();

};

#endif
