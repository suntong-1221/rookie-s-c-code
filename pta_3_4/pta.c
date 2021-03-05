#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n = 0;
	int arr[20] = { 0 };
	int cnt = 0;
	int i = 0;
	scanf("%d", &n);
	if (n < 0)
	{
		printf("fu");
		printf(" ");
		n = 0 - n;
	}
	else if (n == 0)
	{
		printf("ling");
	}
	while (n != 0)
	{
       
		arr[cnt] = n % 10;
		n = n / 10;
		 cnt++;
	}
	for (i = cnt-1; i >= 0; i--)
	{
		switch (arr[i])
		{
		case 0:printf("ling");
			break;
		case 1:printf("yi");
			break;
		case 2:printf("er");
			break;
		case 3:printf("san");
			break;
		case 4:printf("si");
			break;
		case 5:printf("wu");
			break;
		case 6:printf("liu");
			break;
		case 7:printf("qi");
			break;
		case 8:printf("ba");
			break;
		case 9:printf("jiu");
			break;

		}
		if (i != 0)
		{
			printf(" ");
		}
	}
	return 0;
}