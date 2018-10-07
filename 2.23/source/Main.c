#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a, b, c, d;
	printf("块计:");
	scanf_s("%d%d%d", &a, &b, &c);
	if (c > a)
	{
		d = a;
		a = c;
		c = d;
		if (b > a)
		{
			d = a;
			a = b;
			b = d;
		}
		if (c > b)
		{
			d = c;
			c = b;
			b = d;
		}
	}
	if (a > c)
	{
		if (b > a)
		{
			d = b;
			b = a;
			a = d;
		}
		if (c > b)
		{
			d = c;
			c = b;
			b = d;
		}
	}
	printf("程计琌:%d\n", a);
	printf("程计琌:%d\n", c);
	system("pause");
	return 0;
}