#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int M, N;
    int a[20][20];
    int used[101] = {0};
    int i, j, num;

    scanf("%d %d", &M, &N);

    if(M<2 && N>20){
        printf("Invalid Input");
        return 0;
    }
    srand(time(NULL));

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            do{
                num = rand() % 101 + 100;
            } while(used[num - 100]);

            used[num - 100] = 1;
            a[i][j] = num;
        }
    }

    for(i = 0; i < M; i++){
        for(j = 0; j < N; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
