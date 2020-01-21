/* C Data Types
 * lesson_04.c
 */

#include <stdio.h>
#include "lesson_04.h"

short int thisVariableIsGlobal = 125;

/* Function declaration | Function prototype */
void printFromMainSourceFile(void);

extern void printFromSecondarySource(void);

/* Main function definition */
int main(void)
{
//	printFromMainSourceFile();
//	printFromMainSourceFile();
//	printFromMainSourceFile();
	printFromSecondarySource();

	return 0;
}

/* Function definition | Function integration | Function block */
void printFromMainSourceFile(void)
{
	auto short int testVariable = 100;

	short int *p = &testVariable;
//	{
//		auto short int testA = 10;
//	}
//
//	if(1)
//	{
//		static short int testB = 20;
//
//		printf("B = %d\n", testB);
//	}

	testVariable++;

	printf("The value of test variable is: %d\n", *p);
}
