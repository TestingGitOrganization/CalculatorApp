// This class is meant to calculate addition between n numbers.
#include "AdditionModule.h"

Add::Add(){
	a = b = 0;
}

Add::~Add(){
	// TO DO add the destructor code here
}

void Add::setValues(int tempa, int tempb){
	a = tempa; b = tempb;
}

int Add::getAddResult()const{
	// return the result
	return a+b;
}