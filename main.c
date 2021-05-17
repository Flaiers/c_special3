#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int Perimeter(float x1, float y1, float x2, float y2)
{
  float p;
  p = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
  return p;
}

int main(void)
{
  int n = 10, t, i, k;
  int x[n], y[n] ,p[n], p2[n];

  for (i=0; i<n; i++)
  {
    printf("Введи точки, пример 1 1\n");
    scanf("%d %d", &x[i], &y[i]);
    printf("Точка %i =%2i,%i\n", i+1, x[i], y[i]);
  }

  t = Perimeter(x[i], y[i], x[n], y[n]);

  for (k=1; k<n; k++)
  {
    p[0]=Perimeter(x[0], y[0], x[0+1], y[0+1]);
    p[k]=Perimeter(x[1], y[1], x[k],  y[k]);
    p2[k]=Perimeter(x[k], y[k], x[n], y[n]);
  }

  for (i=0; i<(n-1); i++)
  {
    t = t + Perimeter(x[i], y[i], x[i+1, y[i+1]);
  }
    printf("Perimeter = %d\n", t);
}