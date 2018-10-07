#include<stdio.h>
#include<stdlib.h>

int main() {
	int  d = 4, f, g = 3;
	for (int a = 1; a <= 9; a++) {
		printf("P");
	}
	printf("\n");
	for (int b = 1; b <= 4; b++) {
		for (int c = 1; c <= d; c++) {
			printf(" ");
		}
		for (int e = 1; e <= 2; e++)
		{
			printf("P");
			for (f = 1; f <= g; f++)
			{
				printf(" ");
			}
		}
		if (b == 3) {
			d += 1;
			g = 1;
		}
		printf("\n");
	}
	printf("\n");
	int z = 2, x = 2;
	for (int a = 1; a <= 5; a++) {
		if (a == 3) {
			x = 1;
		}
		if (a == 4) {
			z = 1;
			x = 1;
		}
		if (a == 5) {
			z = 2;
			x = 7;
		}
		for (int b = 1; b <= z; b++) {
			printf(" ");
		}
		for (int c = 1; c <= x; c++) {
			printf("J");
		}
		printf("\n");
		z -= 1;
		x -= 1;
	}
	printf("\n");
	int q = 0, w = 1, t = 7;
	for (int a = 1; a <= 5; a++) {
		if (a == 1) {
			q = 0;
			w = 8;
			t = 0;
		}
		if (a == 4) {
			q = 1;
			w = 1;
			t = 5;
		}
		if (a == 5) {
			q = 2;
			w = 4;
			t = 0;
		}
		for (int b = 1; b <= q; b++) {
			printf(" ");
		}
		for (int c = 1; c <= w; c++) {
			printf("D");
		}
		for (int d = 1; d <= t; d++) {
			printf(" ");
		}
		printf("D\n");
		q = 0;
		w = 1;
		t = 7;
	}
	system("pause");
	return 0;
}