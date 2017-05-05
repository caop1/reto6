#include <iostream>

#ifndef AGE_H
#define AGE_H

using namespace std;

class Age {
	private:
		int numero;
		int siglo;
		bool biciesto;
		
	public:
		Age(int numeroIn1, int sigloIn, bool biciestoIn);
		~Age();
		
        int getNumero();
		int getSiglo();
		bool getBiciesto();
		
		void setNumero(int numeroIn1);
		void setSiglo(int sigloIn);
		void setBiciesto(bool biciestoIn);
		
};
#endif
