/*
 * Autores:Dayana Herrera Gallego. cod: 1556221
 * 		   Cristian A. Ospina Pelaez. cod: 1663740
 *         David Bocanegra Hidalgo. cod: 1663833
 * Descripcion: Punto 1 / Pactica 3
 * Fecha de creacion: 05 / 05 / 2017
 * Fecha de ultima modificacion: 05 / 05 / 2017
 */

#include "Mes.h"
#include <iostream>
#include <string>
using namespace std;

Mes::Mes(string nom, int num){
		nombre = nom;
		numero = num;
	
}
Mes::~Mes(){
	
}		
string Mes::getNombre(){
	return nombre;
}
int Mes::getNumero(){
	return numero;
}
		
void Mes::setNombre(string nom){
	nombre = nom;
}
void Mes::setNumero(int num){
	numero = num;
}
