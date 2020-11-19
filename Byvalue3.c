#include<stdio.h>
int fact(int);
int main()
{
  int num;
  printf("\nEnter num:");
  scanf("%d",&num);

  fact(num);

  return 0;
}

int fact(int n)
{
   int i,p=1;
   for(i=1;i<=n;i++)
   p=p*i;

   printf("\nFactorial of%d is %d",n,p);

   return 0;
}
