#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdbool.h>

bool isPrime(int num)
{
	if (num <= 1)
		return false;
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
			return false;

	}
	return true;
}
int main()
{
	int number=0;
	printf("������һ������:");
	scanf("%d", &number);

	if (isPrime(number))
	{
		printf("%d ��������\n", number);
	}
	else
	{
		printf("%d ����������\n", number);
	}



	return 0;
}
