/*
 * Autores:Dayana Herrera Gallego. cod: 1556221
 * 		   Cristian A. Ospina Pelaez. cod: 1663740
 *         David Bocanegra Hidalgo. cod: 1663833
 * Descripcion: Punto 1 / Pactica 3
 * Fecha de creacion: 05 / 05 / 2017
 * Fecha de ultima modificacion: 05 / 05 / 2017
 */


#include "Fecha.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	Fecha * fechita = new Fecha("viernes",5,"marzo", 3,17, 21, false);
	Fecha * fechota= new Fecha("martes",2,"enero", 1,16, 21, true);
	Fecha * fechang = new Fecha("domingo",3,"diciembre", 12,14, 21, false);
	
	cout<<"este es el dia de fechita:  "<<fechita->getNombreD()<<endl;
	cout<<"este es el numero del mes de fechota: "<<fechota->getNumeroM()<<endl;
	cout<<"este es el mes de fechang: "<<fechang->getNombreM()<<endl;
	
	fechita->setNombreD("sabado");
	cout<<"\n\neste es el nuevo dia de fechita: "<<fechita->getNombreD()<<endl;
	fechang->setNombreM("noviembre");
	cout<<"\n\neste es el nuevo mes: "<<fechang->getNombreM()<<endl;
}
