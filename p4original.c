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
  printf("enter the values\n");
  for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n,int a[n])
{
  int i,count;
  for(i=0;i<n;i++)
  {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(a[i]==2)
       {
          continue;
       }       
        else if(a[i]%2==0)
        {
         count++;
        }
    }
        if(count>2)
        {    
        }
       printf("total composite number are: %d",count);
  
 }
}
int main()
{
  int n;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  
}