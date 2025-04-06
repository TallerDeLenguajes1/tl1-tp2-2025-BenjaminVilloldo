#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct compu
{
    int velocidad;
    int anio;
    int cantidad_nucleos;
    char *tipo_cpu;
};

// funciones
void listarPC(struct compu pcs[], int cantidad);
void mostrarMasVieja(struct compu pcs[], int cantidad);
void mostrarMasVeloz(struct compu pcs[], int cantidad);


int main(){
srand(time(NULL));
char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core",
    "Pentium"};
    struct compu pcs[5];

// generamos los datos aleatoriamente
for (int i = 0; i < 5; i++)
{
    pcs[i].velocidad = rand()% 3 + 1;
    pcs[i].anio = rand()% 10 + 2015;
    pcs[i].cantidad_nucleos = rand() % 8 + 1;
    pcs[i].tipo_cpu= tipos[rand() % 6];
}
 printf("\n===LISTA DE PCs===\n");
 listarPCs(pcs,5);
 printf("\n===PC MAS VIEJA=== \n");
 mostrarMasVieja(pcs,5);
 printf("\n===PC MAS RAPIDA=== \n");
 mostrarMasVeloz(pcs,5);

    return 0;
}

