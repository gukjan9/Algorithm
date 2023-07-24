#include <stdio.h>

int wTotal = 0;
int vTotal = 0;

typedef struct bag{
    int W;
    int V;
} Bag;

int main(void){
    int N, K;
    scanf("%d %d", &N, &K);

    Bag arr[N];

    for(int i = 0; i < N; i++){
        scanf("%d %d", &arr[i].W, &arr[i].V);
    }

    for(int i = 0; i < N; i++){
        if(arr[i].W == 7) vTotal = arr[i].V;
        for(int j = 0; j < N-1+i; j++){
            wTotal += arr[i+j].W;
            if(wTotal >= 7) vTotal += arr[i+j].V;

        }
    }
}