#include<stdio.h>
int input_array_size()
{
  int n;
  printf("enter the size if array\n");
  scanf("%d",&n);
  return n;
}
void input_array(int n,int a[n])
{
  
  for(int i=0;i<n;i++)
    {
      printf("enter the num into array\n");
      scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n,int a[n])
{
  int i,j;
  int sum=0;
  for( i=0;i<n;i++)
    {
      int t=0;
      for(j=2;j<a[i];j++)
        {
      
        
      if((a[i]%j)==0)
        t++;
    }
  if(t!=0)
  {
    sum=sum+a[i];
  }
return sum;
}
  }
void out_put(int sum)
{
  printf("%d\n",sum);
}

int main()
{
  int n,sum;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  sum=sum_composite_numbers(n,a);
  out_put(sum);
  return 0;
  
}