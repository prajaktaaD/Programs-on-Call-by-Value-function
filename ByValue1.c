#include<stdio.h>
void sum(int,int,int);
int main()
{
  int a,b,c;
  printf("\nEnter 3 numbers:");
  scanf("%d%d%d",&a,&b,&c);

  sum(a,b,c);
  
  return 0;
}

void sum(int a,int b,int c)
{
  int sum;
  
  sum=a+b+c;
  printf("\nAddition:%d",sum);
}

