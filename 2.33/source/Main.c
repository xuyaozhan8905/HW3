#include <stdio.h>
#include <stdlib.h>
float km, gas, effect;
int parking, passing, total;
int main()
{
	printf("�@��Ѫ��`���{��(km):");
	scanf_s("%f", &km);
	printf("�T�o�@����/�[�ڦh�ֿ�:");
	scanf_s("%f", &gas);
	printf("�����@����/�[�گ��p�h�֤���:");
	scanf_s("%f", &effect);
	printf("�@�Ѫ������O:");
	scanf_s("%d", &parking);
	printf("�@�Ѫ��q��O(�L���O):");
	scanf_s("%d", &passing);
	total = ((km / effect * gas) + parking + passing);
	printf("�z�����`�@����O:%d��\n", total);
	system("pause");
	return 0;
}