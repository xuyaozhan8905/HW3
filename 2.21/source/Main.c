#include <stdio.h>
#include<stdlib.h>
int main(void) {
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
	system("pause");
	return 0;
}