#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a, b;
	printf("請輸入兩個數值");
	scanf_s("%d%d",&a,&b);
	if (a%b==0) {
		printf("%d",a);
		printf("是");
		printf("%d",b);
		printf("倍數");
	}
	else {
		printf("%d", a);
		printf("不是");
		printf("%d", b);
		printf("倍數");
	}
	printf("\n");
	system("pause");
	return 0;
}