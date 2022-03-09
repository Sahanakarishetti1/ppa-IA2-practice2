#include<stdio.h>
int input_number()
{
  int num;
  printf("enter the num\n");
  scanf("%d",&num);
  return num;
}
int is_composite(int n)
{
  for(int i=2;i<=n;i++)
  {
    if(n%i==0)
    return 1;
  }
  return 0;
}
void output(int n,int is_composite)
{
  if(is_composite)
  printf("%d is a composite num\n",n);
  else
  printf("%d is nt a composite  num\n",n);
}
int main()
{
  int num=input_number();
  int x=is_composite(num);
  output(num ,x);
  return 0;
}