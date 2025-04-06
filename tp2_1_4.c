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

void listarPCs(compus pcs[], int cantidad);
void mostrarMasVieja(compus pcs[], int cantidad);

int main()
{   
    int i, j;
    char *ptipos;
    int tipoRamdom;
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core","Pentium"};

    srand(time(NULL));
    compus compu[CANTIDAD_COMPUS];
    ptipos = &tipos[0][0];


    

    for (i = 0; i < CANTIDAD_COMPUS; i++)
    {
        tipoRamdom = rand()%5;
        compu[i].velocidad = 1+rand()%3;
        compu[i].anio = 2015+rand()%10;
        compu[i].cantidad_nucleos = 1+rand()%8;
        compu[i].tipo_cpu = &tipos[tipoRamdom][0];

    }

    listarPCs(compu, 5);
    
    mostrarMasVieja(compu, 5);
    
    return 0;
}

void listarPCs(compus pcs[], int cantidad){
    for (int i = 0; i < cantidad; i++)
    {
        printf("\n -----------------------------------");
        printf("\n Computadora %d", i+1);
        printf("\n  -------- DATOS --------");
        printf("\n   #Velocidad: %d", pcs[i].velocidad);
        printf("\n   #Anio: %d", pcs[i].anio);
        printf("\n   #Cantidad de nucleos: %d", pcs[i].cantidad_nucleos);
        printf("\n #Tipo CPU: %s", pcs[i].tipo_cpu);
        printf("\n");
    }
    
}

void mostrarMasVieja(compus pcs[], int cantidad){
    //Recibe el arreglo de PCs y la cantidad de elementos.
    //Busca la PC con el menor año de fabricación (la más vieja).
    //Muestra por pantalla las características de la PC más vieja encontrada. Si hay varias con el mismo año más antiguo, puedes mostrar la primera que encuentres.

    int anioViejo = 7000;
    int compuVieja = 0;

    for (int i = 0; i < cantidad; i++)
    {    

        if (pcs[i].anio < anioViejo)
        {
            anioViejo = pcs[i].anio;
            compuVieja = i;
        }
    }

    printf("\n -----------------------------------");
    printf("\n Computadora %d", compuVieja+1);
    printf("\n  -------- DATOS --------");  
    printf("\n   #Velocidad: %d", pcs[compuVieja].velocidad);
    printf("\n   #Anio: %d", pcs[compuVieja].anio);
    printf("\n   #Cantidad de nucleos: %d", pcs[compuVieja].cantidad_nucleos);
    printf("\n #Tipo CPU: %s", pcs[compuVieja].tipo_cpu);
    printf("\n");

    


}