#include <stdio.h>
#include <stdlib.h>
# MONEDAS 8.h

int monedas[] = {200,100,50,20,10,5,2,1};

int solucion[MONEDAS];

int main ()
{
   int i,Q;

   printf("Ingrese el monto: "); scanf ("%d",&Q);
   //inicializacion de vector solucion
   for (i = 0; i < MONEDAS; i++)
      solucion[i] =0;
   //--
   //-- bucle voraz
   for (i = 0; i < MONEDAS; i++)
      while (Q >= monedas[i])
      {
         solucion[i]++;
         Q-= monedas[i];
      }
   //-- fin del bucle voraz
   if (Q) // !0
      printf ("No hay monedas para devolver\n");
   else
      //mostramos la solucion
      for (i = 0; i < MONEDAS; i++)
         if (solucion[i])
            printf ("%d modenas de %d\n", solucion[i], monedas[i]);
   system ("pause");
   return 0;
}
