#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
    int m, a[9], t;
    for (int i = 0; i < 9; i++) {		//将数组标记为-1；
        a[i] = -1;
    }
    scanf("%d", &m);

    if (m == 0) {		//如果输入的值为0；
        printf("a");
        return 0;
    }

    for (int i = 0; i < 9 && m; i++) {		//将m的每一位分配到数组里，且为倒序存放
        t = m % 10;
        a[i] = t;
        m /= 10;
    }

    for (int i = 8; i >= 0; i--) {		//例如数组内数字：0 1 0 0 1 1 1 1 -1 ，表示：1111001
        if (a[i] > 0) {		//位数值大于零，一定输出
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
        else if (a[i] == 0 && a[i - 1] != 0) {		//数值位为零，且下一位非零
            printf("a", 'a' + a[i]);
        }

        if (a[i] == 0 && i == 4) 		//若10001，输出一万零一
            printf("W");
    }

    return 0;
}