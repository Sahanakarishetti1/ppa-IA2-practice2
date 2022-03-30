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
  int  check_scalene=(a !=b &&b!=c && c!=a);
   
}
void  output(int a,int b,int c,int scalene)
{
  if(a !=b && b!=c&& c!=a)
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
   check_scalene(a,b,c);
  int scalene;
    output(a,b,c,scalene);
   return 0;

}