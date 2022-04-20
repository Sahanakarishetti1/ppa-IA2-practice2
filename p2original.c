#include<stdio.h>
int input_side()
{
  int x;
  printf("enter the side of triangle\n");
  scanf("%d",&x);
  return x;
}
int check_scalene(int a,int b,int c)
{
  if(a !=b &&b!=c && c!=a)
  {
    return 0;
  }
  else
  {
    return 1;
  }
  
  
}
void  output(int a,int b,int c,int x)
{
 if(x==0)
  {
    printf("the triangle is scalene");
    
  }
  else
  {
    printf("the triangle is not scalene");
  }
 
}
int main()
{
  
 
   int a= input_side();
   int b= input_side();
   int c= input_side();
   int x=check_scalene(a,b,c);
  
    output(a,b,c,x);
   return 0;

}