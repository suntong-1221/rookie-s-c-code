#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

int main()
{
	int N = 0;
	int i = 1;
	int j = 1;
	int k = 1;
	double sum = 0;
	double sum1 = 0;
	scanf("%d", &N);
	while(i <= N)
	{  
		sum1 = 1.0 / k;
        //printf("k = %d  sum1 = %f\n", k, sum1);
		sum = sum + sum1;
		
		i = i + 1;
		j = j + 3;
        k = j;
		if (j % 2 == 0)
		{
			k = -1 * k;
		} 
		
	//	printf("%d\n", k);
	}
	printf("sum = %.3lf\n", sum);
	return 0;
}