/*Temperature of a city in Fahrenheit degrees is input through 
the keyboard. Write a program to convert this temperature 
into Centigrade degrees.*/
#include<stdio.h>
int main( ) 
{ 
 int a,b,c,d,e;
  printf("enter 5 digit no\n");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  int sum=a+b+c+d+e;
  printf("%d is the sum\n",sum);
  return 0;
  
}