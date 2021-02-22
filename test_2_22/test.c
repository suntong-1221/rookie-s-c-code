#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//ʵ��ð�ݺ����ĳ���Ա�����Ƿ�֪��δ��������������͡���֪��
//�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����


void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width,int (*cmp)(void* e1, void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//ÿһ�˱ȽϵĶ���
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//����Ԫ�صıȽ�
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
			{
				//����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);

			}
		}
	}
}

int cmp_int(const void* e1, const void* e2)
{
	//�Ƚ���������ֵ��
	return *(int*)e1 - *(int*)e2;
}
void test4()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ����������
	//��Ӧ��֪����αȽϴ����������е�Ԫ��
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
}

int main()
{
	test4();
	return 0;
}


//
//void test5()
//{
//	struct Stu s[3] = { {"zhangsan",20} {"lisi",30} {"wangwu",10} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};



//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//
//	void* p = &a;
//
//	return 0;
//}
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		
//	}
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};

//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������ֵ��
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//struct Stu s[3] = { {"zhangsan",20} {"lisi",30} {"wangwu",10} };
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	//bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	//ָ������
//
//	int* arr[10];
//	//����ָ��
//	int* (*pa)[10] = &arr;
//    //����ָ��
//	int (*pAdd)(int, int) = Add;//&Add
//	//int sum = (*pAdd)(1, 2);
//	int sum = pAdd(1, 2);
//	printf("%d\n", sum);
//    //����ָ�������
//	int (*pArr[5])(int, int)
//		//ָ����ָ�������ָ��
//    int (*(*ppArr)[5])(int, int) = & pArr;
//	return 0;
//}