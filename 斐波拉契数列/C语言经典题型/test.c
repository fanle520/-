#define  _CRT_SECURE_NO_WARNINGS 1
//斐波拉契数列
#include<stdio.h>
void static printFibonacci(int n)
{
	int fib1 = 0; 
	int fib2 = 1;
	int  next=0;

	for (int i = 1; i <= n; i++)
	{
		printf("%d", fib1);
		next = fib1 + fib2;
		fib1 = fib2;
		fib2 = next;
	}
	printf("\n");

}
int main()
{
	int N;
	printf("请输入要输出的斐波拉契数的个数N：");
	scanf("%d", &N);
	printFibonacci(N);
 
	return 0;
}
