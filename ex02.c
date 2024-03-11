#include <stdio.h>

int main ()
{
  int a = 1;
  int b = 300;
  int c = 38;
  int d = 47;
  float f = 4.68;
  double g = 4.8888888888888;
  printf("%d\n%d\n%.15f\n", a + b, c * d, f / g);

  int z;
  int x;
  int v;
  int n;
  printf("ïnserisci quattro numeri\n");
  scanf("%d %d %d %d", &z, &x, &v, &n);
  printf("%d\n %d\n", z + x, v - n);
}