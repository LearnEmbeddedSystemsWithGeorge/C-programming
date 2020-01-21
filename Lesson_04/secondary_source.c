/*
 * secondary_source.c
 *
 *  Created on: Jan 21, 2020
 *      Author: preli
 */
#include <stdio.h>
#include "secondary_source.h"

/* Function declaration | Function prototype */
void printFromSecondarySource(void);

/* Function definition | Function integration | Function block */
void printFromSecondarySource(void)
{
	extern short int thisVariableIsGlobal;

	//thisVariableIsGlobal = 20;

	printf("The extern variable is: %d\n", thisVariableIsGlobal);
}
