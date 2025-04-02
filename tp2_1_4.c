#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define  CANTIDAD_COMPUS 5


typedef struct
{
    int velocidad; //entre 1 y 3
    int anio; //entre 2015 y 2024
    int cantidad_nucleos; //entre 1 y 8
    char *tipo_cpu; //punt a cadena de caracteres
} compus;

int main()
{   
    int i, j;
    char *ptipos;
    int tipoRamdom = 1+rand()%5;
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core","Pentium"};

    srand(time(NULL));
    compus compu[CANTIDAD_COMPUS];
    ptipos = &tipos[0][0];


    

    for (i = 0; i < CANTIDAD_COMPUS; i++)
    {
        compu[i].velocidad = 1+rand()%3;
        compu[i].anio = 2015+rand()%2024;
        compu[i].cantidad_nucleos = 1+rand()%8;
        if (tipoRamdom <= 5)
        {
            for (j = 0; j < 10; i++)
            {
                compu[i].tipo_cpu = *(ptipos + (tipoRamdom * j));
            }          
        }

    }

    
    
    return 0;
}
