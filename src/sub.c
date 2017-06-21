#include "sub.h"
#include "operand.h"
float sub(int argc, char** argv)
{
	float res=0.0;
	int i;
	res = sub_of_operand(argc, argv);	
	return res;
}	
