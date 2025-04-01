#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5
#define M 7

int main()
{
    int i,j;
    int mt[N][M];
    int *pmt;
    pmt=&mt[0][0];
    srand(time(NULL));

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            *(pmt + (i * M + j)) = 1+rand()%100;

            printf("%3d", *(pmt + (i * M + j)));

            /* mt[i][j] = 1+rand()%100;
            printf("%3d", mt[i][j]); */
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            printf("%3d", mt[i][j]); 
        }
        printf("\n");
    }
    
    
    return 0;
}
