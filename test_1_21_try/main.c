#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>//system
#include <string.h>//strcmp
//程序运行，你的电脑在一分钟后关机，

int main()
{
	//关机
	//shutdown -s -t 60    
	//shutdown -a
	char input[20] = { 0 };
	system("shutdown -s -t 60");//关机
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)//判断input中放的是不是“我是猪” - strcmp -string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
//3^3=0
//5^5=0
//a^a=0
//0^5=5
//0^3=3
//0^a=a
//3^5^3=5
//3^3^5=5
//异或是满足交换律的
//101
//101
//011
//011
//000
//int main()
//{
	//1^1^2^3^3^4^4^5=5
	/*int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 4};*/
	//找出单身狗
	//暴力求解
	/*int i = 0;
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		ret = ret ^ arr[i];
	}
	printf("%d\n", ret);*/
	//for (i = 0; i < sz; i++)
	//{
	//	//统计arr[i]在arr数组中出现了几次
	//	int count = 0;//计数器
	//	int j = 0;
	//	for (j = 0; j < sz; j++)
	//	{
	//		if (arr[i] == arr[j])
	//		{
	//			count++;
	//		}
	//	}
	//	if (count == 1)
	//	{
	//		printf("单身狗：%d\n", arr[i]);
	//		break;
	//	}
	//}
	/*return 0;
}*/
//int main()
//{
//
//	//交换两个整型变量
//	int a = 3;//011
//	int b = 5;//101
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a ^ b;//110
//	b = a ^ b;//011
//	a = a ^ b;//101
//	printf("交换后：a=%d b=%d\n", a, b);
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//INT_MAX;//2147483647
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	//溢出的问题
//	//int - 4个字节 -32个bit位 -最大值
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//
//	printf("交换前：a=%d b=%d\n", a, b);
//
//	c = a;
//	a = b;
//	b = c;
//
//	printf("交换后：a=%d b=%d\n", a, b);
//	return 0;
//}