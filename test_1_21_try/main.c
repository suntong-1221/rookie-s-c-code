#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>//system
#include <string.h>//strcmp
//�������У���ĵ�����һ���Ӻ�ػ���

int main()
{
	//�ػ�
	//shutdown -s -t 60    
	//shutdown -a
	char input[20] = { 0 };
	system("shutdown -s -t 60");//�ػ�
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)//�ж�input�зŵ��ǲ��ǡ������� - strcmp -string compare
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
//��������㽻���ɵ�
//101
//101
//011
//011
//000
//int main()
//{
	//1^1^2^3^3^4^4^5=5
	/*int arr[] = {1, 2, 3, 4, 5, 1, 2, 3, 4};*/
	//�ҳ�����
	//�������
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
	//	//ͳ��arr[i]��arr�����г����˼���
	//	int count = 0;//������
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
	//		printf("������%d\n", arr[i]);
	//		break;
	//	}
	//}
	/*return 0;
}*/
//int main()
//{
//
//	//�����������ͱ���
//	int a = 3;//011
//	int b = 5;//101
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	a = a ^ b;//110
//	b = a ^ b;//011
//	a = a ^ b;//101
//	printf("������a=%d b=%d\n", a, b);
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//INT_MAX;//2147483647
//	printf("����ǰ��a=%d b=%d\n", a, b);
//
//	//���������
//	//int - 4���ֽ� -32��bitλ -���ֵ
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//
//	printf("����ǰ��a=%d b=%d\n", a, b);
//
//	c = a;
//	a = b;
//	b = c;
//
//	printf("������a=%d b=%d\n", a, b);
//	return 0;
//}