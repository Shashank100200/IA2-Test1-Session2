#include<stdio.h>

struct _triangle
{
  float base, altitude, area;
} ;

typedef struct _triangle Triangle;

Triangle input_triangle()
{
  Triangle b;
  printf("Enter the base, altitude of a triangle:\n");
  scanf("%f%f", &b.base, &b.altitude);
  return b;
}

void find_area(Triangle *t)
{
  t->area = 0.5 * t->base * t->altitude;
}

void output(Triangle t)
{
  printf("The area of triangle with base = %f and altitude = %f is %f\n", t.base, t.altitude, t.area);
}

int main()
{
  Triangle x;
  
  x = input_triangle();
  find_area(&x);
  output(x);
  return 0;
}