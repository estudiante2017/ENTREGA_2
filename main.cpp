#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{

   //Declaración de variables locales
    int MAX=9;//Cantidad máxima de los componentes del arreglo 0..20=21
    int C[MAX][MAX];//Se declara el arreglo
    int n,k,i,j;//Variables tipo contador

    //limpieza del arreglo
    for(i=0;i<=MAX;i++)
    for(j=0;j<=MAX;j++)
    {
       C[i][j]=0;
    }
    //Lectura de datos
    cout<<"\nCoeficientes binomiales o numeros combinatorios";
    cout<<"\nIngrese numero de elementos del grupo [n]: ";
    cin>>n;
    cout<<"\nIngrese cantidad de elmentos del subgrupo a crear [k]: ";
    cin>>k;

    //Se implementa el algoritmo de libro
    for(i=0;i<=n;i++) C[i][0]=1;
    for(i=1;i<=n;i++) C[i][1]=i;
    for(i=2;i<=k;i++) C[i][i]=1;
    for(i=3;i<=n;i++)
    {
       for(j=2;j<=(i-1);j++)
       {
              if (j<=k)
              { C[i][j]=C[i-1][j-1]+C[i-1][j];
                       }
        }
    }
   //Se imprime el resultado
   cout<<"\nLa cantidad de subgrupos diferentes que se obtienen es: "<<C[n][k];
   cout<<"\n\n";
   system("PAUSE");//Hace una pausa.
   return EXIT_SUCCESS;
}

