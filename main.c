#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char char1;
	int int1;
	
	printf("input a number:");
	scanf("%c", &char1);
	
	int1= char1-48;
	printf("the input number is %i\n", int1);
	
	return 0;
}
