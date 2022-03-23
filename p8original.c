#include<stdio.h>
#include <math.h>
struct _triangle
{
float base,altitude,area;
};
typedef  struct  _triangle Triangle;
int input_n()
{
  int n;
  printf("enter the no of triangles\n");
  scanf("%d",&n);
  return n;
}
Triangle input_triangle()
{
  Triangle t;
  printf("enter the base and altitude of triangle\n");
  scanf("%f %f",&t.base,&t.altitude);
  return t;
}
void input_n_triangles(int n,Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
  t[n]=input_triangle();
}
  }
void find_area(Triangle *t)
{
  t->area=0.5 * t->base * t-> altitude;
}
void find_areas_n(int n,Triangle t[n])
{
  for(i=0;i<n;i++)
    {
  t[n]=find_area(t);
      }
}
