#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

void test(int n)
{
	if (n < 10000)
	{
		test(n + 1);
	}
}
int main()
{
	test(1);
	return 0;
}
//��n��쳲�������
//1 1 2 3 5 8 13 21 34 55....
//int count = 0;
//������n��
//int Fib(int n)
//{
//	if (n == 3)//���Ե�����쳲��������ļ������
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int i = 0;
//	int ret = 0;
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		for (i = 3; i <= n; i++)
//		{
//			ret = a + b;
//			a = b;
//			b = ret;
//
//		}
//		return ret;
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD-������������
//	ret = Fib(n);
//	printf("%d\n", ret);
//	//printf("%d\n", count);
//	return 0;
//}
//int fac2(int n)
//{
//	if (n != 1)
//	{
//		return n * fac2(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//	//��n�Ľ׳�
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac2(n);//ѭ���ķ�ʽ
//	printf("%d\n", ret);
//	return 0;
//}
//int my_strlen(char* str)
//{   
//	if (*str != '\0')
//	{
//		return 1+my_strlen(str+1);
//	}
//	else
//	{
//		return 0;
//	}
//	
//	
//}
//�Ѵ��»�С
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���ǵ�һ��Ԫ�صĵ�ַ
//	printf("len = %d\n", len);
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	//�ݹ�
//	print(num);
//	return 0;
//}
//#include <string.h>
//#include <math.h>
//#include "add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}
//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}
//������arr�Ǹ�ָ��
//int binary_search(int arr[], int k, int sz)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid+1;
//
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid-1;
//
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//	
//}
//int main()
//{
//	//���ֲ���
//	//��һ�����������в��Ҿ������
//	//����ҵ��˷�����������±꣬�Ҳ�������-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���: %d\n", ret);
//	}
//	return 0;
//}
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//	     //�ж�year�Ƿ�Ϊ����
//		if (1 == is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//����������1��������������0
//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	//��ӡ100-200֮�������
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//memset
//memory - �ڴ� set - ����
//
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//int get_max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

//void swap1(int a, int b)
//{
//	int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;
//}
//void swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap1(a, b);
//	/*swap(&a,&b);*/
//	printf("a=%d b=%d\n",a, b);
//	return 0;
//}
