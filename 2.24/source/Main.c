#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a;
	printf("�п�J�@�ӼƦr�G");
	scanf_s("%d",&a);
	if (a%2==0) {
		printf("%d",a);
		printf("�O����");
	}
	else {
		printf("%d", a);
		printf("�O�_��");
	}
	printf("\n");
	system("pause");
	return 0;
}