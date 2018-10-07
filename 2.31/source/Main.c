#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a[11] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int x;
	int c;
	printf("Number");
	printf(" ");
	printf("Square");
	printf(" ");
	printf("Cube");
	printf("\n");
	for (int b = 0; b <= 10; b++)
	{
		x = a[b] * a[b];
		c = a[b] * a[b] * a[b];
		printf("%d", a[b]);
		if (b >= 4)
		{
			printf(" ");
		}
		printf("%7d", x);
		if(b==3||b>=5)
		{
			printf(" ");
		}
		printf("%7d", c);
		printf("\n");
	}
	system("pause");
	return 0;
}