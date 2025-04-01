#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main()
{
    int i;
    double *p;
    double vt[N];
    srand(time(NULL));

    p = &vt[0];
    

    for (i = 0; i < N; i++)
    {   
        *(p+1)= 1+rand()%100;
        printf("%.2f \n", *(p+1));
    }
    
    
    return 0;
}

