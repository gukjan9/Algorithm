#include <stdio.h>
#define SIZE 300
#define MAX(a,b) (a>b ? a:b)

int stairs[SIZE];

int main(void){
    int cnt;                // 계단 수
    int flag = 0, num = 0;
    scanf("%d", &cnt);

    for(int i = 0; i < cnt; i++){
        scanf("%d", &stairs[i]);
    }

    while(num == cnt-2 || num == cnt-1){
        
    }
}