#include <stdio.h>

int main()
{
	int price = 0,amount = 0;
	printf("�������ܶ�(Ԫ)��");
	scanf("%d", &amount); 
	printf("��������(Ԫ)��");
	scanf("%d", &price);
	
	int change = amount - price;
	
	printf("����%dԪ��\n",change);
	 
	return 0; 
	
 } 

 
