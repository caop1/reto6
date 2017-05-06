 /*
 * Autores:Dayana Herrera Gallego. cod: 1556221
 * 		   Cristian A. Ospina Pelaez. cod: 1663740
 *         Juan David Bocanegra Hidalgo. cod: 16
 * Descripcion: Punto 2 / Pactica 3
 * Fecha de creacion: 05 / 05 / 2017
 * Fecha de ultima modificacion: 05 / 05 / 2017
 */

 #include "Empleado.h"
 #include "EmpleadoEjecutivo.h"
 #include "EmpleadoAsistente.h"
 #include "EmpleadoOficina.h"
 #include "EmpleadoOperativo.h"

 #include <iostream>
 #include <string>

 using namespace std;

 int main(){
	
	// punto a) Empleado Juan
	EmpleadoEjecutivo * empleado1 = new EmpleadoEjecutivo("Juan", 30, 1000000, 100, 302);

	//cout.precision(20);
	cout << "El empleado" << empleado1->getNombre()<<" con "<< empleado1->getEdad()<<" gana "<< empleado1->getSalario()<<endl;
	cout << "Es un empleado Ejecutivo, con "<< empleado1->getNumEmpleadosCargo()<<" empleados a cargo y esta en la oficina "<< empleado1->getNumOficina()<< endl;
	
 
	// punto b) Empleado Pedro
	EmpleadoEjecutivo * empleado2 = new EmpleadoEjecutivo("Pedro", 60, 1500000, 200, 102);
	
	cout << "El empleado" << empleado2->getNombre()<<" con "<< empleado2->getEdad()<<" años gana "<< empleado2->getSalario()<<endl;
	cout << "Es un empleado Ejecutivo, con "<< empleado2->getNumEmpleadosCargo()<<" empleados a cargo y esta en la oficina "<< empleado2->getNumOficina()<< endl;
	
	// punto c) Empleada Alberta
	EmpleadoOficina * empleado3 = new EmpleadoOficina("Alberta", 40, 10000, "2A", "SintraStark", "Pedro", "realizar la contabilidad de su sección");
	
	cout << empleado3->getNombre()<<"es una empleada Asistente de "<<empleado3->getEdad()<<" años, gana "<<empleado3->getSalario()<<" trabaja en la sección "<<empleado3->getSeccionTrabajo()<<" y pertenece a la asociación "<<empleado3->getAsociacionSindical()<<endl;
	cout << "Es una empleada de oficina cuyo jefe es "<<empleado3->getNombreJefe()<<" y se ocupa de "<<empleado3->getDescripcionLaboral()<<endl;
	
	//punto d) Empleado Carlos
	EmpleadoOperativo * empleado4 = new EmpleadoOperativo("Carlos", 20, 50000, "4F", "SintraStark", "Realizar el aseo a la sección 4F");
	
	cout <<empleado4->getNombre()<<" es un empleado de "<<empleado4->getEdad()<<" años, tiene un salario de "<<empleado4->getSalario()<<" trabaja en la seccion "<<empleado4->getSeccionTrabajo()<<" y pertenece a la asociación "<<empleado4->getAsociacionSindical()<<endl;
	cout <<"Es un empleado Operativo, cuya actividad es "<<empleado4->getDescripcionActividad()<<endl;
	
}
