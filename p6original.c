#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
  printf("enter the string to be revered\n");
  scanf("%s",a);
}
char str_reverse(char *a,char *re)
{
  
  char temp;
  int i=0,j=0;
  j=strlen(re)-1;

  while(i<j)
    {
      temp=re[i];
      re[i]=re[j];
      re[j]=temp;
      i++;
      j--;
    }
    
}
void output(char *a,char *re)
{
  printf("the reverse string of %s is %s\n",a,re);
}
int main()
{
 char a,re[20];
  input_string(re);
  str_reverse(&a,re);
  output(&a,re);
  return 0;
}