#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <assert.h>

#include <stdio.h>


int main()
{
	int n = 0;
	int s = 0;
	scanf("%d", &n);
	if (n < 0)
	{
		s = -1;
	}
	else if (n == 0)
	{
		s = 0;
	}
	else
	{
		s = 1;
	}
	printf("sign(%d) = %d\n", n, s);
	return 0;
}
//void pyramid(int n)
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (k = 1; k <= n-i; k++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d ", i);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int n;
//
//	scanf("%d", &n);
//	pyramid(n);
//
//	return 0;
//}

/* 你的代码将被嵌在这里 */
//#include <stdio.h>
//
//int sum(int m, int n)
//{
//	int sum = 0;
//	int i = 0;
//	for (i=m; i <= n; i++)
//	{
//		sum += i;
//	}
//	return sum;
//}
//
//int main()
//{
//	int m, n;
//
//	scanf("%d %d", &m, &n);
//	printf("sum = %d\n", sum(m, n));
//
//	return 0;
//}

/* 你的代码将被嵌在这里 */

//int my_len(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//保证指针的有效性
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	int* p = &num;
//
//	*p = 20;
//	printf("%d\n", num);
//	return 0;
//
//}
	//char* my_strcpy(char* dest, const char* src)
	//{
	//char* ret = dest;
	//	assert(dest != NULL);
	//	assert(src != NULL);//断言
	//	while (*dest++ = *src++)
	//	{
	//		;
	//	}
	//   return ret;
    //   }
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//			{
//				;
//
//			}
//	}
//	
	/*while(*dest != '\0')
	{
		*dest++ = *src++;

	}*/
	//*dest = *src;

//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "################";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//void test2()
//{
//	printf("eheh\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	printf("hehe\n");
//	int a = 20;
//	int b = 10;
//	int c = Add(a, b);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = Add(a, b);
//	return 0;
//}
//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Printf1(Stu tmp)
//{
//	printf("name: %s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele: %s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
//
//void Printf2(Stu* ps)
//{
//	printf("name: %s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tele: %s\n", ps->tele);
//	printf("sex: %s\n", ps->sex);
//}
//int main()
//{
//	struct Stu s1 = {"张三",20,"15680552560","男"};//局部结构体变量
//	Printf1(s1);
//	Printf2(&s1);
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello\n";
//	struct T t = { "hehe", {100,'w',"hello ",3.13}, arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

//struct 结构体关键字  Stu - 结构体标签  struct Stu - 结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1 s2 s3是三个全局结构体变量

//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//int main()
//{
//	struct Stu s1 = {"张三",20,"15680552560","男"};//局部结构体变量
//	Stu s2 = { "李四",20,"16788881288","保密" };
//	return 0;
//}
