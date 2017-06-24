/*
*       This is main function for Calculator Project.   *
*       This main function takes commandline Arguments  *
*       Arguments can be any number                     *
*       Genereal Rule for giving commands with arguments*
*       ./bin/calculate num1 operator num2 ...
*       Dont forget to use space between two number.    *
*
*/

// Header Files   */
#include<stdio.h>
#include<string.h>
#include "sum.h"
#include "sub.h"
#include "mul.h"
#include "div.h"
//#include<iostream>
int main(int argc,char** argv)
{
	//This is Command Line Interface.
	/*if(argc == 1)
		printf("value is %s ",argv[0]);
	else if(argc == 2)
		printf("value is %s ",argv[1]);
	else if(argc == 3 )
		printf("Value is %s ",argv[2]);
	else if(argc == 4)
		printf("Value is %s ",argv[3]);
	else if(argc == 5)
		printf("value is %s ",argv[4]);*/
	printf("\n argv[0]:: %s\n argv[1]:: %s\n argv[2]:: %s\n argv[3]:: %s\n ", argv[0],argv[1],argv[2],argv[3]);


	//printf("%d",'+');
	//printf("%p",argv[2]);


	if(strcmp(argv[2], "+") == 0)
	{
		float res=sum(argc, argv);  //caling Sum method.
		printf("\nSum:: %f\n",res);
	}
	if(strcmp(argv[2], "-") == 0)
	{
		float res = sub(argc, argv);
		printf("\nSub:: %f\n",res);
	}
	if(strcmp(argv[2], "*") == 0)
	{
		float res=mul(argc, argv);
		printf("\nMul:: %f\n",res);
	}
	if(strcmp(argv[2], "/") == 0)
	{
		float res=div(argc, argv);
		printf("\nDiv:: %f\n",res);
	}

	return 0;
} 
