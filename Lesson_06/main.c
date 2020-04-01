/* C Functions
 * lesson_06.c
 */
#include <stdio.h>
#include "secondModule.h"
#include "Extra.h"

//MACRO like function
#define SQUARE_MACRO(x) (x * x)

/* noReturnNoParam function declaration */
void noReturnNoParam(void);
/* callWithTwoParameters function declaration */
void callWithTwoParameters(int, int);
/* callByReference function declaration */
void callByReference(int *);

//Always inline function
int squareRoot_AI(unsigned char x) __attribute__((always_inline));
//Used with sugested inline
int squareRoot_SI(unsigned char x);

int globalVariable = 0;

/* Main function */
int main(int argc, char *argv[])
{
	noReturnNoParam(); //This is the call of the function: noReturnNoParam
	callWithTwoParameters(500, 125); //This is the call of the function: callWithTwoParameters with 500 and 125

	helloFromSecondModule();//Call the function from second module

	globalVariable = 10; //Set global variable to 10
	callByReference(&globalVariable);
	printf("5. Value after calling function callByReference: %d\n", globalVariable);

	printf("6. First argument written by user: %s\n", argv[1]);
	printf("7. Second argument written by user: %s\n", argv[2]);

	printf("8. [LUT] The square number of 31 is: %d\n", squareRoot_LUT[31]);
	printf("9. [MACRO] The square number of 31 is: %d\n", SQUARE_MACRO(31));
	printf("10. [FORCED INLINE] The square number of 31 is: %d\n", squareRoot_AI(31));
	printf("11. [SUGGESTED INLINE] The square number of 31 is: %d\n", squareRoot_SI(31));

	return 0;
}

/* noReturnNoParam function definition */
void noReturnNoParam(void)
{
	printf("1. This is a function with no return and no parameters\n");
}

/* callWithTwoParameters function definition */
void callWithTwoParameters(int a, int b)
{
	printf("2. This function was called with following parameters: %d and %d\n", a, b);
}

/* callByReference function definition */
void callByReference(int *ref)
{
	printf("4. Value received as reference: %d\n", *ref);
	*ref = 25; //Change value of reference
}


int squareRoot_AI(unsigned char x)
{
	return x*x;
}

//Suggested inline
inline int squareRoot_SI(unsigned char x)
{
	return x*x;
}




