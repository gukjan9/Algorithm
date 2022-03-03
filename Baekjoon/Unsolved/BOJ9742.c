#include <stdio.h>
#include <string.h>
#define LENGTH 10
#define SIZE 3628800

char word[LENGTH];
char new_word[LENGTH];
//int P_arr[SIZE];

int main(void){
    int num;                        // 입력받는 숫자
    scanf("%s %d", word, &num);

    int len = strlen(word);         // 문자열 길이
    
    int cnt = 1;
    for(int i = len; i > 1; i--){
        cnt *= i;                   // 총 경우의 수
    }

    for(int i = 0; i < len; i++){   // word 복사
        new_word[i] = word[i];
    }
    
    // int second = num - (first * (cnt / len));     // 2번째 자리 찾기

    if(len > 1){
        int first = num / (cnt / len);                  // 1번째 자리 찾기
        int temp = word[first];
        new_word[0] = word[first];
        new_word[first] = word[0];

        if(len > 2){
            for(int i = 0; i < cnt-1; i++){
                
            }
        }
        
    }
}