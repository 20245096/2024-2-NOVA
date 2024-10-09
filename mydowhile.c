#include <stdio.h>
#include <stdlib.h>

int add2n(int n);
int mul2n(int n);
int add2nm(int n, int m);

int main(void)
{
    int mid = 0;
    do
    {
        printf("1--1부터 n까지 더하기\n");
        printf("2--1부터 n까지 곱하기\n");
        printf("3--n부터 m까지 더하기\n");
        printf("하나를 선택하시오: ");        
        scanf("%d", &mid);
    } while(mid < 1 || mid > 3);

    printf("선택된 메뉴=%d \n", mid);

    int r;
    switch(mid)
    {
        case 1:
                r = add2n(5);
                printf("1부터 5까지의 합: %d\n", r);
                break;
        case 2:
                r = mul2n(5);
                printf("1부터 5까지의 곱: %d\n", r);
                break;
        case 3:
                {
                    int n, m;
                    printf("n을 입력하시오: ");
                    scanf("%d", &n);
                    printf("m을 입력하시오: ");
                    scanf("%d", &m);
                    r = add2nm(n, m);
                    printf("%d부터 %d까지의 합: %d\n", n, m, r);
                }
                break;
        default:
                printf("오류");
                break;
    }
    return 0;
}

int add2n(int n) 
{
    int sum = 0, i;
    for (i = 1; i <= n; i++)  
        sum += i;
    return sum;
}

int mul2n(int n) 
{
    int mul = 1, i;  
    for (i = 1; i <= n; i++) 
        mul *= i;
    return mul;
}

int add2nm(int n, int m) 
{
    int sum = 0, i;
    for (i = n; i <= m; i++)  
        sum += i;
    return sum;
}