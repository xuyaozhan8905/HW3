#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a;
	printf("請輸入一個數字：");
	scanf_s("%d",&a);
	if (a%2==0) {
		printf("%d",a);
		printf("是偶數");
	}
	else {
		printf("%d", a);
		printf("是奇數");
	}
	printf("\n");
	system("pause");
	return 0;
}