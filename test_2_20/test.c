#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	int(*p)[10] = &arr;//ȡ������ĵ�ַ
	
	int (*pfArr[4])(int, int);//pfArr��һ������-����ָ�������

	int (*(*ppfArr)[4])(int, int) = &pfArr;
	//ppfArr ��һ������ָ�룬ָ��ָ���������4��Ԫ��
	//ָ�������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int, int)
	return 0;
}

//void menu()
//{
//	printf("**************************************\n");
//	printf("***      1. add       2.sub        ***\n");
//	printf("***      1. mul       2.div        ***\n");
//	printf("***            0. exit             ***\n");
//	printf("**************************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//


//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*pfArr[5])(int, int) = {0,Add,Sub,Mul,Div};
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input ==0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//		
//	} while (input);
//	return 0;
//}

//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//
//}

//������
//int main()
//{
//	int input = 0;
//	
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//			
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}