#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
    int m, a[9], t;
    for (int i = 0; i < 9; i++) {		//��������Ϊ-1��
        a[i] = -1;
    }
    scanf("%d", &m);

    if (m == 0) {		//��������ֵΪ0��
        printf("a");
        return 0;
    }

    for (int i = 0; i < 9 && m; i++) {		//��m��ÿһλ���䵽�������Ϊ������
        t = m % 10;
        a[i] = t;
        m /= 10;
    }

    for (int i = 8; i >= 0; i--) {		//�������������֣�0 1 0 0 1 1 1 1 -1 ����ʾ��1111001
        if (a[i] > 0) {		//λ��ֵ�����㣬һ�����
            printf("%c", 'a' + a[i]);
            switch (i) {
            case 8:printf("Y"); break;
            case 7:printf("Q"); break;
            case 6:printf("B"); break;
            case 5:printf("S"); break;
            case 4:printf("W"); break;
            case 3:printf("Q"); break;
            case 2:printf("B"); break;
            case 1:printf("S"); break;
            }
        }
        else if (a[i] == 0 && a[i - 1] != 0) {		//��ֵλΪ�㣬����һλ����
            printf("a", 'a' + a[i]);
        }

        if (a[i] == 0 && i == 4) 		//��10001�����һ����һ
            printf("W");
    }

    return 0;
}