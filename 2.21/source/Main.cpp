#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	/*1*/
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (i == 0 || i == 8) printf("*");
			
			else {
				if (j == 0 || j == 8)printf("*");
				else printf(" ");
			}
		}
		printf("\n");
	}
	
	/*2*/
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (i == 0 || i == 8) {
				if (j == 3 || j == 4 || j == 5)printf("*");
				else printf(" ");
			}
			else if (i == 1 || i == 7) {
				if (j == 1 || j == 7)printf("*");
				else printf(" ");
			}
			else {
				if (j == 0 || j == 8)printf("*");
				else printf(" ");
			}
		}
		printf("\n");
	}
	/*3*/
	int  c = 2,e = 1;
		for (int a = 1; a <= 3; a++) {
			for (int b = 1; b <= c; b++) {
				printf(" ");
			}
			for (int d = 1; d <= e; d++) {
				printf("*");
			}
			c -= 1;
			e += 2;
			printf("\n");
		}
		for (int i = 1; i <= 6; i++) {
			printf("  ");
			printf("*");
			printf("\n");
		}
	/*4*/
		int h=3, k=1;
	printf("    *");
	printf("\n");
	for (int a = 1; a <= 5; a++) {
		for (int b = 1; b <= h; b++) {
		printf(" ");
		}
		if (h == 0) {
			break;
		}
		else {
			printf("*");
		}
		for (int c = 1; c <= k; c++) {
			printf(" ");
		}
		printf("*");
		h -= 1;
		k += 2;
		printf("\n");
	}
	int w=0, x=7;
	for (int a = 1; a <= 4; a++) {
		for (int b = 1; b <=w ; b++) {
			printf(" ");
		}
		printf("*");
		for (int c = 1; c <= x; c++) {
			printf(" ");
		}
		printf("*");
		printf("\n");
		w += 1;
		x -= 2;
	}
	printf("    *\n");
	system("pause");
	return 0;
}
