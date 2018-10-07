#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a;
	printf("叫块计");
	scanf_s("%d",&a);
	if (a%2==0) {
		printf("%d",a);
		printf("琌案计");
	}
	else {
		printf("%d", a);
		printf("琌计");
	}
	printf("\n");
	system("pause");
	return 0;
}