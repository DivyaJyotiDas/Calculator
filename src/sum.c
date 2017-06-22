#include "sum.h"
#include "operand.h" 
float sum(int argc, char** argv)
{
	float res=0;
	res=sum_of_operand(argc, argv);
	return res;
	
}
