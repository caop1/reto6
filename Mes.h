#include <string>
#include <iostream>
#ifndef MES_H
#define MES_H

using namespace std;

class Mes {
	private:
		string nombre;
		int numero;
		
	public:
		Mes(string nom, int num);
		~Mes();
		
		string getNombre();
		int getNumero();
		
		void setNombre(string nom);
		void setNumero(int num);
	
	
	
};
#endif
