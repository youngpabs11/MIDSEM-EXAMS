#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int values;
	printf("Enter temperature value");
	scanf("%d", &values);
	float temperature;
	printf("Enter body temperature(degree celsius):");
	scanf("%f", &temperature);
	printf("Temperature: %.1fdegree celsius\n", temperature);
	return 0;
}
