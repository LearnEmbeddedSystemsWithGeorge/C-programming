/*
 * secondModule.c
 *
 */
#include <stdio.h>

static void localFunction(void);

extern void helloFromSecondModule(void)
{
	printf("3. Hello from second module!\n");
	localFunction();
}

static void localFunction(void)
{
	printf("Local function\n");
}
