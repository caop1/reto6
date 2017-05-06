/*
 * Autores:Dayana Herrera Gallego. cod: 1556221
 * 		   Cristian A. Ospina Pelaez. cod: 1663740
 *         David Bocanegra Hidalgo. cod: 1663833
 * Descripcion: Punto 1 / Pactica 3
 * Fecha de creacion: 05 / 05 / 2017
 * Fecha de ultima modificacion: 05 / 05 / 2017
 */

#include <iostream>
#include <string>
#include "Dia.h"
#include "Mes.h"
#include "Age.h" 
#ifndef FECHA_H
#define FECHA_H

using namespace std;

class Fecha{
	private:
		Dia * objDia;
		Mes * objMes;
		Age * objAge;
	public:
		Fecha(string nombreIn, int numeroIn,string nom, int num,int numeroIn1, int sigloIn, bool biciestoIn);
		~Fecha();
		
		//Dia
		
		string getNombreD();
		int getNumeroD();
		void setNombreD(string nombreIn);
		void setNumeroD(int numeroIn);
		
		//Mes
		
		string getNombreM();
		int getNumeroM();
		void setNombreM(string nom);
		void setNumeroM(int num);
		
		//Age
		
		int getNumero();
		int getSiglo();
		bool getBiciesto();
		void setNumero(int numeroIn1);
		void setSiglo(int sigloIn);
		void setBiciesto(bool biciestoIn);
};
#endif
