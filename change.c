#include <stdio.h>

int main()
{
	int price = 0,amount = 0;
	printf("请输入总额(元)：");
	scanf("%d", &amount); 
	printf("请输入金额(元)：");
	scanf("%d", &price);
	
	int change = amount - price;
	
	printf("找您%d元。\n",change);
	 
	return 0; 
	
 } 

 
