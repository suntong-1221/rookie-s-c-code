#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int a = 5 / 2;
//	printf("a = %d", a);
//	return 0;
//}
//
//int main()
//{
//	int a = 16;
//	
//	int b = a >> 1;//������λ
//
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//
//	//�����Ķ����Ʊ�ʾ�У�ԭ�롢���롢����
//	//�洢���ڴ���ǲ���
//	//100000000000000000000001 - ԭ��
//	//111111111111111111111110 - ����
//	//111111111111111111111111 - ����
//	//
//	int b = a >> 1;//������λ
//	printf("%d\n", b);
//	return 0;
//}

//
//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}
//
//int main()
//{ 
//	//& - ����������
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	//011
//	//101
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//
//	//�Ӽ���
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	a = a + 2;
//	a += 2;
//	a = a >> 1;
//	a >>= 1;
//	a = a & 1;
//	a &= 1;
//
//	return 0;
//}
//

//int main()
//{
//	int a = 11;
//	//1011
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a & (~(1 << 2));
//	printf("%d\n", a);
//	/*int a = 0;
//	printf("%d\n", ~a);*/
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//printf("%d\n", ++a);//ǰ�üӼ�
//	printf("%d\n", a++);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	b=(a > 5 ? 3 :  -3);
//	printf("%d\n", b);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	struct Stu s1 = { "����",20,"2019010305" };
//	struct Stu* ps = &s1;
//
//	printf("%s\n", ps->name);
//	/*printf("%s\n", (*ps).name);
//	printf("%d\n", (*ps).age);*/
//	//printf("%s\n", s1.name);
//	//printf("%d\n", s1.age);
//	//printf("%s\n", s1.id);
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//	return 0;
//
//}

int main()
{
	int a = 10;
	int b = 20;
	int c = b + a + 3;

	return 0;
}