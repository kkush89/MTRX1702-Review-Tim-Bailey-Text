#include <stdio.h>
#include <limits.h>
#include <float.h>


//print out the ranges of some data types
int main(){

	printf("Type \t MIN \t MAX\n");
	printf("Integer \t%d\t%d\n", INT_MIN, INT_MAX);
	printf("Float \t%f\t%f\n", FLT_MIN, FLT_MAX);
	printf("Double \t%e\t%e\n",DBL_MIN, DBL_MAX);
	printf("Long \t%ld\t%ld\n", LONG_MIN, LONG_MAX);
	printf("Long Double \t%Le\t%Le\n",LDBL_MIN, LDBL_MAX);

	//we can use #define <name> <value> to represent symbolic constants
	//NB; #define is a preprocessor command

	//type cast your variables to aovid type conversion errors	
}