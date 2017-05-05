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
