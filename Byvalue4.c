#include<stdio.h>
int prime(int);
int main()
{
  int num;
  printf("\nEnter num:");
  scanf("%d",&num);

  prime(num);

  return 0;
}

int prime(int n)
{
  int i,f=0;
  for(i=2;i<n;i++)
   {
     if(n%i==0)
       {
         f++;
         break;
       }
    }

  if(f!=0)
  printf("\nNot Prime!");
  

  else
  printf("\nPrime!");

  return 0;
}
