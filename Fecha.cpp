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
Fecha::Fecha(string nombreIn, int numeroIn,string nom, int num,int numeroIn1, int sigloIn, bool biciestoIn){
		objDia = new Dia(nombreIn, numeroIn);
		objMes = new Mes( nom, num);
		objAge = new Age(numeroIn1,  sigloIn,  biciestoIn);
}
Fecha::~Fecha(){
}
//Dia

string Fecha::getNombreD(){
	return objDia->getNombre();
}
int Fecha::getNumeroD(){
	return objDia->getNumero();
}
void Fecha::setNombreD(string nombreIn){
	objDia->setNombre(nombreIn);
}
void Fecha::setNumeroD(int numeroIn){
	objDia->setNumero(numeroIn);	
}

//Mes

string Fecha::getNombreM(){
	return objMes->getNombre();
}
int Fecha::getNumeroM(){
	return objMes->getNumero();
}
void Fecha::setNombreM(string nom){
	objMes->setNombre(nom);
}
void Fecha::setNumeroM(int num){
	objMes->setNumero(num);
}

//Age

int Fecha::getNumero(){
	return objAge->getNumero();
}
int Fecha::getSiglo(){
	return objAge->getSiglo();
}
bool Fecha::getBiciesto(){
	return objAge->getBiciesto();
}
void Fecha::setNumero(int numeroIn1){
	objAge->setNumero(numeroIn1);
}
void Fecha::setSiglo(int sigloIn){
	objAge->setSiglo(sigloIn);
}
void Fecha::setBiciesto(bool biciestoIn){
	objAge->setBiciesto(biciestoIn);
}
