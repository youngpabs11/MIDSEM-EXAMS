#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char category;
	float temperature;
	printf("Enter temperature");
	scanf(" %f", &temperature);
	
	if(temperature<35){
		printf("Category:low\n", &category);
	}
	else if(temperature <35 && temperature <37.5){
		printf("Category:normal\n", &category);
	}
	else if(temperature>37.5){
		printf("Category:high\n", &category);
	}
	return 0;
}
