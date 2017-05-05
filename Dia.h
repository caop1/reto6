#include <iostream>
#include <string>

#ifndef DIA_H
#define DIA_H

using namespace std;

class Dia {
	private:
		string nombre;
		int numero;
		
	public:
		Dia(string nombreIn, int numeroIn);
		~Dia();
		
		string getNombre();
		int getNumero();
		
		void setNombre(string nombreIn);
		void setNumero(int numeroIn);
	
};
#endif
