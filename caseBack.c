#include <stdio.h>

void caseconv(char in[], char out[]) {
    int i = 0;
    while (in[i] != '\0') {
        if (in[i] >= 'a' && in[i] <= 'z') {
            out[i] = in[i] - 'a' + 'A'; 
        } else if (in[i] >= 'A' && in[i] <= 'Z') {
            out[i] = in[i] - 'A' + 'a'; 
        } else {
            out[i] = in[i]; 
        }
        i++;
    }
    out[i] = '\0'; 
}

void backward(char in[], char out[]) {
    int len = 0;
    while (in[len] != '\0') {
        len++;
    }

    for (int i = 0; i < len; i++) {
        out[i] = in[len - 1 - i];
    }
    out[len] = '\0'; 
}

int main() {
    char input[100];     
    char caseConv[100];     
    char reversed[100];

    printf("문자열을 입력하세요: ");
    scanf("%s", input); 

    caseconv(input, caseConv);
    backward(caseConv, reversed);

    printf("거꾸로 바뀐 문자열: %s\n", reversed);

    return 0;
}