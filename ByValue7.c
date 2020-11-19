#include<stdio.h>
int swap(int,int);
int main()
{
   int a,b;
   printf("\nEnter val of a:");
   scanf("%d",&a);

   printf("\nEnter val of b:");
   scanf("%d",&b);

   swap(a,b);
   
   return 0;
}

int swap(int a,int b)
{
  int temp;
  temp=a;
  a=b;
  b=temp;

  printf("\nSwap val of a::%d\nSwap val of b::%d\n",a,b);

  return 0;
}
 
