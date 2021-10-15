#include <stdio.h>

#define N 3
#define Max 30

void pide(arregloClave, arregloNombre, arregloEstSuel);
int masAlto(arregloEstSuel[1][N]);
ordenaPorSueldo(arregloEstSuel[1][N]);

int main()
{
  char arregloClave[Max][N];
  char arregloNombre[Max][N];
  float arregloEstSuel[1][N];
  int mA;

  pide(arregloClave, arregloNombre, arregloEstSuel);
  mA = masAlto(arregloEstSuel);
  ordenaPorSueldo(arregloEstSuel);
}

void pide(arregloClave[Max][N], arregloNombre[Max][N], arregloEstSuel[1][N])
{
    int i;

    for(i = 0; i<N; i++)
    {
        printf("\n Dame la clave del empleado %d: ", i);
        scanf("%s", &arregloClave[][i];

        printf("\n Dame el nombre del empleado %d: ", i);
        scanf("%s", &arregloNombre[][i]);

        printf("\n Dame la estatura del empleado %d: ", i);
        scanf("%f", &arregloEstSuel[0][i]);

        printf("\n Dame el sueldo del empleado %d: ", i);
        scanf("%f", &arregloEstSuel[1][i]);
    }
}

int masAlto(arregloEstSuel[1][N])
{
    int i;
    int mA=0;
    int valorDemA=arregloEstSuel[0][0];

    for{i=1; i<N; i++}
    {
        if(valorDemA<arregloEstSuel[0][i])
        {
            valorDemA=arregloEstSuel[0][i];
            mA = i;
        }
    }

    return mA;
}

ordenaPorSueldo(arregloEstSuel[1][N])
{
    int i;
    int pos;
    int aux;

    for(i=N; i<1; i++)
    {
        for(pos= N-1; pos<0; pos ++)
        {
            if(arreglo[1][pos]< arreglo[1][i])
            {
                aux= arreglo[1][pos];
                arreglo[1][pos] = arreglo[1][i];
                arreglo[1][i]=aux;
            }
        }
    }
}
