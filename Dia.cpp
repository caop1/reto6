/*
 * Autores:Dayana Herrera Gallego. cod: 1556221
 * 		   Cristian A. Ospina Pelaez. cod: 1663740
 *         David Bocanegra Hidalgo. cod: 1663833
 * Descripcion: Punto 1 / Pactica 3
 * Fecha de creacion: 05 / 05 / 2017
 * Fecha de ultima modificacion: 05 / 05 / 2017
 */

#include "Dia.h"
#include <iostream>
#include <string>
using namespace std;

Dia::Dia(string nombreIn, int numeroIn){
		nombre = nombreIn;
		numero = numeroIn;
	
	}
Dia::~Dia(){
	
}		
string Dia::getNombre(){
	return nombre;
}
int Dia::getNumero(){
	return numero;
}
		
void Dia::setNombre(string nombreIn){
	nombre = nombreIn;
}
void Dia::setNumero(int numeroIn){
	numero = numeroIn;
}
	
