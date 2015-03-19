/*
 * hello3.c
 *
 *  Created on: Mar 14, 2015
 *      Author: tonyb
 */


#include <stdio.h>
#include <stdlib.h>



int main(void)
{

char i;

	for(i=0;i<100;i++){

		printf("\n%02d. Hello world---333 -- addr.i= %x ",i,&i);

	}

	return 0;
}

