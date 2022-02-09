#include<stdio.h>
void input(float *base,float *height)
{
  
  printf("enter the base  of a triangle\n");
  scanf("%f",base);
  printf("enter the height of triangle\n");
  scanf("%f",height);
  return ;
}
void find_area(float base,float height,float *area)
{
  *area=(base*height)/2;
  return;
}
void output(float base,float height,float area)
{
  printf("%f %f is %f",base,height,area);
}
int main()
{
  float base,height,area;
  input(&base,&height);
  find_area(base,height,&area);
  output(base,height,area);
  return 0;

}
