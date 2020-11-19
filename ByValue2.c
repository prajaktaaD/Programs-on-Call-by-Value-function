#include<stdio.h>
int sum(int,int,int);
int main()
{
  int a,b,c,s;
  printf("Enter three numbers:");
  scanf("%d%d%d",&a,&b,&c);

  s=sum(a,b,c);
  printf("\nAddition:%d",s);

  return 0;

}

int sum(int a,int b,int c)
{
  int s;
  s=a+b+c;

  return s;
}
