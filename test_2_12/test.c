#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<Windows.h>

int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);

	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}
//int main()
//{
//	double d = 1E10;
//	printf("%lf\n", d);
//	return 0;
//}

//int main()
//{
//	char a[]="bit";
//	/*int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//
//	}*/
//	printf("%d", sizeof(a)/sizeof(a[0]));
//
//	return 0;
//}
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(100);
//	}
//
//	return 0;
//}
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	//-128
//	//10000000 00000000 00000000 10000000 
//	//11111111 11111111 11111111 01111111
//	//11111111 11111111 11111111 10000000
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	return 0;
//}
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//	/*char* p = (char*)&a;
//	return *p;*/
//	/*if (*p == 1)
//		return 1;
//	else
//		return 0;*/
//}
//int main()
//{
//	//写一段代码告诉我们当前机器得字节序是什么
//	//返回1，小端
//	//返回2，大端
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//int main()
//{
//	//写一段代码告诉我们当前机器得字节序是什么
//
//	int a =1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;     //4
//	float f = 10.0; //4
//
//	short a = 10;
//	short int a = 10;
//
//	return 0;
//}