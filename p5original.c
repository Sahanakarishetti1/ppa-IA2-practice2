#include<stdio.h>
int input()
{
  int x;
  printf("enter the num\n");
  scanf("%d",&x);
    return x;
}
int gcd(int a,int b)
{
  
  if(b==0)
  {
    return a;
  }
  else{
    return gcd(b,a%b);
  }
  
  
}
int output(int a,int b,int gcd)
{
  printf("%d is gcd of a %d and %d",gcd,a,b );
}
int main()
{
  int a,b,g;
  a=input();
  b=input();
  g=gcd(a,b);
  
    output(a,b,g);
  
 
}