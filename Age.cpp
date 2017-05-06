/*
 * Autores:Dayana Herrera Gallego. cod: 1556221
 * 		   Cristian A. Ospina Pelaez. cod: 1663740
 *         David Bocanegra Hidalgo. cod: 1663833
 * Descripcion: Punto 1 / Pactica 3
 * Fecha de creacion: 05 / 05 / 2017
 * Fecha de ultima modificacion: 05 / 05 / 2017
 */


#include "Age.h"
#include <iostream>
using namespace std;

Age::Age(int numeroIn1, int sigloIn, bool biciestoIn){
	numero = numeroIn1;
	siglo = sigloIn;
	biciesto = biciestoIn;
}
Age::~Age(){
	
}

int Age::getNumero(){
	return numero;
}
int Age::getSiglo(){
	return siglo;
}
bool Age::getBiciesto(){
	return biciesto;
}

void Age::setNumero(int numeroIn1){
	numero = numeroIn1;
}
void Age::setSiglo(int sigloIn){
	siglo = sigloIn;
}
void Age::setBiciesto(bool biciestoIn){
	biciesto = biciestoIn;
}
