#include<stdio.h>
#include<stdlib.h>
int main(void) {
	float a, b, BMI;
	printf("請輸入身高及體重：");
	scanf_s("%f%f",&a,&b);
	BMI = b/(a*a);
	printf("%f", BMI);
	printf("\n");
	if (BMI < 18.5) {
		printf("BMI is Underweight\n");
	}
	else if (18.5 <= BMI <=24.9) {
		printf("BMI is Normal\n");
	}
	else if (25 <= BMI <=29.9) {
		printf("BMI is Overweight\n");
	}
	else if (30<= BMI) {
		printf("BMI is Obese\n");
	}
	system("pause");
	return 0;
}