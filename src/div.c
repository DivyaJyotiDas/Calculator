#include "div.h"
#include "operand.h"
float div(int argc, char** argv)
{
        float res;
        res = div_of_operand(argc, argv);
	printf("\nDiv return by lib:: %f",res);
       // return res;
}

