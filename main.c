#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char* dani[7] = { "ponedjeljak","utorak","srijeda","cetvrtak","petak","subota","nedjelja" };
	int n;

	do{
		printf("Unesi broj dana u tjednu:");
		scanf_s("%d", &n);
		if (n < 1 || n > 7) {
			printf("Krivo unesen broj za dan,unesi ponovno\n");
		}
	} while (n < 1 || n > 7);
	
	printf("Trazeni dan je %s.\n", *(dani+n-1));
	return 0;
}
