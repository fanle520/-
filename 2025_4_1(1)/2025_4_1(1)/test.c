#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()

{

	int n = 9;
	float* PFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*PFloat的值为：%f\n", *PFloat);


	*PFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf(" * PFloat的值为： % f\n", *PFloat);

	return 0;
}
