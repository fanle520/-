#include<stdio.h>

int main()

{

	int n = 9;
	float* PFloat = (float*)&n;
	printf("n��ֵΪ��%d\n", n);
	printf("*PFloat��ֵΪ��%f\n", *PFloat);


	*PFloat = 9.0;
	printf("num��ֵΪ��%d\n", n);
	printf(" * PFloat��ֵΪ�� % f\n", *PFloat);

	return 0;
}
