/*
 ============================================================================
 Name        : Ficha3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int year = 0;
	if(year % 4 == 0 && year % 100 != 0){
		puts("O ano é bissexto");
	}
	else if(year % 4 != 0 && year % 400 == 0){
		puts("O ano é bissexto");
	}
	else{
		puts("O ano não é bissexto");
	}
	//puts("Hello World");

	//OU :




	return 0;
}
