#include "sum.h"
#include "operand.h" 
int sum(int argc, char** argv)
{
	int res=0;
	res=sum_of_operand(argc, argv);
	return res;
	
}
