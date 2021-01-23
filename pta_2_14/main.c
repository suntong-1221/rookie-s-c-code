#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int N = 0;
	int i = 0;
	int j = 1;
    double sum = 0;
	double sum1 = 0;
	scanf("%d", &N);
	
	for (i = 0; i < N; i++)
	{
		sum1 = 1.0 / j;
		//printf("%lf\n", sum1);
		sum = sum + sum1;
		j = j + 2;
	}
	printf("sum = %.6lf\n", sum);
	return 0;
}