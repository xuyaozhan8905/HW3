#include<stdio.h>
#include<stdlib.h>
int main(void) {
	int a, b;
	printf("�п�J��Ӽƭ�");
	scanf_s("%d%d",&a,&b);
	if (a%b==0) {
		printf("%d",a);
		printf("�O");
		printf("%d",b);
		printf("����");
	}
	else {
		printf("%d", a);
		printf("���O");
		printf("%d", b);
		printf("����");
	}
	printf("\n");
	system("pause");
	return 0;
}