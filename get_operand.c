#include <stdio.h>
#include "syh.h"

int add(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int mul(int x, int y) {
    return x * y;
}

float div(int x, int y) {
    return x / y;
}

void get_operand(int *a, int *b) {
    int num;

    printf("첫 번째 정수를 입력하세요: ");
    scanf("%d", &num);
    *a = num;

    printf("두 번째 정수를 입력하세요: ");
    scanf("%d", &num);
    *b = num;
}

int select_menu() {
    int i;
    do {
        printf("아래의 메뉴 중 원하는 메뉴 번호를 하나 선택하세요. \n");
        printf("1. 덧셈\n");
        printf("2. 뺄셈\n");
        printf("3. 곱셈\n");
        printf("4. 나눗셈\n");
        printf("번호 하나를 선택하세요: \n");
        scanf("%d", &i);
    } while(i < 1 || i > 4);
    return i;
}

float arithm_op(int x, int y, int i) {
    switch(i) {
        case 1:
            return (float)add(x, y);

        case 2:
            return (float)sub(x, y);

        case 3:
            return (float)mul(x, y);

        case 4:
            return div(x, y);

        default:
            return 0; 
    }
}

void print_result(int x, int y, int i, float result) {
    switch(i) {
        case 1:
            printf("%d + %d = %f\n", x, y, result);
            break;
        case 2:
            printf("%d - %d = %f\n", x, y, result);
            break;
        case 3:
            printf("%d * %d = %f\n", x, y, result);
            break;
        case 4:
            printf("%d / %d = %f\n", x, y, result);
            break;
        default:
            printf("오류입니다.\n");
            break;
    }
}

int main(void) {
    int x, y, i;
    float result;

    i = select_menu();
    get_operand(&x, &y);

    result = arithm_op(x, y, i);
    print_result(x, y, i, result);

    return 0;
}