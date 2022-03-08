/*Temperature of a city in Fahrenheit degrees is input through 
the keyboard. Write a program to convert this temperature 
into Centigrade degrees.*/
#include<stdio.h>
int main()
{
  float f;
  printf("enter temp in f\n");
  scanf("%f",&f);
  float c;
  c = (f-32)*5/9 ;
  printf("%f is in c",c);
  
}
