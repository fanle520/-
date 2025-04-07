#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	int num = 0;
	int digit = 0;
	int sum=0;

	printf("水仙花数有:\n");
	for (i = 100; i < 1000; i++)
	{
		num = i;
		sum = 0;
		while (num > 0)
		{
			digit = num % 10;
			sum += digit * digit * digit;
			num /= 10;
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}



	return 0;

}
