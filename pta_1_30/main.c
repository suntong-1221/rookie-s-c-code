#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int f(int n);

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", f(n));

    return 0;
}

/* 你的代码将被嵌在这里 */
int f(int n)
{
    if (n >= 2)
    {
        return f(n - 1) + f(n - 2);
    }
    else if (n == 1)
    {
        return 1;
    }
    else if(n == 0)
    {
        return 0;
    }

}
//#include <stdio.h>
//
//double calc_pow(double x, int n);
//
//int main()
//{
//    double x;
//    int n;
//
//    scanf("%lf %d", &x, &n);
//    printf("%.0f\n", calc_pow(x, n));
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//double calc_pow(double x, int n)
//{
//    if (n > 1)
//        return x * calc_pow(x, n - 1);
//    else
//        return x;
//
//}
//#include <stdio.h>
//
//void printdigits(int n);
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//    printdigits(n);
//
//    return 0;
//}
//
///* 你的代码将被嵌在这里 */
//void printdigits(int n)
//{
//
//    //12345
//    if (n > 9)
//    {
//        printdigits(n / 10);
//        printf("%d\n", n % 10);
//    }
//    else
//        printf("%d\n", n);
//
//       
//       
//}
//
//#include <stdio.h>
//
//int sum(int n)
//{
//	if (n == 1)
//	{
//		return 1;
//	}
//	else if (n > 1)
//	{
//		return n+sum(n - 1);
//	}
//	else
//	{
//		return 0;
//	}
//	
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", sum(n));
//	return 0;
//}
//习题2-1 求整数均值
//本题要求编写程序，计算4个整数的和与平均值。题目保证输入与输出均在整型范围内。
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	int Sum = a + b + c + d;
//	double Aver = 0.0;
//	Aver = Sum / 4.0;
//	printf("Sum = %d; Average = %.1f", Sum, Aver);
//	return 0;
//}
//
//int main()
//{
//	int kwh = 0;
//	double d = 0.0;
//	scanf("%d", &kwh);
//	if ((kwh <= 50) && (kwh > 0))
//	{
//		d = 0.53 * kwh;
//		printf("cost = %.2f\n", d);
//	}
//	else if(kwh>50)
//	{
//		d = 0.53 * 50+(kwh-50)*0.58;
//		printf("cost = %.2f\n", d);
//	}
//	else
//	{
//		printf("Invalid Value!\n");
//	}
//	return 0;
//}