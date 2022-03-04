#include<stdio.h>
int input_number()
{
  int x;
  printf("enter the num\n");
  scanf("%d",&x);
  return x;
}
int is_composite(int n)
{
 if(n<1)
 printf("num neede to be greater than 1");
 else if(n==1)
 printf("1 is neither a composite nor prime");
 else
 {
   int divisor;
   for(divisor=2;divisor<=(n/2); divisor++)
   {
     if((n%divisor)==0)
     printf("n is nt a prime no\n");
   }
 }
}
void output()
{
  
}