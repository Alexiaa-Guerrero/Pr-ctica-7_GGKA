/*Karla Alexia Guerrero González
Ejercicio 4 Calculadora con funciones
Práctica 7 27/09/24*/

#include <stdio.h>
#include <math.h>

int resp;

int suma(int a, int b)
{
  resp = a + b;
  return(resp);
}

int suma2(int, a int b)
{
  return(a + b);
}

int resta(int a, int b)
{
  resp = a - b;
  return(resp);
}

int mult(int a, int b)
{
  resp = a * b;
  return(resp);
}
int div(int a, int b)
{
  resp = pow(a,b);
  return(resp);
}

int main()
{
  int a = 0; b = 0;
  int respuesta;
  printf("Dime qué operación deseas realizar:\n");
  printf("1.- Suma\n");
  printf("2.- Resta\n");
  printf("3.- Multiplicación\n");
  printf("4.- División\n");
  scanf("%d", &option);

  switch (option)
        {
          default:
              respuesta = 0;
              break;
          case 1:
              respuesta = suma(a,b);
              break;
          case 2:
              respuesta = resta(a,b);
              break;
          case 3:
              respuesta = mult(a,b);
              break;
          case 4:
              respuesta = div(a,b);
              break;
          case 5:
              respuesta = exp(a,b);
              break;

        }

        printf("El resultado de la operación es: %d\n", respuesta);
  return 0;
}

