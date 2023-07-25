#include <stdio.h>
#define SIZE 1000000

int arr[SIZE];
int temp1, temp2 = 0;

int main(void){
    int N;
    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        int x;
        scanf("%d", &x);
        arr[i] = x;
    }

    for(int i = 0; i < N; i++){
        int cnt = 0;
        for(int j = 0; j < N; j++){
            if(i != j){
                if(arr[i] > arr[j]){
                    temp1 = arr[j];
                    if(temp1 != temp2){
                        cnt++;
                        temp2 = temp1;
                    }
                }
            }
        }
        printf("%d ", cnt);
        temp1 = 0;
        temp2 = 0;
    }
}