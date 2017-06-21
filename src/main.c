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
	printf("\nArgc:: %d\n",argc);
	printf("\nargv[0]:: %s\n,argv[1]:: %s\n, argv[3]:: %s\n,argv[4]:: %s\n ", argv[0],argv[1],argv[3], argv[4]);
	printf("argv[2] = %s\n",argv[2]);


	//printf("%d",'+');
	//printf("%p",argv[2]);


	if(strcmp(argv[2], "+") == 0)
	{
		printf("Calling sum function.\n");
		float res=sum(argc, argv);  //caling Sum method.
		printf("\nSum:: %f",res);
		printf("Calling ends.");
	}
	if(strcmp(argv[2], "-") == 0)
	{
		printf("\nSub Function Called.");
		float res = sub(argc, argv);
		printf("\nSub:: %f",res);
		printf("\nSub Function Ends.");
	}
	if(strcmp(argv[2], "*") == 0)
	{
		printf("\nMultiplication Function Called.");
		float res=mul();
		printf("\nMul:: %f",res);
		printf("\nMultiplication Function Ends.");
	}
	if(strcmp(argv[2], "/") == 0)
	{
		printf("\nDivision Function Called.");
		float res=div();
		printf("\nDiv:: %f",res);
		printf("\nDivision Function Ends.");
	}

	printf("\nExiting...\n\n");
	return 0;
} 
