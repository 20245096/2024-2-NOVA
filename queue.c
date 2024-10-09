#include <stdio.h>

int main() {
    // 배열 선언 및 초기화
    char arr[2];

    // 0번째 자리에 A를 넣는다
    arr[0] = 'A';
    printf("0번째 자리에 %c를 넣는다.\n", arr[0]);

    // 1번째 자리에 B를 넣는다
    arr[1] = 'B';
    printf("1번째 자리에 %c를 넣는다.\n", arr[1]);

    // 배열 상태 출력
    printf("배열의 현재 상태: %c %c\n", arr[0], arr[1]);

    return 0;
}