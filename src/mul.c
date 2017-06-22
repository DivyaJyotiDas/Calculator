#include "mul.h"
#include "operand.h"
float mul(int argc, char** argv)
{
        float res=0.0;
	res = mul_of_operand(argc, argv); //mul_of_opernad() function is availbale in library liboperand.so

        return res;
}

