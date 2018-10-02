#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	int b;
	
	printf("input the numerator:");
	scanf("%i", &a);
	
	printf("input the denominator:");
	scanf("%i", &b); 
	
	printf("the fraction is: %i/%i\n", a, b);
	printf("the value is: %f", (double)a/b);
	
	return 0;
}
