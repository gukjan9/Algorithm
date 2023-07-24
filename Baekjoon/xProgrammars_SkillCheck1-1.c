#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char str[1000];

void solution1(const char* s) {
    int init = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') {
            printf("i = 0\n");
            init = 0;
            continue;
        }
        if (init == 0 || init % 2 == 0) {
            printf("even\n");
            if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
            init++;
        }
        else if (init % 2 == 1) {
            printf("odd\n");
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
            init++;
        }
    }

    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    //char* answer = (char*)malloc(sizeof(char) * sizeof(str));
    printf("%s", s);
}

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
/* char* solution(const char* s) {
    int init = 0;

    for (int i = 0; i < sizeof(str); i++) {
        if (str[i] = ' ') {
            init = 0;
            continue;
        }
        if (init == 0 || init % 2 == 0) {
            if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
            init++;
        }
        else if (init % 2 == 1) {
            if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
            init++;
        }
    }

    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * sizeof(str));
    answer = str;
    return answer;
} */

int main(void) {
    scanf("%[^\n]s", str);
    solution1(str);
    //printf("%s", solution(str));
}