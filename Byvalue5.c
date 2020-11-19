#include<stdio.h>
int add_digi(int);
int main()
{
  int num,sum; 

  printf("\nEnter num:");
  scanf("%d",&num);

  sum=add_digi(num);
  printf("\nAddition of digits of%d:%d\n",num,sum);

  return 0;
}

int add_digi(int n)
{
  int r,s=0;
  while(n!=0)
  {
    r=n%10;
    s=s+r;
    n=n/10;
  }

  return s;
}

