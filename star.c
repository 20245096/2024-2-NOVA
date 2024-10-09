#include <stdio.h>

void drawRect(void) {
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 10; i++) {
            printf("*");
        }
        printf("\n");
    }
}

void drawRect2(int n, int m) {
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            printf("*");
        }
        printf("\n");
    }
}

void drawTri(void) {
    for (int i = 1; i <= 5; i++) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main(void) {
    int mid = 0;
    do {
        printf("1--5줄, 10개의 별\n");
        printf("2--n줄, m개의 별\n");
        printf("3--5줄 별 삼각형\n");
        printf("하나를 선택하시오: ");        
        scanf("%d", &mid);
    } while(mid < 1 || mid > 3);

    printf("선택된 메뉴=%d \n", mid);

    switch(mid) {
        case 1:
            drawRect();
            break;
        case 2: {
            int n, m;
            printf("줄 수(n)를 입력하시오: ");
            scanf("%d", &n);
            printf("별 수(m)를 입력하시오: ");
            scanf("%d", &m);
            drawRect2(n, m);
            break;
        }
        case 3:
            drawTri(); 
            break;
        default:
            printf("오류입니다. 다시 선택하세요.");
            break;
    }
    
    return 0;
}