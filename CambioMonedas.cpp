#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int MAX_MONEDAS = 10;//Cantidad maxima de unidades de monedas 
    int monedas[] = {1000,500,200,100,50,20,10,5,2,1};
    int solucion[MAX_MONEDAS];
    int i, cambio;
    //Lectura de datos
    cout<<"\nEl problema del cambio"; 
    cout<<"\nIngrese valor para cambiar en monedas: "; 
    cin>>cambio;
    //Limpieza del vector
    for (i = 0; i < MAX_MONEDAS; i++)
     {
      solucion[i] =0;
      }

   for (i = 0; i < MAX_MONEDAS; i++)
   {
      while (cambio >= monedas[i])
      {//Mientras que el valor del cambio sea mayor que el contenido de la
      //i-esima posicion del vector monedas
         solucion[i]++;//se incrementa el contenido de la iesima posicion del vector solucion
         cambio-= monedas[i];//El valor del cambio se le resta el valor del contenido de iesima posicion del vector monedas
      }//Fin ciclo while      
   }//Fin ciclo for 
   
   if (cambio)
    { // Si es cero
     cout<<"\nNo hay monedas para devolver.";
     }//fin if
   else 
    {   
       //Se imprime la solucion
      cout<<"\nEl cambio en monedas es:";  
      for (i = 0; i < MAX_MONEDAS; i++)
       {
         if (solucion[i])
          {
            cout<<"\n"<<solucion[i]<<" monedas de "<< monedas[i];
            } //Fin if
        }//Fin ciclo for     
   }//Fin else
   
   cout<<"\n\n";
   system("PAUSE");//Hace una pausa.
   return EXIT_SUCCESS;
}

