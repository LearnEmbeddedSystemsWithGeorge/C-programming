/* C Data Types
 * lesson_03.c
 */
#include <stdio.h>
#include "lesson_03.h"

/* Character variables */
signed char charOne			= -32;
unsigned char charTwo 		= 32;
char charThree				= 'C';

/* Integer variables */
signed int integerOne 		= -2001;
unsigned int integerTwo 	= 2001;
short int integerThree		= 0xFFFF;
long int integerFour		= 0xFFFFFF;
long long int integerFive	= 0xFFFFFFFFFFFF;

/* Real number variables */
float floatOne = 1.5678999009;
double doubleOne = 1.123456789123456789;

static void PrintBasicDataTypes(void);
static void EnumerationExample(void);

int main(void)
{
	PrintBasicDataTypes();
	EnumerationExample();

	return 0;
}

static void PrintBasicDataTypes(void)
{
	printf("Character one treated as number: %u, size of signed char: %u\n", charOne, sizeof(signed char));
	printf("Character two treated as number: %u, size of unsigned char: %u\n", charTwo, sizeof(unsigned char));
	printf("Character three treated as char: %c, size of char: %u\n", charThree, sizeof(char));
	printf("Integer one: %d, size of signed int: %u\n", integerOne, sizeof(signed int));
	printf("Integer two: %u, size of unsigned int: %u\n", integerTwo, sizeof(unsigned int));
	printf("Integer three: %u, size of short int: %u\n", integerThree, sizeof(short int));
	printf("Integer four: %ld, size of long int: %u\n", integerFour, sizeof(long int));
	printf("Integer five: %ld, size of long long int: %u\n", integerFive, sizeof(long long int));
	printf("Float one: %f, size of float: %u\n", floatOne, sizeof(float));
	printf("Double one: %.15lf, size of double: %u\n", doubleOne, sizeof(double));

	printf("Size of long double: %u\n", sizeof(long double));
}

static void EnumerationExample(void)
{
	printf("Enumeartion: %d\n", Jan);
	printf("Enumeartion: %d\n", Feb);
	printf("Enumeartion: %d\n", ON);
	printf("Enumeartion: %d\n", OFF);
	printf("Enumeartion: %d\n", IDLE);
}

