#include <stdio.h>
#include <stdlib.h>
float km, gas, effect;
int parking, passing, total;
int main()
{
	printf("一整天的總里程數(km):");
	scanf_s("%f", &km);
	printf("汽油一公升/加侖多少錢:");
	scanf_s("%f", &gas);
	printf("平均一公升/加侖能行駛多少公里:");
	scanf_s("%f", &effect);
	printf("一天的停車費:");
	scanf_s("%d", &parking);
	printf("一天的通行費(過路費):");
	scanf_s("%d", &passing);
	total = ((km / effect * gas) + parking + passing);
	printf("您今天總共的花費:%d元\n", total);
	system("pause");
	return 0;
}