#ifndef _MULTIPLEX_
#define _MULTIPLEX_

#include <iostream>

class Multiplex
{
public:
	Multiplex();
	~Multiplex();
	
	int getMult(int A, int B, bool seletor){
		if(seletor){
			return A;
		}else{
			return B;
		}
	}
};

#endif