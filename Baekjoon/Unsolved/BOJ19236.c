#include <stdio.h>

int fish[4][4];
int dir[4][4];

int total = 0;

int sharkMove();
int fishMove();
int dirMove();

typedef struct coord{
    int x;
    int y;
} Coord;

int main(void){
    int a, b;

    for(int i = 0; i < 4; i++){
        for(int j = 0; i < 4; j++){
            scanf("%d %d", &fish[i][j], &dir[i][j]);
        }
    }


}

int fishMove(){
    int cnt = 0;
    int num = 1;

    while(cnt < 15){
        for(int i = 0; i < 4; i++){
            for(int j = 0; i < 4; j++){
                if(fish[i][j] == num++){
                    Coord f;
                    f.x = i;
                    f.y = j;
                }
            }
        }
    }
}

int sharkMove(){

}

int dirMove(int num, Coord f){
    switch(num){
        case 0 : f.y--; break;
        case 1 : f.x--; f.y--; break;
        case 2 : f.x--; break;
        case 3 : f.x--; f.y++;
        case 4 : f.y++; break;
        case 5 : f.x++; f.y++; break;
        case 6 : f.x++; break;
        case 7 : f.x++; f.y--; break;
    }
}