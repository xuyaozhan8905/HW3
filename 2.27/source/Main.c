#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int c, b, z = 4, x = 1;
	for (int a = 1; a <= 5; a++) {
		for (b = 1; b <= z; b++) {
			printf(" ");
		}
		for (c = 1; c <= x; c++) {
			printf("*");
		}
		z -= 1;
		x += 2;
		printf("\n");
	}
	system("pause");
	return 0;
}