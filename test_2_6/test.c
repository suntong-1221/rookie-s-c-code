#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//ָ������ - ����
//����ָ�� - ָ��

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;
	/*int* pa = &a;
	int* pb = &b;
	int* pb = &c;*/
	//int arr[10];
	int* arr2[3] = {&a,&b,&c};
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ",*(arr2[i]));
	}
	return 0;
}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	//int*** pppa = &ppa;
//	printf("%d\n", **ppa);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p+i));
//		//printf("%p ===== %p\n",p+i, &arr[i]);
//
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n",arr);//��Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr);
//	//1.&arr - &������������Ԫ�ص�ַ-��������ʾ��������-&������ȡ��������������ĵ�ַ
//	//2.sizeof(arr) - sizeof(������) - ��������ʾ���������� - sizeof(������)���������������Ĵ�С
//	return 0;
//}
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	//stren - ���ַ�������
//	//�ݹ� - ģ��ʵ��strlen - �������ķ�ʽ1�� �ݹ�ķ�ʽ2
//    //
//	char arr[] = "bit";
//	
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int main()
//{
//	char ch[5] = { 0 };
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n",&arr[0] - &arr[9]);
//	printf("%d\n", &arr[9] - &ch[0]);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p+=2;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;
//	*pa = 10;
//	/*if (pa != NULL)
//	{
//
//	}*/
//	return 0;
//	//int a = 10;
//	//int* pa = &a;
//	//int* p = NULL;//������ʼ��ָ��ģ���ָ�븳ֵ
//	//return 0;
//}
//int* test()
//{
//	/*int a = 10;
//	return &a;*/
//	/*int arr[10] = { 0 };
//	return arr;*/
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}
//int main()
//{
//	//δ��ʼ����ָ�����
//	int* p;
//	*p = 20;
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}
//	return 0;
//}
//int main()
//{
//	int a; //�ֲ���������ʼ����Ĭ�������ֵ
//	int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ
//	*p = 20;
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;//������-��Ԫ�ص�ַ
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//    char* pc = &a;
//	*pc = 0;
//	
//	//printf("%p\n", pa);
//	//printf("%p\n", pc);
//	//printf("%d\n", sizeof(char*));
//	//printf("%d\n", sizeof(short*));
//	//printf("%d\n", sizeof(int*));
//	//printf("%d\n", sizeof(double*));
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}