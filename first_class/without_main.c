#include<stdio.h>
int ADD(int a, int b)
{
	return a+b;
}
int main()
{
	int sum = ADD(2,3);
	printf("Sum = %d\n", sum);
	return 0;
}
