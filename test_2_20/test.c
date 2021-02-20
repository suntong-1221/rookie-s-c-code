#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int arr[10] = { 0 };
	int(*p)[10] = &arr;//取出数组的地址
	
	int (*pfArr[4])(int, int);//pfArr是一个数组-函数指针的数组

	int (*(*ppfArr)[4])(int, int) = &pfArr;
	//ppfArr 是一个数组指针，指针指向的数组有4个元素
	//指向数组的每个元素的类型是一个函数指针 int(*)(int, int)
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input ==0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//		
//	} while (input);
//	return 0;
//}

//void Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//
//}

//计算器
//int main()
//{
//	int input = 0;
//	
//
//	do
//	{
//		menu();
//		printf("请选择:>");
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
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}