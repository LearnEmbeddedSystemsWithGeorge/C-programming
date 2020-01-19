/*
 * l2.c
 *
 *  Created on: Jan 16, 2020
 *      Author: preli
 */


??=include <stdio.h>
%:include "l.h"

#define PI 3.1415
#define MAX(a, b) ((a > b) ? (a) : (b))

/* #undef PI
 *
 */

const int myVar = 10;
const char myString[3] = {'A', 'B', '\0'};

int main(void)
<%

#if (5 > 20)
	printf("PI value: %.4f\n", PI);
#elif (10 < 20)
	printf(myString);
#else
	printf("Hello from else \n");
#error "Fatal error"
#endif

	return 0;
??>
